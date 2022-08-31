
/*12. WAP to make Supermarket Billing System.
Requirements:
(A) Verify User Id And Password
(B) User Input Item Number , Item Name , Quantity , Tax , Discount.
(C) Display All Record In Ascending order (by item Number)*/


#include<iostream>
using namespace std;

class market {
	
	public:
		int id;
		int password;
		int number;
		int  name[20];
		int quantity;
		int tax;
		int discount;
		int i;
		
		void input(){
			
			cout<<"enter the id :"<<endl;
			cin>>id;
			cout<<"enter the password :"<<endl;
			cin>>password;
			cout<<"enter the number :"<<endl;
			cin>> number;
			cout<<"enter the  name :"<<endl;
			cin>> name[20];
			cout<<"enter the quantity :"<<endl;
			cin>>quantity;
			cout<<"enter the tax :"<<endl;
			cin>>tax;
			cout<<"enter the discount :"<<endl;
			cin>>discount;
		cout<<"-----------------------------------"<<endl;	
		}
		
		void display(){
			
			switch(i){
				case 1:
					cout<<"  your id  :abcd"<<endl;
					cout<<"your password :"<<password<<endl;
					cout<<"your  number :"<< number<<endl;
					cout<<"your  name :"<< name[20]<<endl;
					cout<<"your quantity :"<<quantity<<endl;
					cout<<"your tax :"<<tax<<endl;
					cout<<"your discount :"<<discount<<endl;
				break;
				cout<<"---------------------------------------"<<endl;
				case 2:
					cout<<"  your id  :abcd"<<endl;
					cout<<"your password :"<<password<<endl;
					cout<<"your  number :"<< number<<endl;
					cout<<"your  name :"<< name[20]<<endl;
					cout<<"your quantity :"<<quantity<<endl;
					cout<<"your tax :"<<tax<<endl;
					cout<<"your discount :"<<discount<<endl;
					break;
						cout<<"---------------------------------------"<<endl;
				case 3:
					cout<<"  your id  :abcd"<<endl;
					cout<<"your password :"<<password<<endl;
					cout<<"your  number :"<< number<<endl;
					cout<<"your  name :"<< name[20]<<endl;
					cout<<"your quantity :"<<quantity<<endl;
					cout<<"your tax :"<<tax<<endl;
					cout<<"your discount :"<<discount<<endl;
					break;
			   	cout<<"---------------------------------------"<<endl;
			   	default:
			   		cout<<"thank s you but no more "<<endl;
			   		break;
						
				
			}
		}
};
main(){
	
	market m;
	m.display();
	m.input();
}
