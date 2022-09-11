#include<stdio.h>
int max(int n, int m) {
	int x;
	if (n > m) {
		x = n;
	}
	else
		x = m;
	return x;
}
int main() {//65010536
	int a, b, c,d,e,g;
	printf("enter first number : ");
	scanf_s("%d", &a);
	printf("enter second number : ");
	scanf_s("%d", &b);
	printf("enter third number : ");
	scanf_s("%d", &c);
	printf("enter fouth number : ");
	scanf_s("%d", &d);
	printf("enter fifth number : ");
	scanf_s("%d", &e);
	g = max(max(a, b), max(c, d));
	printf("Result = %d",max(e,g));
	return 0;
}