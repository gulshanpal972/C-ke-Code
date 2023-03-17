/*
		1
		12
		123
		1234
		12345
		1234
		123
		12
		1
*/
#include<iostream>
using namespace std;
int main(){
	int i, j;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
	for(i=1;i<=5;i++){
		for(j=1;j<=5-i;j++){
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
