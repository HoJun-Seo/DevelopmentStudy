#include <stdio.h>
#include <limits.h>
int main(void)
{
	printf("char ÀÇ ÃÖ¼Ú°ª %d, ÃÖ´ñ°ª %d \n", CHAR_MIN, CHAR_MAX);
	printf("short ÀÇ ÃÖ¼Ú°ª %d, ÃÖ´ñ°ª %d \n", SHRT_MIN, SHRT_MAX);
	printf("int ÀÇ ÃÖ¼Ú°ª %d, ÃÖ´ñ°ª %d \n", INT_MIN, INT_MAX);
	printf("long ÀÇ ÃÖ¼Ú°ª %d, ÃÖ´ñ°ª %d \n", LONG_MIN, LONG_MAX);
	system("pause");
	return 0;
}
