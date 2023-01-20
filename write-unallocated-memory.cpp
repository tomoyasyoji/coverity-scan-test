#include<cstdio>
#include<cstdlib>

int main(int argc, char *argv[])
{
	int *p = (int *)0xdeadbeef;

	printf("p = %p\n", p);
	*p = 123;

	return EXIT_SUCCESS;
}
