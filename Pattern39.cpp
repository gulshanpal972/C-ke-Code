/*
		A
	   A B
	  A B C
	 A B C D
	A B C D E
	 A B C D
	  A B C
	   A B 
		A
*/
#include<iostream>
using namespace std;
int main(){
	int i, j;
	char ch;
	for(i=1;i<=5;i++){
		ch='A';
		for(j=i;j<=5;j++){
			cout<<" ";
		}
		for(j=1;j<=i;j++){
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
	for(i=1;i<=5;i++){
		ch='A';
		for(j=1;j<=i+1;j++){
			cout<<" ";
		}
		for(j=1;j<=5-i;j++){
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
	return 0;
}
