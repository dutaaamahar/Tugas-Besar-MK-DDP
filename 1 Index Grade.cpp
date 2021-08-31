#include <stdio.h>

int main()
{
	int nim; 
	float nilai, ntugas, naktif, nujian;
	char grade, nama[50];
	printf("Input Nilai Praktikum Mahasiswa");
	printf("\n");
	printf("-------------------------------------");
	printf("\n\n");
	printf("Nama\t: "); scanf("%s", &nama);
	printf("NIM\t: "); scanf("%d", &nim);
	printf("\n\n");
	printf("---- Nilai yang diperoleh ----");
	printf("\n");
	printf("Keaktifan: "); scanf("%f", &naktif);
	printf("Tugas\t : "); scanf("%f", &ntugas);
	printf("Ujian\t : "); scanf("%f", &nujian);
	printf("\n");
	printf("==== Output nilai yang didapatkan ====");
	printf("\n");
	printf("Nama\t: %s",nama);
	printf("\n");
	nilai = (naktif * 35 / 100) + (ntugas * 30 / 100) + (nujian * 35 / 100);
	if (nilai <= 44)
	{
		grade = 'E';
	}
	else if (nilai <= 55)
	{
		grade = 'D';
	}
	else if (nilai <= 67)
	{
		grade = 'C';
	}
	else if (nilai <= 79)
	{
		grade = 'B';
	}
	else
	{
		grade = 'A';
	}
	printf("Index\t: %c", grade);
	printf("\n");
	
	return 0;
}
