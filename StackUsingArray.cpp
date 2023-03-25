// Stack Using Array
#include<iostream>
using namespace std;
class Stack{
	public: 
	int size;
	int *arr;
	int top;
	Stack(int size){
		this->size=size;
		arr=new int(size);
		top=-1;
	}
	bool empty(){
		if(top==-1){
			return true;
		}
		else{
			return false;
		}
	}
	bool full(){
		if(top==size-1){
			return true;
		}
		else{
			return false;
		}
	}
	void push(int data){
		if(full()==true){
			cout<<"Stack is full";
		}
		else{
			top++;
			arr[top]=data;
		}
	}
	void pop(){
		if(empty()==true){
			cout<<"Stack is empty";
		}
		else{
			top--;
		}
	}
	void retrieve(){
		if(empty()==true){
			cout<<"Stack is empty";
		}
		else{
			int i=0;
			while(i<=top){
				cout<<arr[i]<<"\t";
				i++;
			}
			cout<<endl;
		}
	}
};

int main(){
	Stack s(5);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.retrieve();
	s.pop();
	s.pop();
	s.retrieve();
	s.push(60);
	s.retrieve();
	return 0;
}
