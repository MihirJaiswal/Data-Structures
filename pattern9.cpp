#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int sum = 1;
	int i = 1;
	
	while(i<=n){
		int j = 1;
		while(j <= i){
			cout<<sum;
			sum = sum + 1;
			j = j+1;
		}
		cout<<endl;
		i = i + 1;
	}
}
