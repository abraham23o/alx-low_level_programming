#!/usr/bin/python3
"""
Finds the perimeter of an island (grid)
"""


def island_perimeter(grid):
    """
    calculate the perimeter of an island
    represented as a grid
    Attributes:
        grid: a list of list of integers
        where 0 reps water, 1 reps land
    Returns:
        perimeter of an island
    """
    rows = len(grid)
    cols = len(grid[0])
