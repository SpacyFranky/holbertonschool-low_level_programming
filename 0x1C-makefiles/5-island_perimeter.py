#!/usr/bin/python3
"""
Island Perimeter
"""
def island_perimeter(grid):
    """Returns the perimeter of the island described in grid
       Args:
           grid (list of lists)
    """
    s = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                s += 3

    return(s - 3)
