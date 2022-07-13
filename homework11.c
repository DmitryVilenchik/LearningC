/*
 * homework11.c
 *
 *  Created on: 12.07.2022
 *      Author: User
 */
#include<stdio.h>
int input_number();
int input_digit();
void printOddsReverse(int number);
int hasDigit(int number,int digit);
int reverseNumber(int number);
int main()
{
	int num, digit, res;
	num=input_number();
	printOddsReverse(num);

	digit=input_digit();
	res=hasDigit(num,digit);

	res=reverseNumber(num);


	return 0;
}
int input_number()
{
	int number=0;
	printf("Input your Number: \n");
	fflush(stdout);
	scanf("%d", &number);
	return number;
}
int input_digit()
{
	int number=0;
	printf("Enter the number to be calculated: \n");
	fflush(stdout);
	scanf("%d", &number);
	return number;
}
void printOddsReverse(int number) // 0 - even number
{
	if (number<0)
	{
		number=-number;
		printf("-");
	}
	int num=0;
	do{
		num=number%10;
		if (num%2!=0) printf("%d",num);
		number=number/10;
	}
	while (number!=0);
	printf("\n");
}
int hasDigit(int number,int digit)
{
	int num=0, res=0, num1=0;
	num1=number;
	if (number<0) number=-number;
	do
	{
		num=number%10;
		if (num==digit){res++;}
		number=number/10;
	}
	while (number!=0);
	printf("The number of digits %d number %d is %d\n",digit,num1,res);

	return res;
}
int reverseNumber(int number)
{
	int num=0, res=0, num1=0;
	num1=number;

	do
	{
		num=number%10;
		res=res*10+num;
		number=number/10;
	}
	while(number!=0);
	printf("Reversed number %d = %d\n", num1,res);
	return res;
}
