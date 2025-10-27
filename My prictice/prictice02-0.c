#include <stdio.h>

int main()
{
	int A,B,X,Y,Z,N;
	
	printf ("请输入两个正整数：");
	scanf("%d %d",&A,&B);
	
	X = A + B;
	Y = A - B;
	Z = A * B;
	N = A / B;
	
	printf("%d + %d = %d\n",A,B,X);
	printf("%d - %d = %d\n",A,B,Y);
	printf("%d * %d = %d\n",A,B,Z);
	printf("%d / %d = %d\n",A,B,N);
	
	return 0;
}
