#include <iostream>
#include <cstdlib>
using namespace std;

void insertionSort(int array[],int min, int max){
	int key;
	for(int j=min+1;j<=max;j++){
		key=array[j];
		int i=j-1;
		
		while(i>=min && array[i]>key){
			array[i+1]=array[i];
			i--;
		}
		array[i+1]=key;
	}		
}
void merge(int array[],int min,int max,int med){
	int i=min, j=med+1, cont=0;
	int *temp=new int[max-min+1];
	
	while(i<=med && j<=max)
		temp[cont++]=(array[i]<array[j] ? array[i++] : array[j++]);
	while(i<=med)
		temp[cont++]=array[i++];
	while(j<=max)
		temp[cont++]=array[j++];
	for(i=min;i<=max;i++)
		array[i]=temp[i-min];
}
void mergeSort(int array[],int min,int max,int var_k){
	if((max-min)<= var_k){
		insertionSort(array,min,max+1);
		return;
	}
	else{
		int med=(max+min)/2;
		mergeSort(array,min,med,var_k);
		mergeSort(array,med+1,max,var_k);
		merge(array,min,max,med);
	}
}

int main(){
	int var_k=10;
	int size=100;
	int array[100];
	
	for(int i=0;i<size;i++)
		array[i]=rand()%size;
	//insertionSort(array,0,99);
	mergeSort(array,0,size-1,var_k);
	for(int i=0;i<size-1;i++){
		cout<<array[i]<<", ";
	}	
	
	return 0;
}

