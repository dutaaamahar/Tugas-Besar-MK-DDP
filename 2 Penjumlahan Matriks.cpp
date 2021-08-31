#include <stdio.h>

int main()
{
	int i, j, m, n, A[10][10], B[10][10], C[10][10];
	printf("Masukkan Penjumlahan Matriks");
	printf("\n");
	printf("-----------------------------------");
	printf("\n\n");
	printf("Masukkan jumlah baris matriks: "); scanf("%d", &i);
	printf("Masukkan jumlah kolom matriks: "); scanf("%d", &j);
	printf("\n\n");
	printf("Masukkan element matrix pertama: ");
	printf("\n");
	for (m = 0; m < i; m++)
	{
		for (n = 0; n < j; n++)
		{
			printf("A[%d][%d] = ", m, n); scanf("%d", &A[m][n]);
		}
	}
	printf("\n\n");
	printf("Masukkan elemen matrix kedua: ");
	printf("\n");
	for (m = 0; m < i; m++)
	{
		for (n = 0; n < j; n++)
		{
			printf("A[%d][%d] = ", m, n); scanf("%d", &B[m][n]);
		}
	}
	printf("\n\n");
	printf("Hasil penjumlahan matrix: ");
	printf("\n");
	for (m = 0; m < i; m++)
	{
		for (n = 0; n < j; n++)
		{
			C[m][n] = A[m][n] + B[m][n];
			printf("%d\t", C[m][n]);
		}
		printf("\n");
	}
	return 0;
}
