//WAP to search an element in the array using binary search
#include<iostream>
using namespace std;
bool binarySearch(int arr[],int s, int n, int item){
	int mid;
	while(s<n){
		mid=(s+n)/2;
		if(arr[mid]==item){
		cout<<item<<" found at index "<<mid;
		return true;
		}
		else if(item>arr[mid]){
			s=mid+1;
		}
		else{
			n=mid-1;
		}
	}
	return false;
}
int main(){
	int search,i,flag=-1,len;
	int arr[]={10,15,20,25,30,33,35,38,45,50};
	len=sizeof(arr)/sizeof(arr[0]);
	cout<<"Enter item to search in the array: ";
	cin>>search;
	if(binarySearch(arr,0, len, search)!=true){
		cout<<search<<" is not present in the given array";
	}
}
