#include <iostream>
using namespace std;

int dp[200];

void print(int idx){
	for(int i=1;i<idx;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;
}

void solve(int remsum, int maxval, int idx, int& count){
	if(remsum==0){
		print(idx);
		count++;
		return;
	}
	for(int i=maxval;i>=1;i--){
		if(i>remsum){
			continue;
		}
		else if(i<=remsum){
			dp[idx]=i;
			solve(remsum-i,i,idx+1,count);
		}
	}
}

int main(){
	int n=0;
	cout<<"n= ";
	cin>>n;
	int count=0;
	solve(n,n,1,count);
	return 0;
}
 
