// Doubly Linked List Practice
#include<iostream>
using namespace std;

// Creation of Node Class
class Node{
	public:
		int data;
		Node *prev;
		Node *next;
};

// Insertion at head in Doubly Linked List
void insertAtHead(Node* &head, int data){
	Node* newData=new Node();
	newData->data=data;
	newData->next=head;
	newData->prev=NULL;
	// Insertion if Node is NULL
	if(head!=NULL){
		head->prev=newData;
	}
	head=newData;
}

// Insertion at Tail
void insertAtTail(Node* &head, int data){
	Node* newNode=new Node();
	Node* temp=head;
	newNode->data=data;
	newNode->next=NULL;
	
	// Insertion if Node is NULL
	if(head==NULL){
		newNode->prev=NULL;
		head=newNode;
		return;
	}
	
	// Insertion at the end
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
	newNode->prev=temp;
	temp=newNode;
}

// Finding the length of the list
int lengthList(Node* &head){
	int count=0;
	Node *temp=head;
	while(temp!=NULL){
		temp=temp->next;
		count++;
	}
	return count;
}

// Insertion at a particular Position
void insertAtPosition(Node* &head, int data, int position){
	int len=lengthList(head);
	int count=1;
	
	// Insertion at first position
	if(position==1){
		insertAtHead(head,data);
		return;
	}
	
	// Message if given postion is not valid
	if(position>len+1){
		cout<<"can not insert here";
		return;
	}
	Node *temp=head;
	while(count<position-1){
		temp=temp->next;
		count++;
	}
	
	// Insertion at last position of the list
	if(temp->next==NULL){
		insertAtTail(head,data);
		return;
	}
	else{
		// Insertion at any given position rather than first or last
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

// Deletion of a given value
void deleteByValue(Node* &head, int data){
	// Message if list is empty
	if(head==NULL){
		cout<<"list is empty";
		return;
	}
	Node *temp=head;
	
	// Deletion if the given element is present at the head of the list
	if(head->data==data){
		head=head->next;
		head->prev=NULL;
		delete temp;
	}	
	while(temp->next!=NULL && temp->data!=data){
		temp=temp->next;
	}
	if(temp->data==data){
		// Deletion  if the given element is present at the end of the list
		if(temp->next==NULL){
			temp->prev->next=NULL;
			delete temp;
			return;
		}
		// Deletion if element is present anywhere in the list rather than first and last
		else{
			temp->next->prev=temp->prev;
			temp->prev->next=temp->next;
			delete temp;
			}
		return;
	}
	// Message if data is not present in the whole list
	else{
		cout<<"data is not present in the list";
		return;
	}
}

// Deletion of element from a specific position
void deleteByPosition(Node* &head, int position){
	int len=lengthList(head);
	// if entered position is out from the list
	if(position<=0 || position>len){
		cout<<"wrong input"<<endl;
		return;
	}
	Node *temp=head;
	int count=1;
	// if position is 1
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
	
	// if position is last
	if(temp->next==NULL){
		temp->prev->next=NULL;
		delete temp;
		return;
	}
	// if position is anywhere i tnhe list
	else{
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		delete temp;
		return;
	}
}

// Printing the list
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
