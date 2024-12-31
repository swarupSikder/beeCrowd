//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    string mustChoose = "Ciencia da Computacao";
    
    int n;
    cin>> n;
    cin.ignore();

    vector<string> list(n);
    for(int i=0; i<n ;i++){
        getline(cin, list[i]);
    }

    cout<< mustChoose <<endl;
    
    return 0;
}