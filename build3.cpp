
/*3. WAP to create a class Hotel with fields like id, name, type, staff_size, room_size, 
establish_year, 
address, rating_type and website.
 Illustrate the use of encapsulation (strict encapsulation) with this keyword.*/
 
 
#include<iostream>
#include<string>
using namespace std;

 class hotel{
 	
	public:
	int id;
	char name[20]="viraj";
	char type[20]="hr";
	int staff_size=20;
	int room_size=30;
	int establish_year=6;
	
	void info(){                                              // this->x = x;
		cout<<"your id:"<<id<<endl;
		cout<<"your name:"<<name<<endl;
		cout<<"your type:"<<type<<endl;
		cout<<"your staff_size:"<<staff_size<<endl;
		cout<<"your room_sizeL:"<<room_size<<endl;
		cout<<"your establish_year:"<<establish_year<<endl;
		cout<< this->id;
		cout<< this->name[20];
		cout<< this->type[20];
		cout<< this->staff_size;
		cout<< this->room_size;
		cout<< this->establish_year;
}

	

};
main(){
	hotel t;
	t.info();
	
	

}



