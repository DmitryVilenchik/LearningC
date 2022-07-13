/*
 * 4271=1* 10^0 + 7*10^1 + 2*10^2+ 4*10^3=1+70+200+4000
 *
 * res=0
 * 4271%10 =1
 *
 *  res=res*10+1
 *  4271/10=427
 *
 * 	rem=num%10
 *	res=res+rem *10
 *	num=num/10
 *
 */
#include<stdio.h>
void decToBin(int num);
int main(){
	int number=9;
	decToBin(number);

	return 0;
}
void decToBin(int num)
{

		int rem=0,res=0,i=1;

		do{
			rem=num%2;

			num=num/2;
			res=res+rem*i;
			i=i*10;
		}
		while(num!=0);
		printf("%d",res);
}
// 9/2 1
// 4/2 0
// 2/2 0
// 1
// 9->1001
