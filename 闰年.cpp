
#include <stdio.h>
 
int main()
{
	int i;
	printf("������һ����ݣ�");
	scanf("%d",&i);
	if( i >= 2000 && i <= 2500 )
	{
		if( ( i % 4 == 0 && i % 100 != 0 ) || i % 400 == 0 )
			printf("%d������\n",i);
		else
			printf("%d��������\n",i);
	}
	else
		printf("���������ݲ��ڷ�Χ�ڣ�����������\n");
	return 0;
}	