//auther:       SwarupSikder
//judge:        beeCrowd
//problem:      1827
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void body(int n){
    //-----------------//
    //     process     //
    //-----------------//
    int a[n][n];
    int inner_height= n/3;

    for(int i=0; i<n ;i++){
        for(int j=0; j<n ;j++){
            if(i==n/2 && j==n/2){
                a[i][j]=4;
            }
            else if((inner_height)<=i && i<=(n-1-inner_height) 
                && inner_height<=j && j<(n-inner_height)){
                a[i][j]=1;
            }
            else if(i==j){
                a[i][j]=2;
            }
            else if(i+j==n-1){
                a[i][j]=3;
            }
            else{
                a[i][j]=0;
            }
        
        }
    }

    
    //--------------- //
    //     output     //
    //----------------//
    for(int i=0; i<n ;i++){
        for(int j=0; j<n ;j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}


int main(){
    //---------------//
    //     input     //
    //---------------//
    int t;
    while(scanf("%d", &t)!=EOF){
        body(t);
        printf("\n");
    }

    return 0;
}