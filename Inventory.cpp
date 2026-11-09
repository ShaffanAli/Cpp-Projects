#include<iostream>
using namespace std;
int main(){
	int r,c,arr[6][6],arr2[6][6];
	cout<<"Enter number of products(rows): ";
	cin>>r;
	cout<<"Enter number of locations(columns): ";
	cin>>c;
	cout<<"Enter inventory for current month(matrix A)"<<endl;
	for(int i=1;i<=2;i++){
		for(int j=1;j<=3;j++){
			cout<<"Product "<<i<<", Location "<<j<<": ";
			cin>>arr[i][j];
		}
	}
	cout<<"Enter inventory for previous month(matrix B)"<<endl;
	for(int i=1;i<=2;i++){
		for(int j=1;j<=3;j++){
			cout<<"Product "<<i<<", Location "<<j<<": ";
			cin>>arr2[i][j];
		}
	}
	cout<<"Consolidated Inventory(current + previous month)"<<endl;
	for(int i=1;i<=2;i++){
		for(int j=1;j<=3;j++){
			cout<<arr[i][j]+arr2[i][j]<<"  ";
		}
		cout<<endl;
	}
}
