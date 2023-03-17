// Write a program for insertion sort
#include<iostream>
using namespace std;
void printArray(int arr[], int n);
void insertionSort(int arr[], int n);
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
	insertionSort(arr,n);
	cout<<"\nSorted array is: ";
	printArray(arr,n);
	return 0;
}
void printArray(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
}
void insertionSort(int arr[], int n){
	int i,j,temp;
	for(i=1;i<n;i++){
		temp=arr[i];
		for(j=i-1;j>=0;j--){
			if(temp<arr[j]){
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
			else{
				break;
			}
		}
	}
}
