#include<stdio.h>

main()
{
	int a,b;
	printf("Enter two nubers : a,b :");
	scanf("%d%d",&a,&b);
	printf("\nBefore swapping a=%d, b= %d",a,b);
	swap(&a,&b);
	
}

int swap(int *x,int *y)
	{int temp;
	temp =x;
	x=y;
	y=temp;
	printf("\nAfter swapping a= %d , b= %d",*x,*y);
	return 0;

}
