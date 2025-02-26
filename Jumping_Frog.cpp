//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, n;
    cin>> p >> n;

    vector<int> pipeList;
    int val;
    for(int i=0; i<n ;i++){
        cin>> val;
        pipeList.push_back(val);
    }

    int current, next;
    bool isWon = true;

    for(int i=0; i<n-1 ;i++){
        current = pipeList[i];
        next = pipeList[i+1];

        if(p < abs(current - next)){
            isWon = false;
            break;
        }
    }

    (isWon)? std::cout<< "YOU WIN" <<endl : std::cout<< "GAME OVER" <<endl;
    
    return 0;
}