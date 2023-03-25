// Stack using Linked List
#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		int size;
		int top;
		Node(){
			top=-1;
		}
		bool full(){
			if(top==size-1){
				return true;
			}
			else{
				return false;
			}
		}
		bool empty(){
			if(top==-1){
				return true;
			}
			else{
				return false;
			}
		}
		void push(Node* &head, int data){
			if(full()==true){
				cout<<"Stack is full";
			}
			else{
				top++;
				Node *tos=new Node();
				tos->data=data;
				tos->next=NULL;
				if(head==NULL){
					head=tos;
				}
				else{
					Node *temp=head;
					while(temp->next!=NULL){
						temp=temp->next;
					}
					temp->next=tos;
				}
			}
		}
		void pop(Node* &head){
			if(empty()==true){
				cout<<"Stack is empty";
			}
			else{
				top--;
				Node *tos=head;
				if(head->next==NULL){
					head=head->next;
					delete tos;
				}
				else{
					Node *prev=head;
					while(tos->next!=NULL){
						prev=tos;
						tos=tos->next;
					}
					prev->next=NULL;
					delete tos;
				}
			}
		}
		void printStack(Node* &head){
			if(empty()==true){
				cout<<"Stack is empty";
			}
			else{
				Node *tos=head;
				while(tos!=NULL){
					cout<<tos->data<<"\t";
					tos=tos->next;
				}
				cout<<endl;
			}
		}
};

int main(){
	Node *head=NULL;
	Node s;
	s.size=5;
	s.push(head, 10);
	s.push(head, 20);
	s.push(head, 30);
	s.push(head, 40);
	s.push(head, 50);
//	s.push(head, 60);
	s.printStack(head);
	s.pop(head);
	s.pop(head);
	s.pop(head);
	s.printStack(head);
	s.push(head, 60);
	s.printStack(head);
	return 0;
}
