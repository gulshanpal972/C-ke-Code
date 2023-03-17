// Write a program for linear serching 
#include<iostream>
using namespace std;
int main(){
	int search,i,flag=-1,len;
	int arr[]={23,65,89,32,15,76,94};
	len=sizeof(arr)/sizeof(arr[0]);
	cout<<"Enter item to search in the array: ";
	cin>>search;
	for(i=0;i<len;i++){
		if(arr[i]==search){
			flag=1;
			cout<<search<<" found at index "<<i;
			break;
		}
	}
	if(flag==-1){
		cout<<search<<" is not present in the given array";
	}
}
