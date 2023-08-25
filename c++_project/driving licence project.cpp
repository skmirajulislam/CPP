#include<stdio.h>
int main()
{
	int age;
	printf("ENTER THE AGE:-");
	scanf("%d",&age);
	if(age>=90)
	{
		printf("-:YOU ARE NOT ALIGABLE FOR DRIVING LICENCE \n BECUSE YOU ARE SENIOR CITIZEN.");
    } 
	else if(age<=90 && age>=18)  
	{
		printf("-:YOU ARE ALIGABLE FOR DRIVING LICENCE \n BECUSE YOU ARE ADULT CITIZEN PLEASE APPLY FOR IT.");
	}  
	else if(age>=16 && age<=18) 
	{
	    printf("-:IN THIS CONDITION YOU ARE NOT ALLOWED \n BUT YOU CAN APPLY FOR EMR-(VIP)CARD \n FOR EMERGENCY CONDITION.");	
    } 
	else
	{
	    printf("-:YOU ARE NOT ALIGABLE FOR DRIVING LICENCE \n BECAUSE YOU ARE JUNIOR CITIZEN ");	
	} 
	return 0;               
}
 