#include  <iostream>
using namespace std;
int main(){
	
	int arr[20],num,position,element;
	cout<<"Enter the number of elements you want to have in your array : ";
	cin>>num;
	int capacity=sizeof(arr)/sizeof(arr[0]);
	
	
	cout<<endl<<"Enter the array elements : ";
		for(int i=0;i<num;i++){
			cin>>arr[i];
		}
		
	cout<<endl <<"Enter the element to delete : ";
	cin>>element;
	
	//in order to find the location of the elemnt to delete 
	
	for(int i=0;i<num;i++){
		if(element==arr[i]){
			position=i;
		}
	}
	
	//deleting the element
	
	for(int j=position;j<num;j++){
		arr[j]=arr[j+1];
	}
	num--;
	
	//arrray after the deletion operation 
	
		cout<<endl<<"array after the deletion operation : ";
		for(int i=0;i<num;i++){
			cout<<arr[i]<<" ";
		}
		
		return 0;
	}
