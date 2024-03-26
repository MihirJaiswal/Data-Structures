#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i =1;
	char sum = 'A';
	
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<sum;
			sum = sum + 1;
			j = j+1;
		}
		cout<<endl;
		i = i+1;
	}
}

/*
input = 4

output = 

A
BC
DEF
GHIJ
*/
