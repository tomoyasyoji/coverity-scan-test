#include<cstdio>
#include<cstdlib>

int main()
{
	int *p = (int *)0xdeadbeef;

	printf("p = %p\n", p);
	*p = 123;

	return EXIT_SUCCESS;
}
