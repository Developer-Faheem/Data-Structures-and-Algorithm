#include <iostream>
#include <climits>
using namespace std;
int main(){
	
	int arr[5];
//	int arr[5]={1,2,3,45,6};

cout<<"plz enter 5 elements in the array : ";
   for(int i=0; i<5;i++){
   	cin>>arr[i];  	
   }
	
//finding the minimum and maximum number in the array 


    int max =INT_MIN; //int min is the smallest possible integer 
    
    int min =INT_MAX; //greatest possible integer

     for(int i=0; i<5;i++){
	       	if(arr[i]<min){
	     		min=arr[i];
			 }
			 	if(arr[i]>max){
	     		max=arr[i];
			 }
      }
	
	cout<<endl<<"maximum is "<<max<<endl<<"minimum is "<<min;
	
	
	return 0;
}
