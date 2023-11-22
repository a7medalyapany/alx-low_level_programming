#!/usr/bin/python3
"""
Calculates the perimeter of an island in a grid.
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    """
    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += 4  # Each land cell contributes 4 sides to the perimeter

                # Check adjacent cells (up, down, left, right)
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # If adjacent cell is also land, deduct 2 sides

                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2  # If adjacent cell is also land, deduct 2 sides

    return perimeter


# For testing the function
if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
