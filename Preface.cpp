//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,q,r;
    cin>> a >> b;

    //case 1: if divisor is 0
    if(b==0 || (a==0 && b!=0)){
        cout<<endl;
        return 0;
    }

    //find q,r
    q = abs(a) / abs(b);
    r = abs(a) % abs(b);

    //both a,b are positive
    if(a>0 && b>0){
        cout<< q <<" "<< r <<endl;
    }
    else{
        //[Negative, a]
        //[Negative, b]
        if(a<0 && b<0){
            q++;
            r -= abs(b);
            cout<< q <<" "<< abs(r) <<endl;
        }
        //[Positive, a]
        //[Negative, b]
        else if(a>0 && b<0){
            r += b+1;
            cout<< -q <<" "<< -r <<endl;
        }
        //[Negative, a]
        //[Positive, b]
        else if(a<0 && b>0){
            q++;
            r -= abs(b);
            cout<< -q <<" "<< -r <<endl;
        }
    }

    return 0;
}