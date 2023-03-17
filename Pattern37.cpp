/*
		AAAAA
		AAABB
		AACCC
		ADDDD
		EEEEE
*/
#include<iostream>
using namespace std;
int main(){
	int i, j;
	char ch='A';
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i+j>=6)
				cout<<ch;
			else
				cout<<"A";
		}
		ch++;
		cout<<endl;
	}
	return 0;
}
