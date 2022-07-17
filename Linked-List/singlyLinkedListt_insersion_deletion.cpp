#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

 node* head;
 node* tail;
 
 int size;

 void displayList(){
	node *temp=head;

	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

void insertAtFirst(int num){
	struct node* newnode= new node();

	if(head==NULL){
		head=newnode;
		tail=newnode;
		newnode->data=num;
		newnode->next=NULL;
		size++;
	}else{
		newnode->next=head;
		head=newnode;
		newnode->data=num;
		size++;
	}
	
}
void insertAtLast(int num){
	struct node* newnode= new node();

	if(head==NULL){
		head=newnode;
		tail=newnode;
		newnode->data=num;
		newnode->next=NULL;
		size++;
	}else{
		tail->next=newnode;
		tail=newnode;
		newnode->data=num;
		newnode->next=NULL;
		size++;
	}
	
}

void insertAtIndex(int position,int num){
	
	if(position==1){
		
		insertAtFirst(num);
	}else if (position==size){
			
		insertAtLast(num);
	}else{
		
		struct node* newnode= new node();
		struct node* temp;
	
	    temp=head;
		
		for(int i=1;i<position-1;i++){
			temp=temp->next;
		}

		newnode->next=temp->next;
		temp->next=newnode;

		newnode->data=num;
		size++;
		
	}
}

int deletionFunction(int position){

	if(head==NULL){
		cout<<"The list is empty already ";
		return 0;
	}else{
		if(position==1){
			head=head->next;
			size--;
		}else if(position==size){
		
			struct node* temp;
			temp=head;
			
			for(int i=1;i<position-1;i++){
				temp=temp->next;
			}
			tail=temp;
			temp->next=NULL;
			size--;
		
		}else {
			
			struct node* temp;
			temp=head;	
			
			for(int i=1;i<position-1;i++){
				temp=temp->next;//getting the address of the node just before the selected position 
			}
			temp->next=temp->next->next;
			size--;
		}
	}
}

int main(){
	head=NULL;
	tail=NULL;
	size=0;

	insertAtIndex(1,100);
	insertAtIndex(1,200);
	insertAtIndex(2,500);
	insertAtIndex(3,900);
	insertAtIndex(3,900);
	insertAtIndex(2,5);
			
	insertAtIndex(2,88);
			
		
	
//insertAtFirst(20);
//insertAtLast(30);
//insertAtFirst(45);
//insertAtFirst(50);
	
	cout<<endl;
	displayList();
	
	
	cout<<endl;
	
		deletionFunction(3);
		displayList();
		
	
	
	return 0;
}
