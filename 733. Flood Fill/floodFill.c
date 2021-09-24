void    ft_fill(int **image, int imageSize, int imageColSize, int sr, int sc, int newColor, int source)
{
    if ((sr < 0) || (sr >= imageSize) || (sc < 0) || (sc >= imageColSize))
        return ;
    else if (source != image[sr][sc])
        return ;
    image[sr][sc] = newColor;
    ft_fill(image, imageSize, imageColSize, sr - 1, sc, newColor, source);
    ft_fill(image, imageSize, imageColSize, sr, sc + 1, newColor, source);
    ft_fill(image, imageSize, imageColSize, sr + 1, sc, newColor, source);
    ft_fill(image, imageSize, imageColSize, sr, sc - 1, newColor, source);
}

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc, int newColor, int* returnSize, int** returnColumnSizes){
    int source;
    
    source = image[sr][sc];
    *returnSize = imageSize;
    *returnColumnSizes = imageColSize;
    if (source == newColor)
        return (image);
    ft_fill(image, imageSize, imageColSize[0], sr, sc, newColor, source);
    return (image);
}
