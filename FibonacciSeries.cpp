// Write a program to print the fibonacci series upto n
#include<iostream>
using namespace std;
int main(){
int n, f=0,s=1,t=0,i=1;
cout<<"Enter the length of the series: ";
cin>>n;
while(true){
	cout<<t<<"\t";
	f=s;
	s=t;
	t=f+s;
	i++;
	if(i==n)
		break;
}
return 0;
}
