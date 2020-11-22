#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct person
{
	char code[6];
	int score;
	bool result = false;
};

person p[10000];
float avg = 0;

void input(int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%s", p[i].code);
		scanf("%d", &p[i].score);
	}
}

void calculate(int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += p[i].score;
	}
	avg = sum / n;
}

int main()
{
	int n, count = 0;
	scanf("%d", &n);
	input(n);
	calculate(n);
	for (int i = 0; i < n; i++)
	{
		if (p[i].score >= avg)
		{
			p[i].result = true;
			count++;
		}
	}
	printf("%d\n", count);
	for (int i = 0; i < n; i++)
	{
		if (p[i].result == true) printf("%s\n", p[i].code);
	}

	return 0;
}