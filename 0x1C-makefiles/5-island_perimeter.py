#!/usr/bin/python3
"""
island perimeter module
"""


def island_perimeter(grid):
    """
    count len of island perimeter
    """
    res = 0
    for y, rw in enumerate(grid):
        for x, ce in enumerate(rw):
            if ce == 1:
                if y == 0 or grid[y - 1][x] == 0:
                    ret += 1
                if y == len(grid) - 1 or grid[y + 1][x] == 0:
                    ret += 1
                if x == 0 or grid[y][x - 1] == 0:
                    ret += 1
                if x ==len(rw) - 1 or grid[y][x + 1] == 0:
                    res += 1
    return res	
