// Learning Linked List
#include<iostream>
using namespace std;

// Creating Node using Class
class Node{
	public:
	int data;
	Node* next;
};

// Finding the length of the List
int lengthOfList(Node* head){
	int count=1;
	while(head!=NULL){
		head=head->next;
		count++;
	}
	return count;
}

// Insert Node at Head 
void insertAtHead(Node* &head,int data){
	Node* newNode=new Node();
	newNode->data=data;
	newNode->next =head;
	head=newNode;
}

// Insert Node at Particular Position
void insertAtPosition(Node* &head, int position,int data){
	// If Position=1
	if(position==1){
		insertAtHead(head,data);
		return;
	}
	
	// If Position is either 0 or negative
	if(position<1){
		cout<<"!!! Warning !!! \nYou are trying either 0 or -ve position, where insertion is not possible"<<endl;
		return;
	}
	
	// If Position > LengthOfList+1 
	//      OR
	// Wrong Position
	int len=lengthOfList(head);
	if(position>len+1){
		cout<<"!!! Warning !!! \nYou can insert only position <= "<<len+1<<endl;
		return;
	}
	
	// Inserting at given position
	Node* newNode=new Node();
	Node* temp=head;
	int count=1;
	while(count<position-1){
		count++;
		temp=temp->next;
	}
	newNode->data=data;
	newNode->next=temp->next;
	temp->next=newNode;
}

// Insertion at Tail or Last
void insertAtTail(Node* &head,int data){
	Node* newNode=new Node();
	newNode->data=data;
	newNode->next=NULL;
	if(head==NULL){
		head=newNode;
		return;
	}
	Node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
}

// Printing List
void printList(Node *head){
	while(head!=NULL){
		cout<<head->data<<"\t";
		head=head->next;
	}
}

// Node deleted by the value
void deleteByValue(Node* &head, int value){
	Node* temp=head;
	
	// If value is present at the Head of the list
	if(head->data==value){
		head=head->next;
		delete temp;
		cout<<endl;
		return;
	} 
	
	Node* prev;
	while(temp->next!=NULL && temp->data!=value){
			prev=temp;
			temp=temp->next;
	}
	
	// If value is present at any position in the list
	if(temp->data==value){
		prev->next=temp->next;
		delete temp;
		cout<<endl;
		return;
	}
	
	// If value is not present in the list
	else{
		cout<<"You entered the wrong value which is not present in the list"<<endl;
	}
	
}

// value deleted by position
void deleteByPosition(Node* &head, int position){
	Node *temp=head;
	int len=lengthOfList(head);
	
	// if user enter a wrong position
	if(position<=0 || position>len){
		cout<<"\nYou are entering a wrong position which is not present in the list"<<endl;
		return;
	}
	
	// if value is present at the 1st position
	else if(position==1){
		head=head->next;
		delete temp;
		cout<<endl;
		return;
	}
	
	// if value is present at any position in the list
	else{
		int count=1;
		Node *prev;
		while(count<position){
			count++;
			prev=temp;
			temp=temp->next;
		}
		prev->next=temp->next;
		delete temp;
		cout<<endl;
		return;
	}
}

int main(){
	Node *head=NULL;
	insertAtHead(head,10);
	insertAtHead(head,30);
	
	insertAtTail(head,50);
	insertAtTail(head,40);
	
	insertAtPosition(head,5,80);
	
	printList(head);
	
	deleteByValue(head, 40);
	printList(head);
	
	deleteByPosition(head, 3);
	printList(head);
	
	return 0;
}
