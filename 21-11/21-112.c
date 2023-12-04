#include <stdio.h>
int main()
{
	int n, n1;

	printf("array's row size:");
	scanf("%d", &n);

	printf("array's column size:");
	scanf("%d", &n1);
	int a[n][n1];
	int b[n][n1];
	int c[n][n1];

	printf("array A's elements:");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n1; j++)
		{

			printf("\na[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("array B's elements:");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n1; j++)
		{

			printf("\na[%d][%d]=", i, j);
			scanf("%d", &b[i][j]);
		}
	}
	printf("array c is:");
	
	for (int i = 0; i < n + n1; i++)
	{
		for (int j = 0; j < n + n1; j++)
		{

			c[i][j] = a[i][j] + b[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n1; j++)
		{

			printf("%d ",c[i][j]);
			
		}
		printf("\n");
		
	}
	return 0;
}


