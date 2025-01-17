#include <stdio.h>

int main() {
	int a = 150;
	printf("%d\n", &a);

	int* p = &a;
	printf("%d\n", &p);
	printf("%d\n", p);
	printf("%d\n", *p);

	*p = 25;
	printf("%d", a);
}