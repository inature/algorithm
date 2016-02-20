/*  main for test *
#include<stdio.h>
#include<stdlib.h>
double average(double*,int);
int main(){
	srand(time(0));
    double num[10];
	int i;
	for(i=0;i<10;i++){
		num[i]=rand();
	}
	double sum=0,ave=0;
	for(i=0;i<10;i++)
		sum+=num[i];
	printf("t_ave %lf\n",sum/10);
    printf("my_ave %lf\n",average(num,10));
    return 0;
}
*/

double average(double *number,int n){
	int i;
	double avg=0;
	for(i=1;i<=n;i++){
		avg+=(number[i-1]-avg)/i;
	}
	return avg;
}
