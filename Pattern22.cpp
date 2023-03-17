/*
		1
	   1 1
	  1 2 1
	 1 3 3 1
	1 4 6 4 1
*/
#include<iostream>
using namespace std;
int main(){
	int i, j,x;
	for(i=0;i<5;i++){
		for(j=i;j<5;j++){
			cout<<" ";
		}
		for(j=0;j<=i;j++){
			if(i==0 || j==0){
				x=1;
			}
			else{
				x=x*(i-j+1)/j;
			}
			cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;
}
