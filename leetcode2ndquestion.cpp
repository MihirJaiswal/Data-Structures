//Number of 1 Bits

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count =0 ;
	
	while(n!=0){
	   if(n&1){
	   	count++;
	   }
	   n=n>>1;
	}
	cout<<count;
}

/*
Example:

Input: n = 11

Output: 3

Explanation:

The input binary string 1011 has a total of three set bits.
*/
