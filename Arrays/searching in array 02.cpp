#include <iostream>
using namespace std;
int main(){//searching in the array 

     
		int arr[6]={1,2,3,4,5,6};
		int size=sizeof(arr)/sizeof(arr[0]);//give the size in bytes i.e 4*6=24;/size of the 1 element i.e 4bytes so 24/4
		
		cout<<" the array is : ";
		   for(int i=0; i<6;i++){
		   	cout<<arr[i]<<" ";  	
		   }
		
		int choice ;
		cout<<endl<<"press 1 for linear search "<<endl;
		cout<<"press 2 for binary search "<<endl;
		
			cout<<"enter your choice  : " ;
			cin>>choice;
			
			switch(choice ){
				case 1: 
				    int number;
					cout<<"Enter the element you want to find : ";
					cin>>number;
					
				    if(size==0){
				    	cout<<"there is no element in the array : ";
				    	return -1;
					}else{
						for(int i=0;i<6;i++){
							if(arr[i]==number ){
								cout<<"the element is at index : "<<i;
								return  1;
							}
						}
						cout<<"number is not present in the array :";
						return -1;
					}
					
				break;
				case 2:
				       int number1;
					cout<<"Enter the element you want to find : ";
					cin>>number1;
					
				    if(size==0){
				    	cout<<"there is no element in the array : ";
				    	return -1;
					}else{      
		              //for the binary searching array must be in sorted form 
					
						int start=0,end=size;
						
						while(start<=end){
							int middle=(start+end)/2;
							if(arr[middle]==number1){
								 cout<<"so the element is at index : "<<middle;
								return middle;
							}else if(arr[middle]>number1){
								end=middle-1;
							}else{
								start=middle+1;
							}
						}
						
						cout<<"number is not present in the array :";
						return -1;
					}
					break;
					
			}
		
		
		return 0;
		}

