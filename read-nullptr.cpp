#include<cstdio>
#include<cstdlib>

int main(int argc, char *argv[])
{
	int *p = nullptr;

	printf("p = %p\n", p);
	printf("%d\n", *p);

	return EXIT_SUCCESS;
}
