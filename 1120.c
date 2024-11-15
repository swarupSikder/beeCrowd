//auther:       SwarupSikder
//judge:        beeCrowd
//problem:      1120
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    while(1){
        //---------------//
        //     input     //
        //---------------//
        char d;
        char a[1001];
        scanf("%c %s\n", &d, a);
        int len= strlen(a);

        if(d=='0' && len==1 && a[0]=='0'){
            break;
        }


        //-----------------//
        //     process     //
        //-----------------//
        //pop()
        int i=0;
        while(i!=len){
            if(a[i]==d){
                for(int j=i; j<len-1 ;j++){
                    a[j]= a[j+1];
                }

                len--;
                a[len]= '\0';
            }
            else{
                i++;
            }
        }

        //remove extra 0
        i=0;
        while(1){
            if(a[i]!='0'){
                break;
            }

            if(a[i]=='0'){
                for(int j=i; j<len-1 ;j++){
                    a[j]= a[j+1];
                }
                len--;
                a[len]= '\0';
            }
            else{
                i++;
            }
        }

        //insert a single zero for null string
        if(len==0){
            a[0]='0';
            a[1]='\0';
        }



        //--------------- //
        //     output     //
        //----------------//
        printf("%s\n", a);
    }

    return 0;
}