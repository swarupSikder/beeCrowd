//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    int z=1;
    while(z<=t){
        cin.ignore();
        //char list[10][10] = {"scissors", "paper", "rock", "lizard", "Spock"};
        char list[10][10] = {"tesoura", "papel", "pedra", "lagarto", "Spock"};

        char sheldon[10], raj[10];
        cin>> sheldon >> raj;
        
        int sheldon_idx=0;
        int raj_idx=0;
        for(int i=0; i<5 ;i++){
            if(strcmp(list[i], sheldon)==0){
                sheldon_idx= i;
            }

            if(strcmp(list[i], raj)==0){
                raj_idx= i;
            }
        }
        //cout<< sheldon_idx <<" "<< raj_idx <<endl;



        //index analysis
        if(sheldon_idx==raj_idx){
            cout<< "Caso #" << z <<": "<< "De novo!" <<endl;
            break;
        }
        //check with the next element of the list (before the last element)
        else if(sheldon_idx<4 && sheldon_idx==raj_idx-1){
            cout<< "Caso #" << z <<": "<< "Bazinga!" <<endl;
        }
        //check the last element now
        else if(sheldon_idx==4 && sheldon_idx-4==raj_idx){
            cout<< "Caso #" << z <<": "<< "Bazinga!" <<endl;
        }
        //check 1st, 2nd element of the list
        else if(sheldon_idx<2 && sheldon_idx==raj_idx-3){
            cout<< "Caso #" << z <<": "<< "Bazinga!" <<endl;
        }
        //check 3rd, 4th, 5th element of the list
        else if(sheldon_idx>=2 && sheldon_idx-2==raj_idx){
            cout<< "Caso #" << z <<": "<< "Bazinga!" <<endl;
        }
        //raj cheating
        else{
            cout<< "Caso #" << z <<": "<< "Raj trapaceou!" <<endl;
        }

        z++;
    }
    
    return 0;
}