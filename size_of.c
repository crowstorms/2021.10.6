//��ӡ���ʹ�С
#include<stdio.h>
int main()
{
	printf("Type int has a size of %zd bytes.\n",sizeof(int));//��printf��ӡ���͵Ĵ�С�����õ�ת��˵����%zd
	printf("Type char has a size of %zd bytes.\n",sizeof(int));
	printf("Type long has a size of %zd bytes.\n",sizeof(long));
	printf("Type long long has a size of %zd bytes.\n",sizeof(long long));
	printf("Type double has a size of %zd bytes.\n",sizeof(double));
	printf("Type long double has a size of %zd bytes.\n",sizeof(long double));
			
	return 0;
}
