//auther:   swarupSikder
//mode:     practice
//beeCrowd: 1189

#include <stdio.h>
#define row 6
#define col 6
int main()
{
    //Asking the user whether he wants sum or average
    char O;
    scanf("%c", &O);

    //Declaring the primary array
    double a[row][col];




    //--------------------------//
    //                          //
    //       (Main Input)       //
    //                          //
    //--------------------------//
    //Taking Input (element after element)
    //element by element
    //line by line
    //input can be taken in the form of matrix also
    for(int i=0; i<row ; i++){
        for(int j=0; j<col ; j++){
            scanf("%lf", &a[i][j]);
        }
    }




    //--------------------------//
    //                          //
    //       (Processing)       //
    //                          //
    //--------------------------//
    //Adding the elements of same Line(L)
    double sum=0;
    for(int i=0; i<row ; i++){
        for(int j=0; j<col ; j++){
            if(i==j || (i+j)==col-1){
                break;
            }

            //sum= sum+a[i][j];
            a[i][j] = 0;
        }


        // for(int j=col-1 ; j>=0 ; j--){
        //     if((i+j)==col-1){
        //         a[i][j] = 0;
        //     }

        //     //sum= sum+a[i][j];
            
        // }
    }

    double avg=sum/row;




    //--------------------------//
    //                          //
    //         (Output)         //
    //                          //
    //--------------------------//
    for(int i=0; i<row ; i++){
        for(int j=0; j<col ; j++){
            printf("%0.0lf ", a[i][j]);
        }
        printf("\n");
    }

    printf("%0.0lf\n", sum);

    
    return 0;
}
 