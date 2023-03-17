/*
		ABCDE
		ABCD
		ABC
		AB
		A
		AB
		ABC
		ABCD
		ABCDE
*/
#include<iostream>
using namespace std;
int main(){
	int i, j;
	char ch;
	for(i=5;i>=1;i--){
		ch='A';
		for(j=i;j>=1;j--){
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
	for(i=2;i<=5;i++){
		ch='A';
		for(j=i;j>=1;j--){
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
	return 0;
}
