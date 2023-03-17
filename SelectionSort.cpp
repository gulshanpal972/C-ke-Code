// Write a program to implement selection sort
#include<iostream>
using namespace std;
void printArray(int arr[], int n);
void selectionSort(int arr[], int n);
int main(){
	int n,i;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter values in the array: ";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Your entered array is: \n";
	printArray(arr,n);
	selectionSort(arr,n);
	cout<<"\nSorted array is: ";
	printArray(arr,n);
	return 0;
}
void printArray(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
}
void selectionSort(int arr[], int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
