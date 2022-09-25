#include<iostream>
using namespace std;

int main()
{
	int JAPP_i=0,JAPP_l;
	float JAPP_x,JAPP_s=0;
	cout<<"ingrese el limite JAPP_l="; cin>>JAPP_l;
	do{
		
	cout<<"ingrese el numero JAPP_x="; cin>>JAPP_x;
	JAPP_i=JAPP_i+1;
	JAPP_s=JAPP_s+JAPP_x;



	}while(JAPP_i<JAPP_l);
	cout<<"Se ingresaron "<<JAPP_l<<" numeros "<< "que sumaron "<<JAPP_s<<endl;
	return 0;


}
