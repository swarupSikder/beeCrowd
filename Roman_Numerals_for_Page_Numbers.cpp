//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p100=0, p10=0, p1=0;
    cin>> n;

    if(n != 0){
        p1 = n%10;
        n /= 10;
    }

    if(n != 0){
        p10 = n%10;
        n /= 10;
    }

    if(n != 0){
        p100 = n%10;
        n /= 10;
    }

    //cout<< p100 <<" "<< p10 <<" "<< p1 <<endl;

    string result1, result2, result3;

    if(p1 != 0){
        for(int i=1; i<=p1 ;i++){
            result1.push_back('I');
            if(i==4){
                result1.clear();
                result1.push_back('I');
                result1.push_back('V');
            }

            if(i==5){
                result1.clear();
                result1.push_back('V');
            }

            if(i==9){
                result1.clear();
                result1.push_back('I');
                result1.push_back('X');
            }
        }
    }

    if(p10 != 0){
        for(int i=1; i<=p10 ;i++){
            result2.push_back('X');
            if(i==4){
                result2.clear();
                result2.push_back('X');
                result2.push_back('L');
            }

            if(i==5){
                result2.clear();
                result2.push_back('L');
            }

            if(i==9){
                result2.clear();
                result2.push_back('X');
                result2.push_back('C');
            }
        }
    }

    if(p100 != 0){
        for(int i=1; i<=p100 ;i++){
            result3.push_back('C');
            if(i==4){
                result3.clear();
                result3.push_back('C');
                result3.push_back('D');
            }

            if(i==5){
                result3.clear();
                result3.push_back('D');
            }

            if(i==9){
                result3.clear();
                result3.push_back('C');
                result3.push_back('M');
            }
        }
    }

    cout<< result3 + result2 + result1 <<endl;

    return 0;
}
