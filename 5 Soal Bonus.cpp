#include <stdio.h>

int main()
{
	int data, A[100];
	printf("Masukkan data = "); scanf("%d", &data);
	for (int i = 1; i <= data; i++)
	{
		printf("A[%d] = ", i); scanf("%d", &A[i]);
	}
	printf("\n\n");
	for (int i = 1; i <= data; i++)
	{
		if (A[i] % 2 == 0)
		{
			printf("A[%d] = bilangan genap", i);
		}
		else if (A[i] % 2 == 1)
		{
			printf("A[%d] = bilangan ganjil", i);
		}
		printf("\n");
	}
	printf("\n\n");
	
	return 0;
}
