#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	printf("\t\t\t\t\t\t-:NATIONAL BANK:-");
	time_t t;
	time(&t);
	printf("\n\n\t\t\t\tThe Current Time is :- %s",ctime(&t));
	
	int amount,time,rate,interest,copy;
	int total,v,call,sub,acount;
	char money,alpha;
	
	alpha>='A' && alpha<='Z';
	alpha>='a' && alpha<='z';
	
	printf("\n\na for normal\ni for internet pay\nc for cradit\nd for debit \n\n");
	printf("Enter payment type :-");
	scanf("%c",&money);
	
	if(money=='a'|| money=='c'|| money=='d'|| money=='i')
	{
		printf("\nEnter acount num:-");
		scanf("%d",&acount);
		if(acount!=alpha)
		{
			printf("\n\t\t\tACOUNT-%d-IS AVAILABLE",acount);
			printf("\n\nEnter the amount :-");
	        scanf("%d",&amount);
	        copy=amount;
	        printf("\nYour book is updated :- Rs%d at %s",amount,ctime(&t));
	    
	    
	        printf("\n\n\t\t\t:--------------------interest package-----------------------:");
	
	        printf("\n\nEnter the rate :");
	        scanf("%d",&rate);
	
	        printf("\n\nEnter Year :");
	        scanf("%d",&time);
	
	        interest=amount*rate*time/100;
	        printf("\nYour interest is :- Rs%d",interest);
	
	        total=copy+interest;
	        printf("\n\nYour money after %d year :- Rs%d",time,total);
	
	        printf("\n\n\t\t\t:---------------------Book details--------------------------:");
	
	        printf("\n\nYour book is updated :- Rs%d at %s",amount,ctime(&t));
	
	        printf("\n\t\t\t-:Do you withdraw your money :-\n");
	        printf("\n\n0 for notwithdraw\n1 for withdraw\n:=> ");
	        scanf("%d",&v);
	        if(v==1)
	        {
		        printf("ok enter your amount :");
		        scanf("%d",&call);
		        if(call<amount)
		        {
		            printf("\n\nRs %d is withdrawed at %s",call,ctime(&t));
		            sub=amount-call;
		            printf("\n\nYour current balence is Rs %d",sub);
		        }
		        else
		        {
		    	    printf("\n\nWithdraw unsuccessful limit riched");
			    }
		        if(sub>=500)
		        {
		    	    printf("\n\nThanks for giving some time.....");
			    }
		        else
		        {
		    	    printf("\n\nLow balence reminder....");
			    }  
	        }
	        else
	        {
		    printf("We are always open thankyou...");
	        }
			
		}
	    else
	    {
	    	printf("\n\t\t\tACOUNT NOT EXIST");
		}
    	    	    
    }
    else
    {
    	printf("\nPayment not accepted sorry try another payment format.....");
	}
	
	return 0;
}
