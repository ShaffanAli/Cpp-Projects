#include<iostream>
using namespace std;
int main(){
	cout<<"*** PARKING MANAGEMENT SYSTEM ***"<<endl;
	int n,c,f,gt,t=0,h;
	cout<<"Enter number of vehicles: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		gt=0;
		cout<<endl<<"Vehicle "<<i<<". "<<endl;
		cout<<"Enter vehicle type (1-Car, 2-Motorcycle, 3-Bus):";
		cin>>c;
		cout<<"Enter parking hours: ";
		cin>>h;
		if(c==1){
			if(h==1 || h==2){
					f=100;
					gt+=f;
		}
			if(h>2){
                gt=100;
				for(int j=3;j<=h;j++){
					f=50;
					gt+=f;
				}
		}
                if(h>8){
                    f=200;
                    gt+=f;
	}}
        if(c==2){
			if(h==1 || h==2){
					f=50;
					gt+=f;
		}
			if(h>2){
                gt=50;
				for(int j=3;j<=h;j++){
					f=30;
					gt+=f;
				}
		}
               if(h>8){
                    f=200;
                    gt+=f;
	}}
        if(c==3){
			if(h==1 || h==2){
					f=200;
					gt+=f;
				}
			if(h>2){
                gt=200;
				for(int j=3;j<=h;j++){
					f=100;
					gt+=f;
				}
		}
            if(h>8){
                    f=200;
                    gt+=f;
	}}
	t+=gt;
	cout<<endl<<"Parking Fee= Rs."<<gt<<endl;
	
}
cout<<endl<<"Total Parking Revenue= Rs."<<t;
}
