#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int n, i = 0, e;
void spec()
{
	e = 2;
	while ("e>=2&&e<=9")
	{
		if (n == 1) {
			i = 1;
			break;
		}
		if (n % e == 0 && n != e) {
			i = 1;
			break;
		}
		e++;
		if (e == 10) {
			break;
		}
	}
}
int main()
{
	printf("Enter number : ");
	scanf("%d", &n);
	printf("\n------------------\n");
	spec();
	if (i == 1) {
		printf("%d is not specific amount", n);
	}
	else { printf("%d is specific amount", n); }
	return 0;
}