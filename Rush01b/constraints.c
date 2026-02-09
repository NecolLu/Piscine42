
int check_constraints(int grid[4][4], int constraints[16])
{
    int i;

    for (i = 0; i < 4; i++)
        if (!check_col(grid, i, constraints[i], constraints[4 + i]))
            return (0);

    for (i = 0; i < 4; i++)
        if (!check_row(grid, i, constraints[8 + i], constraints[12 + i]))
            return (0);

    return (1);
}

int check_row(int grid[4][4], int row, int left, int right)
{
    int line[4];
    int i;

    for (i = 0; i < 4; i++)
        line[i] = grid[row][i];
    if (count_visible(line, 4) != left)
        return (0);

    for (i = 0; i < 4; i++)
        line[i] = grid[row][3 - i];
    if (count_visible(line, 4) != right)
        return (0);

    return (1);
}

int check_col(int grid[4][4], int col, int top, int bottom)
{
    int line[4];
    int i;

    for (i = 0; i < 4; i++)
        line[i] = grid[i][col];
    if (count_visible(line, 4) != top)
        return (0);

    for (i = 0; i < 4; i++)
        line[i] = grid[3 - i][col];
    if (count_visible(line, 4) != bottom)
        return (0);

    return (1);
}

int visibility(int *line)
{
    int count = 0;
    int highest = 0;

    for (int i = 0; i < 4; i++)
    {
        if (line[i] > highest)
        {
            highest = line[i];
            count++;
        }
    }
    return count;
}
