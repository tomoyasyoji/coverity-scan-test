#include<cstdio>
#include<cstdlib>

#define ARRAY_SIZE	5

int a[ARRAY_SIZE];
int b[ARRAY_SIZE] = {1, 2, 3, 4, 5};

int main()
{
	int c[ARRAY_SIZE];
	int d[ARRAY_SIZE] = {6, 7, 8, 9, 10};

	printf("a = %p\n", a);
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	printf("b = %p\n", b);
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		printf("b[%d] = %d\n", i, b[i]);
	}
	printf("c = %p\n", c);
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		printf("c[%d] = %d\n", i, c[i]);
	}
	printf("d = %p\n", d);
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		printf("d[%d] = %d\n", i, d[i]);
	}

	a[0xff] = 0xdeadbeef;
	b[0xff] = 0xdeadbeef;
	c[0xff] = 0xdeadbeef;
	d[0xff] = 0xdeadbeef;

	return EXIT_SUCCESS;
}
