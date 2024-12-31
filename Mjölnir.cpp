//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void body(){
    cin.ignore();
    string name;
    int power;
    cin>> name >> power;

    if(name == "Thor"){
        cout<< "Y" <<endl;
    }
    else{
        cout<< "N" <<endl;
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