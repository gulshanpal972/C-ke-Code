// Write a program for merge sort
#include<iostream>
using namespace std;

void printArray(int arr[], int s, int e){
	for(int i=s;i<e;i++){
		cout<<arr[i]<<"\t";
	}
}

void merge(int arr[], int s, int e){
	if(s<e){
		int mid=(s+e)/2;
		int len1=mid-s+1;
		int len2=e-mid;
		int firstarr[len1];
		int secondarr[len2];
		int i,j,k=s;
		for(i=0;i<len1;i++){
			firstarr[i]=arr[k];
			k++;
		}
		k=mid+1;
		for(i=0;i<len2;i++){
			secondarr[i]=arr[k];
			k++;
		}
		i=0,j=0,k=s;
		while(i<len1 && j<len2){
			if(firstarr[i]<secondarr[j]){
				arr[k]=firstarr[i];
				i++;
			}
			else{
				arr[k]=secondarr[j];
				j++;
			}
			k++;
		}
		while(i<len1){
			arr[k]=firstarr[i];
			i++;
			k++;
		}
		while(j<len2){
			arr[k]=secondarr[j];
			j++;
			k++;
		}
	}
}

void mergeSort(int arr[], int s, int e){
	if(s<e){
		int mid=(s+e)/2;
		mergeSort(arr,s,mid);
		mergeSort(arr,mid+1,e);
		merge(arr,s,e);
	}
}

int main(){
	int n,i;
	
	cout<<"Enter the length of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array: "<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Your entered array is: "<<endl;
	printArray(arr,0,n);
	
	mergeSort(arr,0,n-1);
	cout<<"\nYour sorted array is: "<<endl;
	printArray(arr,0,n);
	
	return 0;
}
