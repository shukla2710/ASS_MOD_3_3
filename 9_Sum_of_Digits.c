
//Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include<stdio.h>
main()
{
	int no, count, sum, rem;
    printf("\n\n\t Enter a Number : ");
    scanf("%d", &no);
    
    count=0;
    sum=0;
    
    while(no>0)
    {
    	rem=no%10;   //last digit can get.
    	count = count+1;  //count that digit.
    	sum=sum+rem;
    	no=no/10;
	}
	
	printf("\n\n  The number of digits : %d", count);
    printf("\n\n  The sum of digits :  %d", sum);
    
}
