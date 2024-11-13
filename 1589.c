//auther:       SwarupSikder
//judge:        beeCrowd
//problem:      1589
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void body(){
    //---------------//
    //     input     //
    //---------------//
    int r1, r2;
    scanf("%d %d", &r1, &r2);
    
    printf("%d\n", r1+r2);
}


int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        body();
    }

    return 0;
}