#include<cstdio>
#include<cstdlib>

int main(int argc, char *argv[])
{
	int *p = nullptr;

	printf("p = %p\n", p);
	*p = 123;

	return EXIT_SUCCESS;
}
