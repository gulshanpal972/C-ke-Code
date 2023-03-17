/*
		12345
		1234
		123
		12
		1
		12
		123
		1234
		12345
*/
#include<iostream>
using namespace std;
int main(){
	int i, j;
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
	for(i=2;i<=5;i++){
		for(j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
