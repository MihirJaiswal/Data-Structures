#include<iostream>
using namespace std;

int main() {
    char n;
    cin >> n;
    
    if(n >= 'a' && n <= 'z'){
        cout << "this is lowercase";
    }
    else if(n >= '0' && n <= '9'){
        cout << "this is integer";
    }
    else if(n >= 'A' && n <= 'Z'){
        cout << "this is uppercase";
    }
    else{
        cout << "n is a special character";
    }

    return 0;
}

