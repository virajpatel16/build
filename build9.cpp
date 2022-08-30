/* WAP to create a class which Set values of data members using default and parameterized constructor.*/



#include<iostream>
#include<string>

using namespace std;

class info{
	public:
		
		int id;
	
		int age;

void a(int id,int age){
	
	cout<<"enter the id:"<<id<<endl;

	cout<<"enter the age:"<<age<<endl;
	
	
}
};
main(){
	
	info obj;

   obj.a(1,19);

}
