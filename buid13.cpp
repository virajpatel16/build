
/*13. WAP which perform Addition of members of two different classes using friend Function*/



#include<iostream>
using namespace std;

class data{
	public:
	int a=10;

friend void input();
};
class addistion:public data{
	public:
	int b=10;
	int sum;
	
	
	void input(){
		
	cout<<"add:"<<a+b<<endl;	
	sum=a+b;
	}
};

main(){
	addistion a;
	a.input();
}
