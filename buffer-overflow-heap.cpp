#include<cstdio>
#include<cstdlib>

#define ARRAY_SIZE	5

int main()
{
	int *a = (int *)malloc(sizeof(int) * ARRAY_SIZE);
	if (a == nullptr) {
		return EXIT_FAILURE;
	}

	for (int i = 0; i < ARRAY_SIZE; i++) {
		a[i] = i + 1;
	}

	printf("a = %p\n", a);
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}

	free(a);

	return EXIT_SUCCESS;
}
