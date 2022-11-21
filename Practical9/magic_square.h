//Check if a matrix is a magic square
int isMagicSquare(int **square, const int n) 
{
    if(n<0)
    {
        return 0;
    }
    int magic_num = 0; 
    int off_diag_sum =0;
    int i,j;
    for(i = 0; i<n;i++){ // Count the magic number and off diagonal number
        magic_num += square[i][i];
        off_diag_sum += square[i][n-i-1];
    }
    if(off_diag_sum != magic_num){
        return 0;
    }
    for(i=0;i<n;i++) // Count the row number and column number
    {
        int rowSum = 0;
        int colSum = 0;
        for(j=0;j<n;j++){
            rowSum += square[i][j];
            colSum += square[j][i];
        }
        if(rowSum != magic_num || colSum != magic_num){ // Return 0, if the square is not magic
            return 0;
        }
    }
    // Return 1 if the square is magic
    return 1; 
}
