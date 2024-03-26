#include<iostream>
using namespace std;
int main(){
	int i = 1;
	int n;
	cin>>n;
	int sum = n;
	
	while(i<=n){
		int j = 1;
		while(j<=i){
		char ch = 'A' + sum + j - i - 1;
		cout<<ch;
		sum = n;
		j = j + 1;	
		}
		cout<<endl;
		i = i+1;
	}
}
