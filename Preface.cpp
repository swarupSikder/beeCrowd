//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, q, r; 
    cin >> a >> b; 
    
    q = a / b; 
    r = a % b; 
    
    // Adjust quotient and remainder for negative dividend 
    if (r < 0) { 
        r += abs(b); 
        q = (a - r) / b; 
    } 
        
    cout << q << " " << r << endl;

    return 0;
}