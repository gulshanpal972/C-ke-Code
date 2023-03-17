/*
		EDCBA
		EDCB
		EDC
		ED
		E
*/
#include<iostream>
using namespace std;
int main(){
	int i, j;
	char ch;
	for(i=1;i<=5;i++){
		ch='E';
		for(j=5;j>=i;j--){
			cout<<ch;
			ch--;
		}
		cout<<endl;
	}
	return 0;
}
