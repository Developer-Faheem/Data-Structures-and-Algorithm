#include  <iostream>
using namespace std;
int main(){
	//
	
     	int size;
		cout<<"plz enter the size of the array : ";
		cin>>size;
		int arr[size];
		
		cout<<endl<<"enter the array elements : ";
		for(int i=0;i<size;i++){
			cin>>arr[i];
		}
	    for(int i=0;i<size-1;i++){
	    	for(int j=i+1;j<size;j++){
	    		if(arr[i]>arr[j]){
	    			int temp=arr[i];
	    			arr[i]=arr[j];
	    			arr[j]=temp;
				}
			}
		}
		  cout<<endl<<"array after the selection sorting is : ";
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
		
	
	return 0;
}
