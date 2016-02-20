/*we use this function to judge 
  the byte order in this computer 
  is Little Endian (return 0) or 
  Big Endian (return 1) or 
  Unknow Addressing (return -1)*/

#include<stdio.h>

union{
	long Long;
	char Char[sizeof(long)];
} u;

int little_or_big_endian()
{
	u.Long=1;
	if(u.Char[0]==1){
		//printf("Little Endian\n");
		return 0;
	}
	else if(u.Char[sizeof(long)-1]==1){
		//printf("Big Endian\n");
		return 1;
	}
	else{
		//printf("Unknow Addressing\n");
		return -1;
	}
}

int main()
{
	printf("%d\n",little_or_big_endian());
	return 0;
}
