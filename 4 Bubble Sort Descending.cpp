#include <stdio.h>
#include <conio.h>

int i, j, k, bantu, data, A[30], b[100];
typedef struct datab
{
	int A[];
	int beep[100];
} datab;

int main()
{
	datab baru;
	int *tunjuk;
	printf("Masukkan jumlah data = "); scanf("%d", &data);
	printf("\n\n");
	for (i = 1; i <= data; i++)
	{
		printf(" A[%d] = ", i); scanf("%d", &baru.A);
		tunjuk = baru.A;
		b[i] = *tunjuk;
	}
	printf("\n\n");
	printf("--------------- Data tak terurut ---------------");
	printf("\n\n");
	printf(" A = { ");
	for (i = 1; i <= data; i++)
	{
		printf("%d,", b[i]);
	}
	printf(" } ");
	for (i = 1; i <= (data - 1); i++)
	{
		for (j = data; j >= (i + 1); j--)
		{
			if (b[j] > b[j - 1])
			{
				bantu = b[j - 1];
				b[j - 1] = b[j];
				b[j] = bantu;
				printf("\n\n");
				printf(" A = { ");
				for (k = 1; k <= data; k++)
				{
					printf("%d,", b[k]);
				}
				printf(" } ");
			}
		}
	}
	printf("\n\n");
	printf("------------------ Data terurut ------------------");
	printf("\n\n");
	printf(" A = { ");
	for (i = 1; i <= data; i++)
	{
		printf("%d,", b[i]);
	}
	printf(" } ");
	return 0;
}
