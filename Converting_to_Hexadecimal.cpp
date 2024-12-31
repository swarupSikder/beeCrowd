//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<char> list = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    int n;
    cin>> n;

    //edge case
    if(n<16){
        cout<< list[n] <<endl;
        return 0;
    }

    //most cases
    vector<char> tmp;

    while(n != 0){
        int x = n%16;
        //cout<< n%16 <<endl;

        if(x>=10){
            tmp.push_back(list[x]);
        }
        else{
            tmp.push_back(x + '0');
        }

        n = n/16;
    }

    reverse(tmp.begin(), tmp.end());

    for(char c: tmp){
        cout<< c;
    }
    cout<<endl;
    
    return 0;
}