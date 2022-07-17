#include  <iostream>
using namespace std;

int findingLocation(int currentelements,int size, int arr[],int element){
	 //finding the position to insert first
	    for(int i=0;i<currentelements;i++){
	    	if(arr[i]>element){
	    		return i;
			}
		}
	
}
int main(){
	
    //insersion in unsorted array at any of the desired location. 
	
		int arr[10]={1,10,20,40,50};
		int size = sizeof(arr)/sizeof(arr[0]);
		int currentelements=5;
	    int position,element;
	    cout<<endl<<"Enter the element  you want to insert  : ";
	    cin>>element;
	 
	 //finding the position to insert first
	   position=findingLocation(currentelements,size, arr,element);
	   
	   for(int i=currentelements-1;i>=position;i--){
	   	arr[i+1]=arr[i];   	
	   }
	   arr[position]=element;
	   
	   cout<<endl<<"array after the insersion is : ";
	    for(int j=0;j<size;j++){
	    	cout<<arr[j]<<" ";
		}
	  
	    
	    return 0;
	}
