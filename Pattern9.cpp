/*
		A
	   A B
	  A B C
	 A B C D
	A B C D E
*/
#include<iostream>
using namespace std;
int main(){
	int i, j;
	char ch;
	for(i=5;i>=1;i--){
		ch='A';
		for(j=1;j<=i;j++){
			cout<<" ";
		}
		for(j=i;j<=5;j++){
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
	return 0;
}
