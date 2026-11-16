#include<iostream>
using namespace std;
int fib(int n,int m){
	if(m==0)
	return 2;
	return n+fib(n,m-1);
}
int main(){
	int n,m;
	cout<<"Enter the initial pair of rabbits:";
	cin>>n;
	cout<<"Enter month:";
	cin>>m;
	cout<<fib(n,m);
	//The initial rabbit pair reproduce a pair of rabbit each month
}