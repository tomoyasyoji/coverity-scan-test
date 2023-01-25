#include<cstdio>
#include<cstdlib>

// NOTE: Please see below for global variables.
// https://community.synopsys.com/s/question/0D52H00005wuoUySAI/will-coverity-treat-global-variables-in-c-as-zeroinitialized
// https://community.synopsys.com/s/article/Coverity-Analysis-can-not-find-defects-in-a-function-that-uses-global-variables

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
