#include<cstdio>
#include<cstdlib>

#define ARRAY_SIZE	5

int main(int argc, char *argv[])
{
	int a[ARRAY_SIZE] = {1, 2, 3, 4, 5};

	printf("a = %p\n", a);
	for (int i = 0; i < ARRAY_SIZE + 1; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}

	return EXIT_SUCCESS;
}
