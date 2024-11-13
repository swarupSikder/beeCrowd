//auther:       SwarupSikder
//judge:        beeCrowd
//problem:      1557
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    
    while(1){
        //---------------//
        //     input     //
        //---------------//
        int n;
        scanf("%d\n", &n);

        if(n==0){
            break;
        }


        //-----------------//
        //     process     //
        //-----------------//
        int a[n][n];
        int row=1, col=1;

        for(int i=0; i<n ;i++){
            for(int j=0; j<n ;j++){
                a[i][j]=row;
                row=row*2;
            }
            row= a[i][col];
        }

        //T-size right justified
        int max = a[n-1][n-1];
        int t=0;
        while(max!=0){
            max = max/10;
            t++;
        }

        //----------------//
        //     output     //
        //----------------//
        for(int i=0; i<n ;i++){
            for(int j=0; j<n ;j++){
                if(j==0){
                    printf("%*d", t, a[i][j]);
                }
                else{
                    printf(" %*d", t, a[i][j]);
                }
                
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

