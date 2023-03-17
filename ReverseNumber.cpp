// Write a program to reverse a given number
#include<iostream>
using namespace std;
int main(){
int num, rev=0, d;
cout<<"Enter a number: ";
cin>>num;
while(num>0){
	d=num%10;
	rev=rev*10+d;
	num=num/10;
}
cout<<"Reversed number is: "<<rev;
return 0;
}
