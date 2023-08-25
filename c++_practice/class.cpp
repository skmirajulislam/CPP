#include<iostream>
using namespace std;

class A{
	public:
	    A(int x){
		    cout<<x<<endl;
	    }
    public:	
		void display(){
			cout<<"hello users";
		}
};
	

int main(){
	A obj(8);
	obj.display();
	return 0;
}
