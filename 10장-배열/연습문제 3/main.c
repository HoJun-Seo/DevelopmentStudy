#include <stdio.h>
int main()
{
	int i = 0, k = 1;
	int result = 0;
	int array1[5] = {90, 78, 77, 98, 98};
	int array2[5] = {80, 45, 67, 88, 57};
	int array3[5] = {88, 99, 65, 55, 74};
	
	int row[3] = {};
	int column[5] = {};
	
	for( ; i < 5; i++)
	{
		row[0] = row[0] + array1[i];
	}
	for(i = 0; i < 5; i++)
	{
		row[1] = row[1] + array2[i];
	}
	for(i = 0; i < 5; i++)
	{
		row[2] = row[2] + array3[i];
	}
	
	for(i = 0; i < 5; i++)
	{
		column[i] = array1[i] + array2[i] + array3[i];
	}
	
	for(i = 0; i < 3; i++)
	{
		printf("%d 번째 가로 행의 합 : %d \n", k, row[i]);
		k++;
	}
	k = 1;
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d 번째 세로 열의 합 : %d \n", k, column[i]);
		k++;
	}
	printf("\n");
	for(i = 0; i < 3; i++)
	{
		result = result + row[i];
	}
	printf("모든 수의 합 : %d \n", result);
	
	system("pause");
	return 0;
}

