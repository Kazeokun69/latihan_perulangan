#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int a=0,sum=0;
////////////////////////////////////////////////
	for(a=0;a<10;a++){
		sum+=a;
		if(sum>=20){
			break;
		}
	cout<<a<<endl;
	cout<<sum<<endl<<endl;	}
////////////////////////////////////////////////
	while(a<10){
		cout<<"bilangan= "<<a<<endl;
		cout<<"jumlah= "<<sum<<endl;
		a++;
		sum+=a;
		if(sum>=20){
			break;
		}
		
	}
////////////////////////////////////////////////
	do{
		cout<<a<<endl;
		cout<<sum<<endl;
		a++;
		sum+=a;
		
		if(sum>=20){break;}
	}while(a<10);	

getch();
}
