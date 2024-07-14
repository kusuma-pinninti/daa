#include <stdio.h>
#define N 4
int board[N][N];

bool is_safe(int row, int col)
{
    
    for(int i=0;i<col;i++)
    {
    	if(board[row][i]==1)
    	return false;
	}
	for(int i=row,j=col;i<N&&j>=0;i++,j--)
	{
		if(board[i][j]==1)
		return false;
	}
	for(int i=row,j=col;i>=0&&j>=0;i--,j--)
	{
		if(board[i][j]==1)
		return false;
   
    }

    return true;
}

bool solve_n_queens(int col)
{
  if(col>=N)
  return true;
  for(int i=0;i<N;i++)
  {
  	if(is_safe(i,col))
  	{
  	    board[i][col]=1;
  		if(solve_n_queens(col+1))
  		{
  			printf("hello");
  		return true;
  	    }
  		
	}
	board[i][col]=0;
  }
  return false;
}

void print_solution()
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    if (solve_n_queens(0)) {
       
       for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    } else {
        printf("No solution found.\n");
    }
    return 0;
}

