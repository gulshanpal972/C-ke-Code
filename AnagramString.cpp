//WAP to print anagram strings
#include<iostream>
using namespace std;
int main(){
string str1,str2, anagram1, anagram2;
char temp;
int i,j;
cout<<"Enter first string: ";
cin>>str1;
cout<<"Enter second string: ";
cin>>str2;
anagram1=str1;
anagram2=str2;

for(i=0;i<str1.length();i++){
	for(j=i+1;j<str1.length();j++){
		if(str1[j]<str1[i]){
			temp=str1[j];
			str1[j]=str1[i];
			str1[i]=temp;
		}
	}
}

for(i=0;i<str2.length();i++){
	for(j=i+1;j<str2.length();j++){
		if(str2[j]<str2[i]){
			temp=str2[j];
			str2[j]=str2[i];
			str2[i]=temp;
		}
	}
}

if(str1==str2)
	cout<<anagram1<<" is anagram to "<<anagram2;
else
	cout<<anagram1<<" is not anagram to "<<anagram2;
return 0;
}
