#include<stdio.h>
int main()
{
	int a,b,l,v;
	char x,alpha;
	float z,t;
	alpha>='A' && alpha<='Z';
	alpha>='a' && alpha<='z';
	printf("\t\t\t\t================== Diwali bonus ===================\n\n");
	printf("\t-: Enter the sex of employe :-\n\n");
	printf("\t\t[1] m for male \n\t\t[2] f for female");
	printf("\n\n\tEnter the gender : ");
	scanf("%c",&x);
	if(x=='m')
	{
		printf("\n\tEnter the salary of employe : Rs");
		scanf("%d",&a);
		l=a;
		if(a!=alpha)
		{
		    if(a<=10000)
	     	{
    			z=0.5*a;
    			printf("\n\n\tBonus is Rs%f ",z);
	        }
     		else if(a<=100000)
	        {
		    	z=0.05*a;
	    		printf("\n\n\tbonus is Rs%f",z);
	    	}
	    	else
	    	{
	    		printf("\n\n\tyour salary is Rs %d",a);
			}
	    	t=z+l;
	    	printf("\n\n\tTotal salary is :- %f",t);	
	    }
	    else
	    {
	    	printf("\n\n\tReenter .......");
		}
		
	}
	else if(x=='f')
	{
		printf("\n\tEnter the salary of employe : Rs");
		scanf("%d",&b);
		v=b;
		if(b!=alpha)
		{
		    if(a<=10000)
	     	{
    			z=0.9*b;
    			printf("\n\n\tBonus is Rs%f ",z);
	        }
     		else if(a<=100000)
	        {
		    	z=0.09*b;
	    		printf("\n\n\tbonus is Rs%f",z);
	    	}
	    	else
	    	{
	    		printf("\n\n\tyour salary is Rs %d",b);
			}
	    	t=z+v;
	    	printf("\n\n\tTotal salary is :- %f",t);
	    }
	    else
	    {
	    	printf("\n\n\tReenter .......");
		}
	}
	else
	{
		printf("\n\tdetails not found.....");
	}
	return 0;
}