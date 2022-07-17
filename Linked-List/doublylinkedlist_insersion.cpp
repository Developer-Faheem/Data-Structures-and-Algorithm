#include <iostream>
using namespace std;

struct node{
	int data;
	struct node* next;
	struct node* previous;
	
};
node* head;
node* tail;
int size;

void displayList(){
	struct node* temp;
	temp=head;

	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void insertAtFirst(int num ){
	
	struct node* newnode=new node();
	
	if(head==NULL){
		newnode->next=NULL;
		newnode->previous=NULL;
		newnode->data=num;
		head=newnode;
		tail=newnode;
        size++;
		return;
	}else{
		head->previous=newnode;
		newnode->next=head;
		newnode->previous=NULL;
		head=newnode;
		newnode->data=num;
		   size++;		
		return;
	}
}
void insertAtLast(int num ){
	
	struct node* newnode=new node();
	
	if(head==NULL){
		newnode->next=NULL;
		newnode->previous=NULL;
		newnode->data=num;
		head=newnode;
		tail=newnode;
		   size++;
		
	}else{
		tail->next=newnode;
		newnode->previous=tail;
		newnode->next=NULL;
		newnode->data=num;
		tail=newnode;
		   size++;
	}
}
void insertAtIndex(int position,int num){
	
	struct node* newnode=new node();
	
    if(position==1){
    	insertAtFirst(num);
	}else if (position==size+1){
		cout<<" insert at the last index";
		insertAtLast(num);
	}else{
		struct node* temp;
		temp=head;
			
    for(int i=1;i<position-1;i++){
        temp=temp->next;
    }
    
    node* sec=temp->next;
    
    temp->next=newnode;
    newnode->previous=temp;
    newnode->next=sec;
    sec->previous=newnode;
    newnode->data=num;
    size++;
	}
	
}

void deletionFunction(int position){
	
	if(head==NULL){
		cout<<"The list is already empty ";
	}else{
			if(position==1){
				head=head->next;
				head->previous=NULL;
				size--;
			}else if(position==size){
				tail=tail->previous;
				tail->next=NULL;
				size--;
			}else{
				
				struct node* temp;
				temp=head;
					
		    for(int i=1;i<=position-1;i++){
		        temp=temp->next;
		    }
		    
		    temp->previous->next=temp->next;
		    temp->next->previous=temp->previous;
		    size--;
			}
	}

	
}

int main(){
	
    head=NULL;
    tail=NULL;


    cout<<" Inserting the number 23 using the function insertAtFirst() "<<endl;
    
	insertAtFirst(23);
	
    cout<<" Inserting the number 43 using the function insertAtLast() "<<endl;
	insertAtLast(43);
	
	cout<<" Inserting the number 67    using the function insertAtFirst()"<<endl<<endl;
	insertAtFirst(67);
	
	cout<<"list after inserting certain numbers is : ";
	displayList();
	
	
	cout<<endl<<endl<<"Again  Inserting the number 100 using the function insertAtFirst() "<<endl<<endl;
	insertAtFirst(100);
	
	cout<<"list after inserting certain numbers is : ";
	displayList();
	
	
	cout<<endl<<endl<<"now deleting the 2 and 3 node  using the function deletionFunctio() "<<endl<<endl;
    deletionFunction(2);
    deletionFunction(3);


	cout<<"list after deleting certain nodes is: ";
	displayList();
	
		insertAtIndex(3,67);
		 cout<<"list after deleting certain nodes is: ";
	displayList();
	
	cout<<endl<<"size of the linked list after certain operations is : ";
	

	cout <<size;

    
	return 0;
}
