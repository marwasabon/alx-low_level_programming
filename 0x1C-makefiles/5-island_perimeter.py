#!/usr/bin/python3
""" This is the module """


def island_perimeter(grid):
    """ Function that returns detail of a grid"""

    perimeter = 0
    i_thresh = len(grid) - 1
    for i, single_list in enumerate(grid):
        j_thresh = len(single_list) - 1
        for j, tile in enumerate(single_list):
            if tile == 1:
                p_contribution = 4
                if (j != j_thresh):
                    if (single_list[j + 1]) == 1:
                        p_contribution -= 1
                if (j != 0) and single_list[j - 1] == 1:
                    p_contribution -= 1
                if (i != 0) and grid[i - 1][j] == 1:
                    p_contribution -= 1
                if (i != i_thresh):
                    if grid[i + 1][j] == 1:
                        p_contribution -= 1
                perimeter += p_contribution
    return perimeter

    return sum(sur)
