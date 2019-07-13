#include <stdio.h>
#include <float.h>
int main(void)
{
	printf("float曖 譆歐高 %e, 譆渤高 %e \n", FLT_MIN, FLT_MAX);
	printf("double曖 譆歐高 %e, 譆渤高 %e \n", DBL_MIN, DBL_MAX);
	printf("long double曖 譆歐高 %e, 譆渤高 %e \n", LDBL_MIN, LDBL_MAX);
	system("pause");
	return 0;
}
