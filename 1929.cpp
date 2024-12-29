//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

bool check(int a, int b, int c) 
{
    return !(a+b <= c || a+c <= b || b+c <= a);
}

int main(){
    int a,b,c,d;
    cin>> a >> b >> c >> d;

    if(check(a,b,c) || check(a,b,d) ||check(b,c,d) ||check(c,d,a)){
        cout<< "S" <<endl;
    }
    else{
        cout<< "N" <<endl;
    }
    
    return 0;
}