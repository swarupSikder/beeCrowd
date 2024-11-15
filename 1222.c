//auther:       SwarupSikder
//judge:        beeCrowd
//problem:      1222
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
void body(){
    //-------------//
    //    input    //
    //-------------//
    char a[10000];
    scanf("%s\n", a);

    //---------------//
    //    process    //
    //---------------//
    // Array to store the number of LEDs for each digit 
    int ledCount[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int count=0;

    for(int i=0; i<strlen(a) ;i++){
        count += ledCount[a[i]-'0'];
    }


    //--------------//
    //    output    //
    //--------------//
    printf("%d leds\n", count);
}

int main(){
    int t;
    scanf("%d\n", &t);
    
    while(t--){
        body();
    }

    return 0;
}