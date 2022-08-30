/*10. WAP to create a class for student to get and print details of N students. (with use of array of objects)*/



#include<iostream>
using namespace std;

class A{
	public:
	int id ;
	int name;
	int age;
	

		
		

};

main(){
	
	A obj[10];
	int i;
	for (i=0;i<10;i++){
		cout<<"enter the id :"<<endl;
		cin>>obj[i].id;
		
		cout<<"enter the name :"<<endl;
		cin>>obj[i].name;
		cout<<"enter the age :"<<endl;
		cin>>obj[i].age;
		
		
	}
	for(i=0;i<10;i++){
			cout<<"your the id :"<<endl;
		cin>>obj[i].id;
		
		cout<<"your the name :"<<endl;
		cin>>obj[i].name;
		cout<<"your the age :"<<endl;
		cin>>obj[i].age;
		
	}
}

