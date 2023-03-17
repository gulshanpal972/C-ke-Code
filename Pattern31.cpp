/*
		EDCBA
		DCBA
		CBA
		BA
		A
		BA
		CBA
		DCBA
		EDCBA
*/
#include<iostream>
using namespace std;
int main(){
	int i, j;
	char ch;
	for(i=5;i>=1;i--){
		ch=65+i-1;
		for(j=i;j>=1;j--){
			cout<<ch;
			ch--;
		}
		cout<<endl;
	}
	for(i=2;i<=5;i++){
		ch=65+i-1;
		for(j=i;j>=1;j--){
			cout<<ch;
			ch--;
		}
		cout<<endl;
	}
	return 0;
}
