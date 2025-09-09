#include <stdio.h>
#include<limits.h>

int main(void) {
	//char 1����Ʈ ����
	char ch= 'A';
	printf("char:\n"); 
	printf("Value:%c\n",ch);
	printf("Max:%d\n", CHAR_MAX);
	printf("Min:%d\n", CHAR_MIN);

	//signed short int 2����Ʈ ����
	signed short int sshort= 1234;
	printf("\nsigned short int:\n");
	printf("Value:%d\n", sshort);
	printf("Max:%d\n", SHRT_MAX);
	printf("Min:%d\n", SHRT_MIN);
	
	//unsigned short int 2����Ʈ ����
	unsigned short int ushort = 1234U;
	printf("\nsigned short int:\n");
	printf("Value:%d\n", ushort);
	printf("Max:%d\n", USHRT_MAX);
	
	//signed int 4����Ʈ ����
	signed int sint = 1234;
	printf("\nsigned short int:\n");
	printf("Value:%d\n", sint);
	printf("Max:%d\n", INT_MAX);
	printf("Min:%d\n", INT_MIN);


	//unsigned int 4����Ʈ ����
	unsigned int uint = 12345U;
	printf("\nunsigned short int:\n");
	printf("Value:%d\n", uint);
	printf("Max:%d\n", UINT_MAX); 

	//signed long int 4����Ʈ ����
	signed  long int slong = 123456789L;
	printf("\nsigned long int:\n");
	printf("Value:%d\n", slong);
	printf("Max:%d\n", LONG_MAX); //limt.h�� ���
	printf("Min:%d\n", LONG_MIN);

	//unsigned log int 4����Ʈ ����
	unsigned  long int ulong = 123456789UL;
	printf("\nunsigned long  int:\n");
	printf("Value:%d\n", ulong);
	printf("Max:%d\n", ULONG_MAX);
	
	//float (�׻� ��ȣ �ִ�) 8����Ʈ �Ǽ�
	float f = 123.456;
	printf("\nfloat:\n");
	printf("Value:%.3f\n", f);
	//printf("Max:%d\n", FLT_MAX); //limt.h�� ���
	//printf("Min:%d\n", FLT_MIN);
	
	// double 8����Ʈ �Ǽ�
	double d = 123456.789123f;
	printf("\ndouble:\n");
	printf("Value:%.3f\n", d);
	//printf("Max:%d\n", DBL_MAX); //limt.h�� ���
	//printf("Min:%d\n", DBL_MIN);
	return 0;
}