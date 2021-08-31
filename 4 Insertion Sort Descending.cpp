#include <stdio.h>
#include <conio.h>

int main()
{
	int x, y, z, bantu, data, C[100];
	printf("Masukkan jumlah data = "); scanf("%d", &data);
	printf("\n\n");
	for (x = 1; x <= data; x++)
	{
		printf(" C[%d] = ", x); scanf("%d", &C[x]);
	}
	printf("\n\n");
	printf("--------------- Data tak terurut ---------------");
	printf("\n\n");
	printf(" A = { ");
	for (x = 1; x <= data; x++)
	{
		printf("%d,", C[x]);
	}
	printf(" } ");
	for (x = 2; x <= data; x++)
	{
		z = C[x];
		C[0] = z;
		y = x - 1;
		while (z > C[y])
		{
			C[y + 1] = C[y];
			y = y - 1;
		}
		C[y + 1] = z;
	}
	printf("\n\n");
	printf("------------------ Data terurut ------------------");
	printf("\n\n");
	printf(" A = { ");
	for (x = 1; x <= data; x++)
	{
		printf("%d,", C[x]);
	}
	printf(" } ");
	
	return 0;
}
