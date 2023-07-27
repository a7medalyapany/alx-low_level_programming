section .data
    hello_msg db "Hello, Holberton", 0x0a, 0 ; The message to be printed followed by newline (0x0a) and null terminator (0)

section .text
    global _start

_start:
    ; Set up the arguments for the printf function
    mov rdi, hello_msg  ; The first argument (format string) - address of hello_msg
    xor rax, rax        ; Clear RAX to indicate printf returns an int
    call printf         ; Call the C printf function
    xor rdi, rdi        ; Clear RDI to indicate program success
    call exit_program   ; Call the C exit function

; Function to call exit C function
exit_program:
    mov rax, 60         ; syscall number for exit
    syscall            ; Call the kernel

; Function to call printf C function
printf:
    ; Save callee-saved registers (RBX, RBP, R12-R15) according to ABI
    push r15
    push r14
    push r13
    push r12
    push rbx
    ; Call printf function
    mov rax, 0x1       ; syscall number for write
    mov rdi, 0x1       ; file descriptor 1 (stdout)
    mov rsi, rdi       ; pointer to the message to be printed
    pop rdx            ; message length (calculated using retaddr - message address)
    syscall
    ; Restore callee-saved registers and return
    pop rbx
    pop r12
    pop r13
    pop r14
    pop r15
    ret
