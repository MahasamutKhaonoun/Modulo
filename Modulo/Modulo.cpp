#include<stdio.h>

int modulo(int, int);

int main()
{
	int num[10], pre[10];
	int* n = num;
	int mo = 42, total = 0;
	for (int i = 0; i < 10; i++)
	{
		if (scanf_s("%d", &num[i]) != 1)
		{
			printf("Error");
			return 1;
		}
		else if (num[i] < 0 || num[i] > 1000)
		{
			printf("Error");
			return 1;
		}
	}
	for (int j = 0; j < 10; j++, n++)
	{
		pre[total] = modulo(*n, mo);
		for (int k = 0; k < total; k++)
		{
			if (pre[k] == pre[total])
			{
				total--;
				k = total;
			}
		}
		total++;
	}
	printf("\n%d", total);
	return 0;
}

int modulo(int x, int y)
{
	int result;
	if (( x > -32768 && x < 32767) && (y > -32768 && y < 32767))
	{
		result = x % y;
		return result;
	}
}