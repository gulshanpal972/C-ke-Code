/*
		54321
		5432
		543
		54
		5
		54
		543
		5432
		54321
*/
#include<iostream>
using namespace std;
int main(){
	int i, j;
	for(i=5;i>=1;i--){
		for(j=i;j>=1;j--){
			cout<<j;
		}
		cout<<endl;
	}
	for(i=2;i<=5;i++){
		for(j=i;j>=1;j--){
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
