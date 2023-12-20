#!/usr/bin/python3
"""This script contains a function to calculate the perimeter of an island."""


def island_perimeter(grid):
    """Calculates the total perimeter of an island.

    The island is represented in a grid where
    0 denotes water and 1 denotes land.

    Args:
        grid (list): A two-dimensional list of integers
        representing the island.

    Returns:
        int: The total perimeter of the island as defined in the grid.
    """
    grid_width = len(grid[0])
    grid_height = len(grid)
    shared_edges = 0
    land_blocks = 0

    for row in range(grid_height):
        for col in range(grid_width):
            if grid[row][col] == 1:
                land_blocks += 1
                if (col > 0 and grid[row][col - 1] == 1):
                    shared_edges += 1
                if (row > 0 and grid[row - 1][col] == 1):
                    shared_edges += 1
    return land_blocks * 4 - shared_edges * 2
