/*2. WAP to create a class which Read and print Class, Student details using Two Classes. 
(Make two classes, create one classe's obj in another class.)*/



#include <iostream>
#include <string.h>

using namespace std;

class student{
	private:
		char name[30];
		int rollNo;
	public:
		void getStudent(){
			strcpy(name,"viraj patel");
			rollNo=101;
		}
		void printStudent(){
			cout<<"Name: "<<name<<",Roll No.: "<<rollNo<<endl;
		}
};

class classDetails{
	private:
		char className[30];
		student std; 
	public:
		void getClassDetails(){
			strcpy(className,"Higher Sec.");
			std.getStudent();			
		}
		void ClassDetails(){
			cout<<"Class Name: "<<className<<endl;
			std.printStudent();
		}
};
 main()
{
	classDetails CD;
	CD.getClassDetails();
	CD.ClassDetails();
	
}
