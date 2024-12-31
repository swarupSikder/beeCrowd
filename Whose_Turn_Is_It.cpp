//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void body(){
    string player1, player1_Op, player2, player2_Op;
    cin>> player1 >> player1_Op >> player2 >> player2_Op;

    int player1_choice, player2_choice;
    cin>> player1_choice >> player2_choice;

    // cout<< player1 <<" "<< player1_Op <<" "<< player2 <<" "<< player2_Op <<endl;
    // cout<< player1_choice <<" "<< player2_choice <<endl;

    if((player1_choice+player2_choice)%2 == 0){
        if(player1_Op == "PAR"){
            cout<< player1 <<endl;
        }
        else{
            cout<< player2 <<endl;
        }
    }
    else{
        if(player1_Op == "IMPAR"){
            cout<< player1 <<endl;
        }
        else{
            cout<< player2 <<endl;
        }
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