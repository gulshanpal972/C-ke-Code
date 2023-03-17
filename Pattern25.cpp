/*
		A
		AB
		ABC
		ABCD
		ABCDE
		ABCD
		ABC
		AB
		A
*/
#include<iostream>
using namespace std;
int main(){
	int i, j;
	char ch;
	for(i=1;i<=5;i++){
		ch='A';
		for(j=1;j<=i;j++){
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
	for(i=1;i<=5;i++){
		ch='A';
		for(j=1;j<=5-i;j++){
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
	return 0;
}
