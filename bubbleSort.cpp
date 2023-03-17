// Write a program for bubble sort
#include<iostream>
using namespace std;
void printArray(int arr[], int n);
void bubbleSort(int arr[], int n);
int main(){
	int n,i;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter values in the array: \n";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Your entered array is: \n";
	printArray(arr,n);
	bubbleSort(arr,n);
	cout<<"\nSorted array is: ";
	printArray(arr,n);
	return 0;
}
void printArray(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
}
void bubbleSort(int arr[], int n){
	int i,j,temp;
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
