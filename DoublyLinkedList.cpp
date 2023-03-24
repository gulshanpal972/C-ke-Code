// Doubly Linked List Practice
#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *prev;
		Node *next;
};

void insertAtHead(Node* &head, int data){
	Node* newData=new Node();
	newData->data=data;
	newData->next=head;
	newData->prev=NULL;
	if(head!=NULL){
		head->prev=newData;
	}
	head=newData;
}

void insertAtTail(Node* &head, int data){
	Node* newNode=new Node();
	Node* temp=head;
	newNode->data=data;
	newNode->next=NULL;
	if(head==NULL){
		newNode->prev=NULL;
		head=newNode;
		return;
	}
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
	newNode->prev=temp;
	temp=newNode;
}

int lengthList(Node* &head){
	int count=0;
	Node *temp=head;
	while(temp!=NULL){
		temp=temp->next;
		count++;
	}
	return count;
}

void insertAtPosition(Node* &head, int data, int position){
	int len=lengthList(head);
	int count=1;
	if(position==1){
		insertAtHead(head,data);
		return;
	}
	if(position>len+1){
		cout<<"can not insert here";
		return;
	}
	Node *temp=head;
	while(count<position-1){
		temp=temp->next;
		count++;
		//cout<<count;
	}
	if(temp->next==NULL){
		insertAtTail(head,data);
		return;
	}
	else{
		Node *newNode=new Node();
		newNode->data=data;
		newNode->next=temp->next;
		newNode->prev=temp;
		temp->next->prev=newNode;
		temp->next=newNode;
		temp=newNode;
		return;
	}
}

void deleteByValue(Node* &head, int data){
	if(head==NULL){
		cout<<"list is empty";
		return;
	}
	Node *temp=head;
	if(head->data==data){
		head=head->next;
		head->prev=NULL;
		delete temp;
	}	
	while(temp->next!=NULL && temp->data!=data){
		temp=temp->next;
	}
	if(temp->data==data){
		if(temp->next==NULL){
			temp->prev->next=NULL;
			delete temp;
			return;
		}
		else{
			temp->next->prev=temp->prev;
			temp->prev->next=temp->next;
			delete temp;
			}
		return;
	}
	else{
		cout<<"data is not present in the list";
		return;
	}
}

void deleteByPosition(Node* &head, int position){
	int len=lengthList(head);
	if(position<=0 || position>len){
		cout<<"wrong input"<<endl;
		return;
	}
	Node *temp=head;
	int count=1;
	if(position==1){
		head=head->next;
		head->prev=NULL;
		delete temp;
		return;
	}
	while(count<position){
		temp=temp->next;
		count++;
	}
	if(temp->next==NULL){
		temp->prev->next=NULL;
		delete temp;
		return;
	}
	else{
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		delete temp;
		return;
	}
}

void printData(Node* &head){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<""<<endl;
}

int main(){
	Node *head=NULL;
	insertAtHead(head, 10);
	insertAtHead(head, 20);
	insertAtHead(head, 30);
	insertAtTail(head, 40);
	insertAtTail(head, 50);
	insertAtPosition(head, 60, 5);
	printData(head);
	deleteByValue(head, 50);
	printData(head);
	deleteByPosition(head, 5);
	printData(head);
	return 0;
}
