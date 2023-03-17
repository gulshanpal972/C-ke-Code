/*
		A
	   A A
	  A B A
	 A C C A
	A D F D A
*/
#include<iostream>
using namespace std;
int main(){
	int i, j,x;
	char ch;
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
			ch=65+x-1;
			cout<<ch<<" ";
		}
		cout<<endl;
	}
	return 0;
}
