//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void body(){
    int n;
    cin>> n;

    if(n%2==0){
        cout<< 0 <<endl;
    }
    else{
        cout<< 1 <<endl;
    }
}

int main(){
    int t;
    cin>> t;

    while(t--){
        body();
    }
    
    return 0;
}