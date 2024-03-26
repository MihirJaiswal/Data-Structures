#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i = 1;
	int sum = 'A';
	
	while(i<=n){
		int j = 1;
		while(i<=n){
			char ch = sum;
			cout << ch;
			sum = sum + 1;
			j = j+ 1;
		}
		cout<< endl;
		i = i + 1;
	}
}
