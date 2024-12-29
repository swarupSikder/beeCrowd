//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,q,r;
    cin>> a >> b;

    //case 1: if divisor is 0
    if(b==0){
        cout<<endl;
        return 0;
    }

    // Ensure remainder is non-negative
    r = a % abs(b); // Use abs(b) to always get a valid positive divisor for modulo

    if(r<0){
        if(b>0){
            r += abs(b);
            a -= b;     // Adjust dividend to maintain a = b*q + r
        } 
        else{
            r -= abs(b);
            a += b;     // Adjust dividend to maintain a = b*q + r
        }
    }

    // Recalculate quotient after adjusting remainder
    q = (a-r)/b;

    cout<< q <<" "<< r <<endl;

    return 0;
}