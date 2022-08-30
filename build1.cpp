/*1. WAP to create a class Employee with setter and getter.
 Which have fields like id, name, role, salary, experience, address, email and contact. Get 5 records*/
 
 
 #include<iostream>
 
 using namespace std;
 
 class emp{
 	
 		 public:
 	int id;
	 char name[5];
	 char role[10];
	 int salary;
	 int experience;
	 char address[20];
	 char email[10];
	 int contact[10];

	 
	 void setter(){
	 	
	 	cout<<"enter the id :"<<endl;
	 	cin>>id;
	 	
	 	cout<<"enter the name :"<<endl;
	 	cin>>name[5];
	 	
	 	cout<<"enter the role :"<<endl;
	 	cin>>role[10];
	 	cout<<"enter the salary :"<<endl;
	 	cin>>salary;
	 	
	 	cout<<"enter the experience  :"<<endl;
	 	cin>>experience;
	 
	 	cout<<"enter the address :"<<endl;
	 	cin>>address[20];
	 
	 	cout<<"enter the email:"<<endl;
	 	cin>>email[10];
	 
	 	cout<<"enter the contact:"<<endl;
	 	cin>>contact[10];
	 	
	 }
	 	 void getter(){
	 	
	 	cout<<"your the id :"<<endl;
	 	cin>>id;
	 	
	 	cout<<"your  the name :"<<endl;
	 	cin>>name[5];
	 	
	 	cout<<"your  the role :"<<endl;
	 	cin>>role[10];
	 	cout<<"your  the salary :"<<endl;
	 	cin>>salary;
	 	
	 	cout<<"your  the experience  :"<<endl;
	 	cin>>experience;
	 
	 	cout<<"your  the address :"<<endl;
	 	cin>>address[20];
	 
	 	cout<<"your  the email:"<<endl;
	 	cin>>email[10];
	 
	 	cout<<"your  the contact:"<<endl;
	 	cin>>contact[10];
 	}
 };
 
 main(){
 	
 	emp obj;
 	obj.setter();
 	obj.getter();
 	
 }
