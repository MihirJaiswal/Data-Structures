/*#include<iostream>
using namespace std;
int main(){
	int i = 1;
	int n;
	cin>>n;
	int sum = 0;
	
	while(i <= n){
		int j = 1;
		while(j<=i){
			cout<< i - sum;
			sum = sum + 1;
			j=j+1;
		}
		cout<<endl;
		i = i+1;
		sum = 0;
	}
}
*/
// or

#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int i = 1;
	
	while(i<=n){
		int j =1;
		while(j<=i){
			cout<<i-j+1;
			j= j + 1;
		}
		cout<<endl;
		i = i + 1;
	}
}


/*
inpit = 4

output - 

1
2  1
3  2  1
4  3  2  1
*/
