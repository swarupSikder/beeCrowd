//auther:       SwarupSikder
//judge:        beeCrowd
//problem:      1024
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void body(){
    //---------------//
    //     input     //
    //---------------//
    char a[1001];
    scanf("%[^\n]%*c", a);
    int len= strlen(a);
    a[len]='\0';


    //-----------------//
    //     process     //
    //-----------------//
    
    for(int i=0; i<len ;i++){
        if(('a'<=a[i] && a[i]<='z') || ('A'<=a[i] && a[i]<='Z')){
            a[i] += 3; 
        }
    }

    //reverse the string
    for(int i=0, j=len-1; i<j ;i++,j--) {
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }


    //move position 1 left from half to last
    for(int i=len/2; i<len ;i++){
        a[i] -= 1;
    }



    
    //--------------- //
    //     output     //
    //----------------//
    printf("%s", a);
    //printf("\n%d\n", len);
    
}


int main(){
    //---------------//
    //     input     //
    //---------------//
    int t;
    scanf("%d\n", &t);
    while(t--){
        body();
        printf("\n");
    }

    return 0;
}