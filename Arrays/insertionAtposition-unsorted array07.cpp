#include  <iostream>
using namespace std;
int main(){
	
    //insersion in unsorted array at any desired location. 
	
		int arr[10]={1,2,3,4,5};
		int size = sizeof(arr)/sizeof(arr[0]);
		int currentelements=5;
		
	    int position,element;
	    cout<<"enter the position at which you want to insert the element : ";
	    cin>>position;
	    cout<<endl<<"enter the element you want to insert  : ";
	    cin>>element;
	    
	    for(int i=currentelements-1;i>=position;i--){
	    	arr[i+1]=arr[i];
		}
		arr[position]=element;
	    
	    
	    for(int j=0;j<size;j++){
	    	cout<<arr[j]<<" ";
		}
	    
			
		return 0;
		
	}
