/*
		10000
		02000
		00300
		00040
		00005
*/
#include<iostream>
using namespace std;
int main(){
	int i, j,x=0;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==j){
				x++;
				cout<<x;
			}
			else
				cout<<0;
		}
		cout<<endl;
	}
	return 0;
}
