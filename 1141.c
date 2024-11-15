//auther:       SwarupSikder
//judge:        beeCrowd
//problem:      1141
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
bool isSubstring(char s1[], int len_s1, char s2[], int len_s2) {
    int maxLen, minLen;
    char maxStr[1001], minStr[1001];
    if (len_s1 > len_s2) {
        maxLen = len_s1;
        strcpy(maxStr, s1);
        minLen = len_s2;
        strcpy(minStr, s2);
    } else {
        maxLen = len_s2;
        strcpy(maxStr, s2);
        minLen = len_s1;
        strcpy(minStr, s1);
    }

    int i = 0, j = 0, countMatch = 0;
    while (j < maxLen && countMatch < minLen) {
        if (minStr[i] == maxStr[j]) {
            int z = j;
            while (i < minLen && z < maxLen && minStr[i] == maxStr[z]) {
                countMatch++;
                i++;
                z++;
            }
            if (countMatch == minLen) {
                return true;
            } else {
                i = 0;
                countMatch = 0;
            }
        }
        j++;
    }
    
    return false;
}

int main(){
    int n;
    while(1){
        scanf("%d\n", &n);
        if(n==0){
            break;
        }

        char s[1000][1001];
        for(int i=0; i<n ;i++){
            scanf("%s\n", s[i]);
        }

        int max=0, temp;

        for(int i=0; i<n ;i++){
            temp=0;
            for(int j=i; j<n ;j++){
                if(isSubstring(s[i], strlen(s[i]), s[j], strlen(s[j]))){
                    temp++;
                }
            }

            if(temp>=max){
                max=temp;
            }
        }

        printf("%d\n", max);
        
    }

    return 0;
}