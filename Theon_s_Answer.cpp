//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    vector<int> t(n);
    for(int i=0; i<n ;i++){
        cin>> t[i];
    }


    int mn = INT_MAX;
    int idx = 0;

    for(int i=0; i<n ;i++){
        if(t[i] < mn){
            mn = t[i];
            idx = i;
        }
    }

    cout<< idx+1 <<endl;
    
    return 0;
}