// Write a program to implement quick sort by choosing middle element as pivot
#include<iostream>
using namespace std;

void printArray(int arr[], int n){
	int i;
	for(i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
}

int partition(int arr[], int low, int high){
	int pivot,temp,i,j,count=0;
	i=low;
	j=high;
	int mid=(low+high)/2;
	pivot=arr[mid];
	while(i <= high){
		if(arr[i]<pivot){
			count++;
		}
		i++;
	}
	i=low;
	int pivotIndex=low+count;
	temp=arr[pivotIndex];
	arr[pivotIndex]=arr[mid];
	arr[mid]=temp;
	
	while(i<j){
		while(arr[i]<pivot){
			i++;
		}
		while(arr[j]>pivot){
			j--;
		}
		if(i<j){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	return pivotIndex;
}

void quickSort(int arr[], int low, int high){
	int partitionIndex;
	if(low<high){
		partitionIndex=partition(arr, low, high);
		quickSort(arr, low, partitionIndex-1);
		quickSort(arr, partitionIndex+1, high);
	}
}

int main(){
	int n,i;
	cout<<"enter the length of the array: ";
	cin>>n;
	int arr[n];
	cout<<"enter elements of the array: \n";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Entered Array is: \n";
	printArray(arr, n);
	quickSort(arr, 0, n-1);
	cout<<"\nSorted Array is: \n";
	printArray(arr, n);
	return 0;
}
