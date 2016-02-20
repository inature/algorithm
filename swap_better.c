#include<stdio.h>
void swap(int *, int *);
int main(){
 	int a=100;
	int b=2;
	swap(&a,&b);
	printf("a=%d b=%d\n",a,b);
	return 0;
}

void swap(int *a, int *b){
	//*a ^= *b ^= *a ^= *b;
	//这样写在一行，b的值正确，但是a的值一直是0
	//像下面这样分开写就是对的，不知道是为什么
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

