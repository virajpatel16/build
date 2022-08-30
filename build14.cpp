
/*14. WAP to make Bank Management System. (like shown in below images)*/

#include<iostream>
using namespace  std;

class bank{
	public:
	
int a;
	
	
	void ag(){
		cout<<"-:\t\twel come bank Management:-"<<endl;
		cout<<"------------------------------------------"<<endl;
		cout<<"-:\t\tdesign  N program by-:"<<endl;
		cout<<"------------------------------------------"<<endl;
		cout<<"-:\t\tkhushi G BEIADIYA-:"<<endl;
		cout<<"-:\t\t trainer -:"<<endl;;
		cout<<"------------------------------------------"<<endl;
		cout<<"ASHISH SOLANKI"<<endl;
		cout<<"press any key N enter to countiue..."<<endl;
		}
		
	
			
		
		void st(){
			cout<<"\t\t-:press a to log in as aministarator s staff:-"<<endl;
		
				cout<<"------------------------------------------"<<endl;
				cout<<"\t\t-:wel come staff:-"<<endl;
				cout<<"enter the name of staff :khushi"<<endl;
				cout<<"enter the account number of staff :2657"<<endl;
				cout<<"enter the phone number of staff:9099678335"<<endl;
				cout<<"enter the e-mail of staff:kbeldiyagmail.com"<<endl;
				
		}
		void c(){
			
		
			switch (a){
				case 1 :
					cout<<"press  [1] to deposite the money:";
					break;
					case 2:
						cout<<"press [2] to transfer the money:";
						break;
						case 3:
							cout<<"press [3] to withdraw the money:";
							break;
			}
		}
		void d(){
			
				cout<<"------------------------------------------"<<endl;
				cout<<"withdraw the money :20000"<<endl;
				cout<<"------------------------------------------"<<endl;
				cout<<"your actural account is : 200000"<<endl;
				cout<<"congrates your amount has withdraw successfully."<<endl;
				cout<<"your account balance :180000"<<endl;
		}
};

main(){
	
	bank obj;
	obj.ag();
	obj.st();
	obj.c();
	obj.d();
}
