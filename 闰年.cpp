
#include <stdio.h>
 
int main()
{
	int i;
	printf("请输入一个年份：");
	scanf("%d",&i);
	if( i >= 2000 && i <= 2500 )
	{
		if( ( i % 4 == 0 && i % 100 != 0 ) || i % 400 == 0 )
			printf("%d是闰年\n",i);
		else
			printf("%d不是闰年\n",i);
	}
	else
		printf("你输入的年份不在范围内，请重新输入\n");
	return 0;
}	