//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>> a >> b >> c;

    bool isHappy = false;
    int line1 = b-a;    //increase = '+' , decrease = '-'
    int line2 = c-b;

    //case 1
    if(line1<0 && line2>=0){
        isHappy = true;
    }
    //case 2
    if(line1>0 && line2<=0){
        isHappy = false;
    }
    //case 3
    if(line1>0 && line2>0 && abs(line2) < abs(line1)){
        isHappy = false;
    }
    //case 4
    if(line1>0 && line2>0 && abs(line2) >= abs(line1)){
        isHappy = true;
    }
    //case 5
    if(line1<0 && line2<0 && abs(line2) < abs(line1)){
        isHappy = true;
    }
    //case 6
    if(line1<0 && line2<0 && abs(line2) >= abs(line1)){
        isHappy = false;
    }
    //case 7
    if(line1==0 && line2>0){
        isHappy = true;
    }
    //case 8
    if(line1==0 && line2<0){
        isHappy = false;
    }

    (isHappy)? std::cout<< ":)" <<endl : std::cout<< ":(" <<endl;
    
    return 0;
}