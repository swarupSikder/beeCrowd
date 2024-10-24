//auther:   swarupSikder
//mode:     practice
//beeCrowd: 1189

#include <stdio.h>
#define row 12
#define col 12
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
    //Adding the elements
    double sum=0;
    int count=0;
    for(int i=0; i<row ; i++){
        for(int j=0; j<col ; j++){
            if(i==j || (i+j)==col-1){
                break;
            }

            sum= sum+a[i][j];
            count++;
            //By making zero I can understand which cells should
            //be taken for sum
            // a[i][j] = 0;               
        }
    }

    double avg=sum/row;




    //--------------------------//
    //                          //
    //         (Output)         //
    //                          //
    //--------------------------//
    //Printing the whole matrix
    // for(int i=0; i<row ; i++){
    //     for(int j=0; j<col ; j++){
    //         printf("%0.0lf ", a[i][j]);
    //     }
    //     printf("\n");
    // }

    //printf("%d\n", count);


    printf("%0.1lf\n", sum);

    
    return 0;
}
 