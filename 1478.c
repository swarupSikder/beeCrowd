#include <stdio.h>
int main()
{
    for(;;){
        int n;
        scanf("%d", &n);

        if(n==0)break;

        //Initializing The Array
        int a[n][n], x=1;

        for(int i=0; i<n ;i++){
            for(int j=0; j<n ;j++){
                if(i==j){
                    x=1;
                    a[i][j]=x;
                    x++;
                }
                else if(j==0 && i!=j){
                    x=i+1;
                    a[i][j]=x;
                }
                else if(0<j && j<i){
                    x--;
                    a[i][j]=x;
                }
                else{
                    a[i][j]=x;
                    x++;
                }
            }
        }



        //Displaying Array
        for(int i=0; i<n ;i++){
            for(int j=0; j<n ;j++){
                if(j==0){
                    printf("%3d", a[i][j]);
                }
                else{
                    printf(" %3d", a[i][j]);
                }

            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}