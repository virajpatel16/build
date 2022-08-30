
/*6. WAP to demonstrate example of default constructor or no argument constructor.*/

#include<iostream>

using namespace std;

class con{
	public:
		int a=10;
		int b=10;
	
	void add(){
		cout<<"add:"<<a+b<<endl;
		
		
	}
};
main(){
	con c;
	c.add();
}


