/*
		1
		23
		456
		78910
		1112131415
*/
#include<iostream>
using namespace std;
int main(){
	int i, j,x=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			cout<<x;
			x++;
		}
		cout<<endl;
	}
	return 0;
}
