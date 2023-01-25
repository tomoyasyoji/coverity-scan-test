#include<cstdio>
#include<cstdlib>

int main()
{
	int *p = (int *)0xdeadbeef;

	printf("p = %p\n", p);
	printf("%d\n", *p);

	return EXIT_SUCCESS;
}
