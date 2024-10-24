//auther:   swarupSikder
//mode:     practice
//beeCrowd: 1541

#include <stdio.h>
#include <math.h>

int calc(int A, int B, int C){

    //--------------------------//
    //                          //
    //       (Processing)       //
    //                          //
    //--------------------------//
    //Getting Total Land
    //Then getting total land's one side
    int allowed_area = (A*B);
    int total_area= (allowed_area*100)/C;
    int total_area_side = sqrt(total_area);

    return total_area_side;
}

int main(){
    //--------------------------//
    //                          //
    //       (Main Input)       //
    //                          //
    //--------------------------//
    //A=length
    //B=Width
    //Then we need to find the area (A*B)
    //this is the allowed area
    //that's why we need to find the total area
    //Then, (allowed_area/total_area)*100
    //We can get the desired side of the land
    int A, B, C;
    while(scanf("%d %d %d", &A, &B, &C) && A != 0){
        printf("%d\n", calc(A, B, C));
    }

    return 0;
}
 