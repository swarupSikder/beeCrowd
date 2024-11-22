//auther:       SwarupSikder
//judge:        beeCrowd
//problem:      1222
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, l, c;
    
    while(cin>> n >> l >> c){
        //Input individual words of the full story
        vector <string> words(n);
        for(int i=0; i<n ;i++){
            cin>> words[i];
        }

        //Initialize
        int current_line_len  = 0;
        int line_count     = 1;
        int page_count     = 1;

        //main process
        for(const string &word : words){
            int word_len = word.length();

            //Check the word fits on the current line
            if(current_line_len+word_len<=c){
                current_line_len += word_len +1; //add 1 for space
            }
            else{
                //Go to next line
                line_count++;
                current_line_len = word_len +1;
            }

            //Check if there needs a new line or not
            if(line_count>l){
                page_count++;
                line_count = 1;
            }
        }

        //number of pages
        cout<< page_count << endl;
    }

    return 0;
}