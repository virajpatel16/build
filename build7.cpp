/*WAP to demonstrate example of parameterized constructor.*/



#include<iostream>

using namespace std;

class student1{
	public:
		int id;
		char name[20];
		student2(){
		   cout<<"viraj";
		}
		
		student(char a){
		cout<<a<<endl;
		}
		student(int a,int b){
			cout<<a*b;
			
		}
		
		
};

main(){
	
	student1 obj;
    obj.student('v');
	obj.student(10,20);
}
