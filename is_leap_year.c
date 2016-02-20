/*judge a year is leap year or not
  yes return 1 or no return 0*/

int is_leap_year(int year)
{
	if((year%4==0&&year%100!=0)||(year%400==0))
		return 1;
	else
		return 0;
}

/*
int main()
{
	int a;
	for(;;){
		scanf("%d",&a);
		if(a==0) break;
		printf("%d",is_leap_year(a));
	}
	return 0;
}
*/
