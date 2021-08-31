#include <stdio.h>

int main()
{
	int x, y, A[4][4];
	char genap;
	printf("------ Mengubah Nilai Genap Menjadi * ------");
	printf("\n\n");
	for (x = 1; x < 4; x++)
	{
		for (y = 1; y < 4; y++)
		{
			printf("A[%d][%d] :  ", x, y); scanf("%d", &A[x][y]);
		}
		printf("\n");
	}
	printf(" Sebelum Proses ");
	printf("\n\n");
	for (x = 1; x < 4; x++)
	{
		printf("|\t");
		for (y = 1; y < 4; y++)
		{
			printf("%d\t", A[x][y]);
		}
		printf("|\n");
	}
	printf("\n");
	printf(" Sesudah Proses ");
	printf("\n\n");
	for (x = 1; x < 4; x++)
	{
		printf("|\t");
		for (y = 1; y < 4; y++)
		{
			if (A[x][y] % 2 == 0)
			{
				genap = '*';
				printf("%c\t", genap);
			}
			else
			{
				printf("%d\t", A[x][y]);
			}
		}
		printf("|\n");
	}
	return 0;
}
