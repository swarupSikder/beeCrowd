//auther:       SwarupSikder
//judge:        beeCrowd
//problem:      1789
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void body(int n){
    //---------------//
    //     input     //
    //---------------//
    int a[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &a[i]);
    }


    //-----------------//
    //     process     //
    //-----------------//
    //find max
    int max = a[0];
    for(int i=1; i<n ;i++){
        if(a[i]>max){
            max= a[i];
        }
    }

    
    //--------------- //
    //     output     //
    //----------------//
    if(max<10){
        printf("1\n");
    }
    else if(10<=max && max<20){
        printf("2\n");
    }
    else{
        printf("3\n");
    }
}


int main(){
    int t;
    while(scanf("%d", &t)!=EOF){
        body(t);
    }

    return 0;
}