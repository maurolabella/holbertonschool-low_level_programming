#!/usr/bin/python3
"""calculates perimeter defined by contiguos cell positions with 1"""


def island_perimeter(grid):
    """calculates perimeter defined by contighous cell positions with 1"""
    perim = 0
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                perim += 4
                if y > 0:
                    if grid[y - 1][x] == 1:
                        perim -= 2
                if x > 0:
                    if grid[y][x - 1] == 1:
                        perim -= 2
    return perim
