#!/usr/bin/python3
"""
Island Perimeter
"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid
       Args:
           grid (list of lists)
    """
    if type(grid) is not list:
        return(0)
    if type(grid[0]) is not list:
        return(0)
    s = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                s += 4
                if i != 0 and grid[i][j+1] == 1:
                    s -= 1
                if j != 0 and grid[i+1][j] == 1:
                    s -= 1
                if i != 0 and grid[i][j-1] == 1:
                    s -= 1
                if j != 0 and grid[i-1][j] == 1:
                    s -= 1
    return(s)
