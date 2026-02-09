#include "rush01.h"

int duplicate(int grid[4][4], int row, int col, int num)
{
    for (int x = 0; x < 4; x++)
    {
        if (grid[row][x] == num || grid[x][column] == num)
            return (0);
        else
            return (1);
    }
    
}

int solve(int grid[4][4], int constraints[16], int row, int col)
{
    if (row == 4)
        return constraints(grid, constraints);

    int next_row;
    int next_col;
    
    next_row = (col == 3) ? row + 1 : row;
    next_col = (col + 1) % 4;
    /*if (col + 1 == 4)
        next_col = 0;
    else
        next_col = col + 1;

    if (col == 3)
        next_row = row + 1;
    else
        next_row = row;*/
         for (num = 1; num <= 4; num++)
    {
        if (is_safe(grid, row, col, num))
        {
            grid[row][col] = num;

            if (solve(grid, constraints, next_row, next_col))
                return (1);

            grid[row][col] = 0;
        }
    }
    return (0); 
}