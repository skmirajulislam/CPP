#include <iostream>
#include <Cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv)
{
	int a,b,c,d,i; 
	cout<<"\t\t\t\t-: C++ CALCULATOR  :-"<<endl;
	cout<< "\t\t\t========CHOSE YOUR OPERATION========="<<endl;
	do{
		cout<<"\n\n\t\t1 FOR SUM\n\t\t2 FOR SUB\n\t\t3 FOR MUL\n\t\t4 FOR DIV\n\t\t5 FOR MOD\n\t\t0 FOR EXIT\n"<<endl;
		cout<<"\t\t\tEnter type of operation :";
		cin>>i;
		cout<<"\t\t\tEnter the value :";
		cin>>a;
		cout<<"\t\t\tEnter secont value :";
		cin>>b;
		switch(i)
		{
			case 1:
				cout<<"\t\t\tThe sum of "<<a<<" and "<<b<<" is "<<a+b;
				break;
				
			case 2:
				cout<<"\t\t\tThe sub of "<<a<<" and "<<b<<" is "<<a-b;
				break;
			
			case 3:
				cout<<"\t\t\tThe div of "<<a<<" and "<<b<<" is "<<a/b;
				break;
				
			case 4:
				cout<<"\t\t\tThe mul of "<<a<<" and "<<b<<" is "<<a*b;
				break;
				
			case 5:
				cout<<"\t\t\tThe mod of "<<a<<" and "<<b<<" is "<<a%b;;
				break;
				
			default :
				cout<<"\t\t\tOperation error...";
				
		}
		
	}while(i!=0);
	return 0;
}