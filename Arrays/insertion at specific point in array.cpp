#include  <iostream>
using namespace std;
int main(){
	
	int arr[20],num,index,element;
	cout<<"Enter the number of elements you want to have in your array : ";
	cin>>num;
	int capacity=sizeof(arr)/sizeof(arr[0]);
	
	
	cout<<endl<<"Enter the array elements : ";
		for(int i=0;i<num;i++){
			cin>>arr[i];
		}
		
		
    	cout<<endl<<"Enter the element you want to insert : ";
	    cin>>element;
	    cout<<endl<<"At what index  :  ";	
		cin>>index;
	    
	    if(num==capacity){
	    	cout<<endl<<"the array is already full ";
		}else{
			
			for(int i=num-1;i>=index;i--){
				arr[i+1]=arr[i];
			}
			arr[index]=element;
			num++;//as the size of array increase by 1
		}
		
			for(int i=0;i<num;i++){
		     cout<<endl<<arr[i]<<" ";
		}
		
		
		
	
	
     return 0;
 }
