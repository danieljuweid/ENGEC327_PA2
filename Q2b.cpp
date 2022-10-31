#include <iostream> 

using namespace std; 

float series(int n); 

int main(){ 
    int n; 

    cout << "Enter n: " <<endl;
    cin >> n; 

    cout << "Series(" << n << ") is: " << series(n) << endl; 

    return 0; 
}

float series (int n){ 
    if(n == 0){
        return 0; 
    }
    return float(2*n)/float(3*n+2) + series(n-1);
}