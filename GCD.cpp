// Write a program to find the Greatest Common Divisor (GCD) of two numbers
#include<iostream>
using namespace std;
int main(){
int num1, num2, i, GCD=1;
cout<<"Enter two numbers to find GCD: ";
cin>>num1>>num2;
i=num1>num2?num2:num1;
while(i>0){
	if(num1%i==0 && num2%i==0){
		GCD=i;
		break;
	}
	i--;
}
cout<<"GCD of "<<num1<<" and "<<num2<<" is: "<<GCD;
return 0;
}
