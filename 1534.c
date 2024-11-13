//auther:       SwarupSikder
//judge:        beeCrowd
//problem:      1534
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void body(){
    //---------------//
    //     input     //
    //---------------//
    int n;
    while(scanf("%d\n", &n)!=EOF){
        //-----------------//
        //     process     //
        //-----------------//
        int a[n][n];
        for(int i=0; i<n ;i++){
            for(int j=0; j<n ;j++){
                if(i+j==n-1){
                    a[i][j]= 2;
                }
                else if(i==j){
                    a[i][j]= 1;
                }
                else{
                    a[i][j]= 3;
                }
            }
        }

        //----------------//
        //     output     //
        //----------------//
        for(int i=0; i<n ;i++){
            for(int j=0; j<n ;j++){
                printf("%d", a[i][j]);
            }
            printf("\n");
        }
    }
}


int main(){
    int t=1;
    //scanf("%d\n", &t);
    while(t--){
        body();
    }

    return 0;
}