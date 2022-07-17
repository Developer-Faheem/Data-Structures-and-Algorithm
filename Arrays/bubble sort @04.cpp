#include  <iostream>
using namespace std;
int main(){
	//bubble sort 
	
     
	
		int arr[]={5,4,1,0,2,5,9};
		int size=sizeof(arr)/sizeof(arr[0]);
		
//		cout<<endl<<"enter the array elements : ";
//		for(int i=0;i<size;i++){
//			cin>>arr[i];
//		}
	    
			for(int k=size;k>0;k--){
				for(int j=0;j<k;j++){
					int temp;
					if(arr[j]>=arr[j+1]){
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
					}
				
				}
			}
		
		cout<<endl<<"array after sorting : ";
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
		return 0;
	}
