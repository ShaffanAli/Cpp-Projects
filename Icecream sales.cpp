#include<iostream>
using namespace std;

int arr[7];
int t=0,a,tr;
void inputsales(){
	for(int i=0;i<7;i++){
		cout<<"Enter day "<<i+1<<" cups sold: ";
		cin>>arr[i];
		}
		cout<<endl;
}
void calculatetotal(){
	for(int i=0;i<7;i++){
		t+=arr[i];
	}
	cout<<"Total Number of cups sold during the week is: "<<t<<endl;
	cout<<endl;
}
void calculateaverage(){
	a=t/7;
	cout<<"Average:"<<endl;
	cout<<"Average cups sold per day: "<<a<<endl<<endl;
}
void findhighest(){
	int temp;
	cout<<"Highest:"<<endl;
	for(int k=1;k<=7;k++){
		for(int i=0;i<=6;i++){
			if(arr[i]>arr[i+1]){
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}}
	cout<<"Highest number of cups sold at any day: "<<arr[6]<<endl<<endl;
}
void findlowest(){
		int temp;
		cout<<"Lowest:"<<endl;
	for(int k=1;k<=7;k++){
		for(int i=0;i<=6;i++){
			if(arr[i]>arr[i+1]){
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
	}}
	cout<<"lowest number of cups sold at any day: "<<arr[0]<<endl<<endl;
}
void calculaterevenue(){
	tr=t*250;
	cout<<"Revenue:"<<endl; 
	cout<<"Total Revenue generated during the week is: "<<tr<<endl<<endl;
}
void analyzesales(){
	int ch=0,cm=0,cl=0;
	for(int i=0;i<7;i++){
		if(arr[i]>=100){
			ch+=1;
		}
		else if(arr[i]>=50){
			cm+=1;
		}
		else{
			cl+=1;
		}
	}
	cout<<"Analysis:"<<endl;
	cout<<"100 or more cups: High Sales"<<endl<<ch<<" days"<<endl;
	cout<<"50-99 cups: Moderate Sales"<<endl<<cm<<" days"<<endl;
	cout<<"Less than 50 cups: Low Sales"<<endl<<cl<<" days"<<endl;
}
int main(){
	cout<<" ***Summary Of The Icecream Parlour's Weekly Performance*** "<<endl<<endl;
	inputsales();
	calculatetotal();
	calculateaverage();
	findhighest();
	findlowest();
	calculaterevenue();
	analyzesales();
}
