//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void body(int caseNo){
    string sheldonOption, rajOption;
    cin>> sheldonOption >> rajOption;

    //edge case: two options are equal
    if(sheldonOption == rajOption){
        cout<< "Caso #" << caseNo <<": " << "De novo!" <<endl;
        return;
    }
    //vector<string> options = {"scissors", "paper", "rock", "lizards", "Spock", "scissors", "lizard", "paper", "Spock", "rock", "scissors"};
    vector<string> options = {"tesoura", "papel", "pedra", "lagarto", "Spock", "tesoura", "lagarto", "papel", "Spock", "pedra", "tesoura"};

    cout<< "Caso #" << caseNo <<": ";
    for(int i=0; i<options.size()-1 ;){
        //cout<< options[i] <<" "<< options[i+1]<<endl;

        if(sheldonOption==options[i] && rajOption==options[i+1]){
            cout<< "Bazinga!" <<endl;
            break;
        }
        
        i++;
        if(i==options.size()-1){
            cout<< "Raj trapaceou!" <<endl;
            break;
        }
    }
}

int main(){
    int t;
    cin>> t;

    int i=1;
    while(1){
        if(i>t){
            break;
        }
        body(i);
        i++;
    }
    
    return 0;
}