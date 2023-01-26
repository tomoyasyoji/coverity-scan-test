#include<cstdio>
#include<cstdlib>

#define ARRAY_SIZE	5

int *a;

int main()
{
	int *b;

	a = (int *)malloc(sizeof(int) * ARRAY_SIZE);
	if (a == nullptr) {
		return EXIT_FAILURE;
	}

	b = (int *)malloc(sizeof(int) * ARRAY_SIZE);
	if (b == nullptr) {
		return EXIT_FAILURE;
	}

	for (int i = 0; i < ARRAY_SIZE; i++) {
		a[i] = i + 1;
		b[i] = i + 1;
	}

	printf("a = %p\n", a);
	printf("b = %p\n", b);
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		printf("a[%d] = %d\n", i, a[i]);
		printf("b[%d] = %d\n", i, b[i]);
	}

	free(a);
	free(b);

	return EXIT_SUCCESS;
}
