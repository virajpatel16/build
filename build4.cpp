/*4. WAP to create two class HighSchool and College with fields like id, stu_name, stu_roll_no, stu_standard, 
stu_age, stu_contact, stu_edu_institute_name and stu_address. 
Make suitable setter and getter with use of static data members*/

#include<iostream>
#include<string>

using namespace std;
 class highschool{
	

	public:
		int id=1;
		char stu_name[20]="viraj";
		int stu_roll_no=12;
		int stu_standard=11;
		int stu_age=16;
		int stu_contact=9816512651;
			void getter(){
		
	cout<<"your id :"<<endl;
	cout<<"your name[20] :"<<endl;
	cout<<"your stu_roll_no :"<<endl;
	cout<<"your stu_standard :"<<endl;
	cout<<"your stu_age :"<<endl;
	cout<<"your stu_contact :"<<endl;	
}
		
		


};
class college :public highschool{
 char  stu_edu_institute_name[10];
 char stu_address[20];
 public:
 	
 	
 	
 	
 	
 		 void setter(){
 	cout<<"enter the stu_edu_institute_name[10]:"<<endl;
 	cin>>stu_edu_institute_name[10];
 	cout<<"enter the stu_address[20]:"<<endl;
 	cin>>stu_address[20];
}
};

main(){
	
	college c;
	c.setter();
	c.getter();
	
}
