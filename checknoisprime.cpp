#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i = 2;
	if(i < n){
		if(n%i == 0){
			cout<<"not prime";
		}
		else{
			cout<<"prime";
		}
		i = i+1;
	}
}
