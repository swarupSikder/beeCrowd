//auther:   swarupSikder
//mode:     practice
//beeCrowd: 1182

#include <stdio.h>
#define row 12
#define col 12
int main()
{
    //Defining the dimension of the matrix
    int C;
    scanf("%d", &C);

    //Asking the user whether he wants sum or average
    char T;
    scanf("\n%c", &T);           // "\n" is required before %c otherwise T will take "enter" as its input and whole program will crash... 


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
        for(int j=C; j<col ; j++){
            sum= sum+a[i][j];
            break;
        }
    }

    double avg=sum/row;




    //--------------------------//
    //                          //
    //         (Output)         //
    //                          //
    //--------------------------//
    if(T=='S'){
        printf("%.1lf\n", sum);
    }
    else if(T=='M'){
        printf("%.1lf\n", avg);
    }

    return 0;
}
 