//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int binaryToDec(int x, int y, int z){
    return (x*pow(2,2))+(y*pow(2,1))+(z*pow(2,0));
}

int main(){
    string str;
    int count=0;

    while(getline(cin, str)){
        if(str=="caw caw"){
            cout<< count <<endl;
            count = 0;
            continue;
        }

        int x,y,z;
        if(str[0]=='-') x = 0;
        else x = 1;

        if(str[1]=='-') y = 0;
        else y = 1;

        if(str[2]=='-') z = 0;
        else z = 1;



        //cout<< str <<endl;
        count += binaryToDec(x,y,z);
        
    }
    
    return 0;
}