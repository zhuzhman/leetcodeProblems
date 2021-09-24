int areaCount(int **grid, int gridSize, int gridColSize, int r, int c)
{
    if ((r < 0) || (r >= gridSize) || (c < 0) || (c >= gridColSize) || (grid[r][c] != 1))
        return 0;
    grid[r][c] = 2;
    return (1 + areaCount(grid, gridSize, gridColSize, r - 1, c) + areaCount(grid, gridSize, gridColSize, r, c + 1) + areaCount(grid, gridSize, gridColSize, r + 1, c) + areaCount(grid, gridSize, gridColSize, r, c - 1));
}

int maxAreaOfIsland(int** grid, int gridSize, int* gridColSize){
    int r;
    int c;
    int temp;
    int result;
    
    result = 0;
    temp = 0;
    r = 0;
    while (r < gridSize)
    {
        // areaCount(grid, gridSize, gridColSize[0])
        c = 0;
        while (c < gridColSize[0])
        {
            if (grid[r][c] == 1)
            {
                temp = areaCount(grid, gridSize, gridColSize[0], r, c);
                printf("%d\n", temp);
                if (temp > result)
                    result = temp;
            }
            c++;
        }
        r++;
    }
    printf("\n");
    return (result);
}
