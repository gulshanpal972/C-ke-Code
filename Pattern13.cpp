/*
		A
	   B B
	  C C C
	 D D D D
	E E E E E
*/
#include<iostream>
using namespace std;
int main(){
	int i, j;
	char ch='A';
	for(i=1;i<=5;i++){
		for(j=i;j<=5;j++){
			cout<<" ";
		}
		for(j=1;j<=i;j++){
			cout<<" "<<ch;
		}
		ch++;
		cout<<endl;
	}
	return 0;
}
