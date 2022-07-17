#include  <iostream>
using namespace std;
int main(){
	//insersion at the end in the array 
	
     
	
		int arr[6];
		int size = sizeof(arr)/sizeof(arr[0]);
		int currentelements=4;
		
		
		cout<<endl<<"enter the 5 array elements : ";
		for(int i=0;i<size-1;i++){
			cin>>arr[i];
		}
		
		
	
  if(currentelements<size){
		
			cout<<endl<<"enter the element to insert  : ";
	    cin>>arr[currentelements+1];
	    
	    	cout<<endl<<"Array after inserting the element  : ";
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
	}else{
		cout<<endl<<"the array is already full ";
	}
		
		      
			
		
		return 0;
	}
