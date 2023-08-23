#!/usr/bin/python3
"""Contains function island_perimeter"""


def island_perimeter(grid):
    """Returns the perimeter of grid island"""
    e = 0
    isl = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                isl += 1
                if x > 0 and grid[x - 1][y] == 1:
                    e += 1
                if y > 0 and grid[x][y - 1] == 1:
                    e += 1

    return (isl * 4) - (e * 2)
