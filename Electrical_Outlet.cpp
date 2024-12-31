//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t1, t2, t3, t4, total;
    cin>> t1 >> t2 >> t3 >> t4;

    total = (t1-1) + t2;
    //cout<< total <<endl;

    total = (total-1) + t3;
    //cout<< total <<endl;

    total = (total-1) + t4;
    cout<< total <<endl;
    
    return 0;
}