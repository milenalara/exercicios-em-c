#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	// Leia três valores a,b,c. em seguida preencha uma matriz (5x5) da seguinte forma. Os valores acima da diagonal principal devera? ser preenchido com o valor a, abaixo da diagonal principal devera? ser preenchido com o valor b, e a diagonal principal devera? ser preenchida com o valor c.

	setlocale(LC_ALL, "Portuguese");

	int matriz[5][5], i, j, a, b, c;

	printf("Informe a:\n");
	scanf("%i", &a);
	printf("Informe b:\n");
	scanf("%i", &b);
	printf("Informe c:\n");
	scanf("%i", &c);

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i < j)
			{
				matriz[i][j] = a;
			}
			if (i == j)
			{
				matriz[i][j] = c;
			}
			if (i > j)
			{
				matriz[i][j] = b;
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			// printf("mat[%i][%i]=%2i ", i, j, matriz[i][j]);
			printf("%2i ", matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}
