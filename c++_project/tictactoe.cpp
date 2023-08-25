#include<stdio.h>

int main()
{
	const int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int p[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int m;
	int win=1,wid=0;
	int n,b,t;
	int limit=9;	
	int exit=0;
	printf("\n\t\t\t\t-:==================== TIC TAC TOE ====================:-");
    printf("\n\n\t -:The location of blocks :-");
	printf("\n\n\t\t=============\n");
	printf("\t\t| %d | %d | %d |\n\t\t=============\n",a[0][0],a[0][1],a[0][2]);
	printf("\t\t| %d | %d | %d |\n\t\t=============\n",a[1][0],a[1][1],a[1][2]);
	printf("\t\t| %d | %d | %d |\n\t\t=============\n",a[2][0],a[2][1],a[2][2]);
	printf("\n\n[1] FOR GAME STARTING PRESS 1\n[2] FOR GAME EXIT PRESS 0\n[3] GAME RULE PRESS 2 \n\nENTER :=> ");
    scanf("%d",&n);
    if(n==1)
    {
        do
        {
            printf("Enter game the location :=>");
		    scanf("%d",&m);
		            
		    if(m>limit || m==0)
		    {
				printf("Enter valid location....\n");
		    }
		    else
		    {	
                if(a[0][0]==m)
			    {	
				    printf("Enter the choice 1 or 0 :=>");
				    scanf("%d",&p[0][0]);
                    printf("\n\t-:Current position is :-");
                    printf("\n\n\n\t=============\n");
	                printf("\t| %d | %d | %d |\n\t=============\n",p[0][0],p[0][1],p[0][2]);
	                printf("\t| %d | %d | %d |\n\t=============\n",p[1][0],p[1][1],p[1][2]);
	                printf("\t| %d | %d | %d |\n\t=============\n",p[2][0],p[2][1],p[2][2]);
			    }
			    if(a[0][1]==m)
			    {
				    printf("Enter the choice 1 or O :=>");
				    scanf("%d",&p[0][1]);
                    printf("\n\t-:Current position is :-");
                    printf("\n\n\n\t=============\n");
	                printf("\t| %d | %d | %d |\n\t=============\n",p[0][0],p[0][1],p[0][2]);
	                printf("\t| %d | %d | %d |\n\t=============\n",p[1][0],p[1][1],p[1][2]);
	                printf("\t| %d | %d | %d |\n\t=============\n",p[2][0],p[2][1],p[2][2]);
			    }
			    if(a[0][2]==m)
			    {     
			        printf("Enter the choice 1 or O :=>");
			    	scanf("%d",&p[0][2]);
                    printf("\n\t-:Current position is :-");
                    printf("\n\n\n\t=============\n");
	                printf("\t| %d | %d | %d |\n\t=============\n",p[0][0],p[0][1],p[0][2]);
	                printf("\t| %d | %d | %d |\n\t=============\n",p[1][0],p[1][1],p[1][2]);
	                printf("\t| %d | %d | %d |\n\t=============\n",p[2][0],p[2][1],p[2][2]);
		    	}
		    	if(a[1][0]==m)
	    		{
	    			printf("Enter the choice 1 or O :=>");
	    			scanf("%d",&p[1][0]);
                    printf("\n\t-:Current position is :-");
                    printf("\n\n\n\t=============\n");
	                printf("\t| %d | %d | %d |\n\t=============\n",p[0][0],p[0][1],p[0][2]);
	                printf("\t| %d | %d | %d |\n\t=============\n",p[1][0],p[1][1],p[1][2]);
	                printf("\t| %d | %d | %d |\n\t=============\n",p[2][0],p[2][1],p[2][2]);
	    		}
	    		if(a[1][1]==m)
	    		{
	    			printf("Enter the choice 1 or O :=>");
	    			scanf("%d",&p[1][1]);
                    printf("\n\t-:Current position is :-");
                    printf("\n\n\n\t=============\n");
	                printf("\t| %d | %d | %d |\n\t=============\n",p[0][0],p[0][1],p[0][2]);
	                printf("\t| %d | %d | %d |\n\t=============\n",p[1][0],p[1][1],p[1][2]);
	                printf("\t| %d | %d | %d |\n\t=============\n",p[2][0],p[2][1],p[2][2]);
    			}
    			if(a[1][2]==m)
    			{
    				printf("Enter the choice 1 or O :=>");
        		    scanf("%d",&p[1][2]);
                    printf("\n\t-:Current position is :-");
                    printf("\n\n\n\t=============\n");
	                printf("\t| %d | %d | %d |\n\t=============\n",p[0][0],p[0][1],p[0][2]);
	                printf("\t| %d | %d | %d |\n\t=============\n",p[1][0],p[1][1],p[1][2]);
	                printf("\t| %d | %d | %d |\n\t=============\n",p[2][0],p[2][1],p[2][2]);
		    	}
		    	if(a[2][0]==m)
		    	{
	    			printf("Enter the choice 1 or O :=>");
		    		scanf("%d",&p[2][0]);
                    printf("\n\t-:Current position is :-");
                    printf("\n\n\n\t=============\n");
	                printf("\t| %d | %d | %d |\n\t=============\n",p[0][0],p[0][1],p[0][2]);
	                printf("\t| %d | %d | %d |\n\t=============\n",p[1][0],p[1][1],p[1][2]);
	                printf("\t| %d | %d | %d |\n\t=============\n",p[2][0],p[2][1],p[2][2]);
		    	}
	    		if(a[2][1]==m)
		    	{
	    			printf("Enter the choice 1 or O :=>");
	    			scanf("%d",&p[2][1]);
                    printf("\n\t-:Current position is :-");
                    printf("\n\n\n\t=============\n");
	                printf("\t| %d | %d | %d |\n\t=============\n",p[0][0],p[0][1],p[0][2]);
	                printf("\t| %d | %d | %d |\n\t=============\n",p[1][0],p[1][1],p[1][2]);
	                printf("\t| %d | %d | %d |\n\t=============\n",p[2][0],p[2][1],p[2][2]);
		     	}
		    	if(a[2][2]==m)
		    	{
			    	printf("Enter the choice 1 or O :=>");
			    	scanf("%d",&p[2][2]);
                    printf("\n\t-:Current position is :-");
                    printf("\n\n\n\t=============\n");
	                printf("\t| %d | %d | %d |\n\t=============\n",p[0][0],p[0][1],p[0][2]);
	                printf("\t| %d | %d | %d |\n\t=============\n",p[1][0],p[1][1],p[1][2]);
	                printf("\t| %d | %d | %d |\n\t=============\n",p[2][0],p[2][1],p[2][2]);
		    	}
				if(exit==8)
				{
					break;
				}
		    }
            printf("\n\t- PLEASE MAINTAIN 9 CHOICE ONLY -\n"); 
            printf("\nFor continue game 1 or Exit game 0 :=>");
            scanf("%d",&t); 
			exit++;
        } while (t==1);
    
        if(p[0][0]==win && p[0][1]==win && p[0][2]==win || p[0][0]==wid && p[0][1]==wid && p[0][2]==wid)
		{
			printf("\n\t-:You have won:-");
            printf("\n\n\n\t=============\n");
	        printf("\t| %d | %d | %d |\n\t=============\n",p[0][0],p[0][1],p[0][2]);
	        printf("\t| * | * | * |\n\t=============\n");
	        printf("\t| * | * | * |\n\t=============\n");
		}
		else if(p[1][0]==win && p[1][1]==win && p[1][2]==win || p[1][0]==wid && p[1][1]==wid && p[1][2]==wid)
		{
			printf("\n\t-:You have won:-");
            printf("\n\n\n\t=============\n");
	        printf("\t| * | * | * |\n\t=============\n");
	        printf("\t| %d | %d | %d |\n\t=============\n",p[1][0],p[1][1],p[1][2]);
	        printf("\t| * | * | * |\n\t=============\n");
		}
		else if(p[2][0]==win && p[2][1]==win && p[2][2]==win || p[2][0]==wid && p[2][1]==wid && p[2][2]==wid)
		{
			printf("\n\t-:You have won:-");
            printf("\n\n\n\t=============\n");
	        printf("\t| * | * | * |\n\t=============\n");
	        printf("\t| * | * | * |\n\t=============\n");
	        printf("\t| %d | %d | %d |\n\t=============\n",p[2][0],p[2][1],p[2][2]);
		}
		else if(p[0][0]==win && p[1][1]==win && p[2][2]==win || p[0][0]==wid && p[1][1]==wid && p[2][2]==wid)
		{
			printf("\n\t-:You have won:-");
            printf("\n\n\n\t=============\n");
	        printf("\t| %d | * | * |\n\t=============\n",p[0][0]);
	        printf("\t| * | %d | * |\n\t=============\n",p[1][1]);
	        printf("\t| * | * | %d |\n\t=============\n",p[2][2]);
		}
		else if(p[0][2]==win && p[1][1]==win && p[2][0]==win || p[0][2]==wid && p[1][1]==wid && p[2][0]==wid)
		{
			printf("\n\t-:You have won:-");
            printf("\n\n\n\t=============\n");
	        printf("\t| * | * | %d |\n\t=============\n",p[0][2]);
	        printf("\t| * | %d | * |\n\t=============\n",p[1][1]);
	        printf("\t| %d | * | * |\n\t=============\n",p[2][0]);
		}
		else if(p[0][0]==win && p[1][0]==win && p[2][0]==win || p[0][0]==wid && p[1][0]==wid && p[2][0]==wid)
		{
			printf("\n\t-:You have won:-");
            printf("\n\n\n\t=============\n");
	        printf("\t| %d | * | * |\n\t=============\n",p[0][0]);
	        printf("\t| %d | * | * |\n\t=============\n",p[1][0]);
	        printf("\t| %d | * | * |\n\t=============\n",p[2][0]);
		}
		else if(p[0][1]==win && p[1][1]==win && p[2][1]==win || p[0][1]==wid && p[1][1]==wid && p[2][1]==wid)
		{
			printf("\n\t-:You have won:-");
            printf("\n\n\n\t=============\n");
	        printf("\t| * | %d | * |\n\t=============\n",p[0][1]);
	        printf("\t| * | %d | * |\n\t=============\n",p[1][1]);
	        printf("\t| * | %d | * |\n\t=============\n",p[2][1]);
		}
		else if(p[0][2]==win && p[1][2]==win && p[2][2]==win || p[0][2]==wid && p[1][2]==wid && p[2][2]==wid)
		{
			printf("\n\t-:You have won:-");
            printf("\n\n\n\t=============\n");
	        printf("\t| * | * | %d |\n\t=============\n",p[0][2]);
	        printf("\t| * | * | %d |\n\t=============\n",p[1][2]);
	        printf("\t| * | * | %d |\n\t=============\n",p[2][2]);
		}
		else
		{
			printf("\n\n\t -: game draw :-");
	        printf("\n\n\t=============\n");
	        printf("\t| %d | %d | %d |\n\t=============\n",p[0][0],p[0][1],p[0][2]);
	        printf("\t| %d | %d | %d |\n\t=============\n",p[1][0],p[1][1],p[1][2]);
	        printf("\t| %d | %d | %d |\n\t=============\n",p[2][0],p[2][1],p[2][2]);
		}
		
        printf("\nTHANKS FOR PLAYING THIS GAME DEVOLEPED BY SK MIRAJ IN JANUARY 22 YEAR 2023\nHOW IT IS PLEASE RATE OUR PRODUCT. ");
        
    } 
    else if(n==2)
    {
    	printf("Please maintain 9 turn only it is beta 1.0.0 \nnew version comming soon !\nThis game developed by SK MIRAJ  ");
    	
	}
    else
    {
        printf("Thank you.....");
    }			
	return 0;
}