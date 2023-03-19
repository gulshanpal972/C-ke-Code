// Learning Linked List
#include<iostream>
using namespace std;
// Creating Node using Class
class Node{
	public:
	int data;
	Node* next;
};

// Function Declation
void mainMenu(Node* &head);
void insertionMenu(Node* &head);
void deletionMenu(Node* &head);

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
		cout<<"You entered the wrong value which is not present in the list\nPlease try again"<<endl;
		deletionMenu(head);
	}
	
}

// value deleted by position
void deleteByPosition(Node* &head, int position){
	Node *temp=head;
	int len=lengthOfList(head);
	// if user enter a wrong position
	if(position<=0 || position>=len){
		cout<<"\nYou are entering a wrong position which is not present in the list\nPlease try again"<<endl;
		deletionMenu(head);
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

// Main Menu
void mainMenu(Node* &head){
	int choose,len;
	while(1){
		int choose;
		cout<<"\n1-> Insert value in Linked List \n2-> Delete value from Linked List \n";
		cout<<"3-> Traverse Linked List \n4-> Exit \n";
		cout<<"Choose an option for which you want to execute further: ";
		cin>>choose;
		switch(choose){
			case 1:
				insertionMenu(head);
				break;
			case 2:
				deletionMenu(head);
				break;
			case 3:
				len=lengthOfList(head);
				if(len==1){
					cout<<"List is empty Please insert first";
					mainMenu(head);
				}
				else{
					cout<<"List is: ";
					printList(head);
				}
				break;
			case 4:
				exit(0);
				break;
			default:
				cout<<"!!! Wrong Input !!! Please enter a valid input\n";
				break;
		}
	}
}

// Insertion Menu
void insertionMenu(Node* &head){
	while(1){
		int choose,input,position,len;
		cout<<"\n1-> Insert at Head \n2-> Insert at a Particular Position \n";
		cout<<"3-> Insert at Tail \n4-> Goto Previous Menu \n5->Exit \n";
		cout<<"Choose an option for which you want to execute further: ";
		cin>>choose;
		switch(choose){
			case 1:
				cout<<"\nEnter value:";
				cin>>input;
				insertAtHead(head,input);
				cout<<"Value Inserted\n";
				break;
			case 2:
				cout<<"Enter position:";
				cin>>position;
				// If Position is either 0 or negative
				if(position<1){
					cout<<"!!! Warning !!! \nYou are trying either 0 or -ve position, where insertion is not possible"<<endl;
					break;
				}
				// If Position > LengthOfList+1 
				//      OR
				// Wrong Position
				len=lengthOfList(head);
				if(position>len){
					cout<<"!!! Sorry! List is small !!! \nYou can not insert a value here"<<endl;
					break;
				}
				cout<<"Enter value:";
				cin>>input;
				insertAtPosition(head,position,input);
				cout<<"Value Inserted\n";
				break;
			case 3:
				cout<<"Enter value:";
				cin>>input;
				insertAtTail(head,input);
				cout<<"Value Inserted\n";
				break;
			case 4:
				mainMenu(head);
				break;
			case 5:
				exit(0);
				break;
			default:
				cout<<"\n!!! Wrong Input !!! Please enter a valid input\n";
				break;
		}
	}
}

// Deletion Menu
void deletionMenu(Node* &head){
	int choose,del,position,len;
	len=lengthOfList(head);
	if(len<=1){
		cout<<"List is empty now. Please insert first\n";
		mainMenu(head);
	}
	else{
		while(1){
			cout<<"\nList is: ";
			printList(head);
	
			cout<<"\n1-> Delete by Value \n2-> Delete by Position \n";
			cout<<"3-> Goto Previous Menu \n4->Exit \n";
			cout<<"Choose an option for which you want to execute further: ";
			cin>>choose;
			switch(choose){
				case 1:
					cout<<"Enter value:";
					cin>>del;
					deleteByValue(head, del);
					cout<<del<<" Deleted\n";
					len=lengthOfList(head);
					if(len==1){
						deletionMenu(head);
					}
					break;
				case 2:
					cout<<"Enter position:";
					cin>>position;
					deleteByPosition(head, position);
					cout<<"Value Deleted from the position "<<position<<endl;
					len=lengthOfList(head);
					if(len==1){
						deletionMenu(head);
					}
					break;
				case 3:
					mainMenu(head);
					break;
				case 4:
					exit(0);
					break;
				default:
					cout<<"!!! Wrong Input !!! Please enter a valid input\n";
					break;
			}
		}
	}	
}

int main(){
	Node *head=NULL;
	
	mainMenu(head);
	
	return 0;
}
