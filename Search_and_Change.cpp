//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    while(cin>> n >> q){
        vector<int> num(n);
        for(int i=0; i<n ;i++){
            cin>> num[i];
        }

        while(q--){
            int option;
            cin>> option;

            int a,b,v;
            cin>> a >> b;

            a--;    //convert to 0-based-index
            b--;    //convert to 0-based-index

            //case 1: add V across the [a,b]
            if(option==1){
                int v;
                cin>> v;

                for(int i=a; i<=b ;i++){
                    num[i] += v;
                }

                // for(int i=0; i<n ;i++){
                //     cout<< num[i] <<" ";
                // }
                // cout<<endl;
            }
            //case 2: gcd between [a,b]
            else if(option==2){
                vector<int> copy_num;
                for(int i=a; i<=b ;i++){
                    copy_num.push_back(num[i]);
                }

                sort(copy_num.begin(), copy_num.end());

                // for(int i=0; i<copy_num.size() ;i++){
                //     cout<< copy_num[i] <<" ";
                // }
                // cout<<endl;

                int gcd=1;
                bool flag = false;

                for(int i=1; i<=copy_num.front() ;i++){

                    int countOK = 0; 
                    for(int j=0; j<copy_num.size() ;j++){
                        if(copy_num[j]%i == 0){
                            countOK++;
                        }
                    }

                    if(countOK==copy_num.size()){
                        gcd = i;
                    }

                    if(flag) break;
                }

                cout<< gcd <<endl;
            }
        }
    }
    
    return 0;
}