// Queue using linked list
#include<iostream>
using namespace std;
class Queue{
	public:
		int size;
		int data;
		Queue *next;
		int count;
		Queue *rear;
		Queue *head;
		Queue(){
			count=-1;
			rear=NULL;
			head=NULL;
		}
		bool empty(){
			if(count==-1){
				return true;
			}
			else{
				return false;
			}
		}
		bool full(){
			if(count==size-1){
				return true;
			}
			else{
				return false;
			}
		}
		void enqueue(int data){
			if(full()==true){
				cout<<"Queue is full";
			}
			else{
				count++;
				Queue *temp=new Queue();
				temp->data=data;
				temp->next=NULL;
				if(head==NULL){
					head=temp;
					rear=head;
				}
				else{
					while(rear->next!=NULL){
						rear=rear->next;
					}
					rear->next=temp;
					rear=temp;
				}
			}
		}
		
		void dequeue(){
			if(empty()==true){
				cout<<"Queue is empty";
			}
			else{
				count--;
				Queue *temp=head;
				head=head->next;
				delete temp;
			}
		}
		
		void retrieve(){
			if(empty()==true){
				cout<<"Queue is empty";
			}
			else{
				Queue *temp=head;
				while(temp!=NULL){
					cout<<temp->data<<"\t";
					temp=temp->next;
				}
				cout<<endl;
			}			
		}
};
int main(){
	Queue q;
	q.size=5;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.retrieve();
	q.dequeue();
	q.dequeue();
	q.retrieve();
	q.enqueue(60);
	q.retrieve();
}
