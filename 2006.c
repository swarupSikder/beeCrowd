//auther:   swarupSikder
//mode:     practice
//beeCrowd: 2006

#include <stdio.h>
int main()
{
    //--------------------------//
    //                          //
    //       (Main Input)       //
    //                          //
    //--------------------------//
    //t -given tea type
    int t;
    scanf("%d", &t);

    //a,b,c,d,e -guessed tea type by 5 person
    int a,b,c,d,e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);




    //--------------------------//
    //                          //
    //       (Processing)       //
    //                          //
    //--------------------------//
    int countCorrect= 0;
    if(a==t){
        countCorrect++;
    }
    if(b==t){
        countCorrect++;
    }
    if(c==t){
        countCorrect++;
    }
    if(d==t){
        countCorrect++;
    }
    if(e==t){
        countCorrect++;
    }




    //--------------------------//
    //                          //
    //         (Output)         //
    //                          //
    //--------------------------//
    printf("%d\n", countCorrect);
    
    return 0;
}
 