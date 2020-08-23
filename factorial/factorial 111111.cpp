#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	double k, answer = 1;
	printf("factorial calculator : ");
	scanf("%lf", &k);
	printf("Ansewer = ");
	if (k > 0)
	{
		while (k >= 1)
		{

			answer = answer * k;
			k = k - 1;

		}
		printf("%.0lf", answer);
	}
	else if (k == 0)
	{
		printf(" 1 ");
	}
	else if (k < 0)
	{
		printf(" _!@# ERROR #@!_ ");
	}
}