#include <iostream>
using namespace std;
int main(){
	int rows,columns;
	cout<<"Enter the number of rows of matrix : ";
	cin>>rows;
	cout<<"Enter the number of columns of matrix : ";
	cin>>columns;
	int array [rows][columns];
	
	cout<<"Enter your matrix  matrix : ";
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			cin>>array[i][j];
		}	
	}
	//taking the trnaspose of the matrix step 1
		for(int i=0;i<rows;i++){
		for(int j=i;j<columns;j++){
		    int temp=array[i][j];
			array[i][j]=array[j][i];
			array[j][i]=temp;
		}	
	}
	
	//fliping the matrix horizontally step 2
		for(int i=0;i<rows;i++){
		for(int j=0;j<(rows/2);j++){
			int temp=array[i][j];
			array[i][j]=array[i][rows-1-j];
		array[i][rows-1-j]=temp;
		}	
	}
	//displaying the array 
	cout<<endl<<"Matrix after rotation is : "<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			cout<<array[i][j]<<" ";
		}	
		cout<<endl;
	}
	
	
	
	
	
	return 0;
}
