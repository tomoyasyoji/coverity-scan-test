#include<cstdio>
#include<cstdlib>

int g1;
static int g2;

int main()
{
	int l1;
	static int l2;

	printf("g1 = %d\n", g1);
	printf("g2 = %d\n", g2);
	printf("l1 = %d\n", l1);
	printf("l2 = %d\n", l2);

	return EXIT_SUCCESS;
}
