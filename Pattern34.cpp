/*
		A
	   ABA
	  ABCBA
	 ABCDCBA
	ABCDEDCBA
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
			cout<<ch;
			ch++;
		}
		ch--;
		for(j=i-1;j>=1;j--){
			ch--;
			cout<<ch;
		}
		cout<<endl;
	}
	return 0;
}
