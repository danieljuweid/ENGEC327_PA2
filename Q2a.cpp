#include <iostream> 
using namespace std; 

int gcd (int,int); 

int main(){ 
    int m; 
    int n; 

    cout << "Enter m: " << endl; 
    cin >> m; 

    cout << "Enter n: " <<endl;
    cin >> n; 

    cout << "GCD is: " << gcd(m,n) << endl;
    return 0; 
}

int gcd (int a, int b){ 
    if(a%b == 0){ 
        return b; 
    }
    else {
        return gcd(b, a%b); 
    }
}