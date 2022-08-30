/*11. WAP to make Railway Reservation System.
Requirements:
(A) User Input Train Number , Train Name , Source , Destination , Train Time.
(B) Display Record By Search Train Number.
(C) Minimum 3 Input Train Record.*/

#include<iostream>
#include<string>
using namespace std;

class railway{
	public:
	int  num;	char name[10] ;
	char source[10];
	char  Destination[10];
	int  time;
	
	void app(){
		cout<<"enter the train num:"<<endl;
		cin>>num;
	
		cout<<"enter the train name[10]:"<<endl;
		cin>>name[10];
		cout<<"enter the source[10] :"<<endl;
		cin>>source[10];

		cout<<"enter the Destination[10]:"<<endl;
		cin>>Destination[10];
	
		cout<<"enter the train time:"<<endl;
		cin>>time;
	
	}
	
	void display(){
	
		cout<<"your the train num:"<<endl;
		
		
		cout<<"your the train name[10]:"<<endl;
	
		cout<<"your the source[10] :"<<endl;
	
		cout<<"your the Destination[10]:"<<endl;
	
		cout<<"your the train time:"<<endl;
	
	}
	
	void input(){
		char nam;
		char sour;
		char dest;
		int ti;
		
		
		
	    cout<<"enter  the train nam:"<<endl;
	    cin>>nam;
		cout<<"enter the train sour:"<<endl;
		cin>>sour;
	
		cout<<"enter the dest :"<<endl;
		cin>>dest;
      	cout<<"enter the ti:"<<endl;
      	cin>>ti;
//BDTS NZM RAJ SPL/9003	BANDRA TERMINUS	4:05
//Super Anaconda   Bilaspur division of SECR
//SheshNaag  Nagpur & Korba
	}
};

main(){
	
   railway  r;
   r.app();
   r.display();
   r.input();
}
