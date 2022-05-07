#include <iostream>
using namespace std;

int maxSuma(int A[], int n){
	int r=0;int t=A[0];
	int p=0;int q=0;
	for(int i =1;i<n;i++){
		t=t+A[i];
		if(t>r){
			r=t;
			q=i;
		}
		else if(t<0){
			t=0;
			p=i+1;
		}
	}
	if(p>=n){
		cout<<"negativo"<<endl;		
	}
	else{
		cout<<p+1<<" - "<<q+1<<endl;
	}
	return r;
}

int main(){
	int arr[11]={31,-41,59,26,-53,58,97,-93,-23,84};
	int n=11;
	cout<<maxSuma(arr,n);
	return 0;
}









