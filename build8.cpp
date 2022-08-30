
/*8. WAP to demonstrate example of destructors.*/

#include<iostream>

using namespace std;

class stud{
	public:
	
  stud(){
		cout<<"viraj"<<endl;
		
	}
	~stud(){
		cout<<"hello world"<<endl;
	}
};
main(){
	stud obj;
}


