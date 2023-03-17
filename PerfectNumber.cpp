// Write a program to check whether a given number is prefect number or not
#include<iostream>
using namespace std;
int main(){
int num,i,perfect=0;
cout<<"Enter a number to check whether it is perfect or not: ";
cin>>num;
for(i=1;i<num;i++){
	if(num%i==0){
		perfect+=i;
	}
}
if(perfect==num)
	cout<<num<<" is a perfect number";
else
	cout<<num<<" is not a perfect number";
return 0;
}
