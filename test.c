#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char strings[1000][1001];
    
    while (scanf("%d", &n) && n != 0) {
        for (int i = 0; i < n; i++) {
            scanf("%s", strings[i]);
        }
        
        int max_sequence = 1;
        
        for (int i = 0; i < n; i++) {
            int current_sequence = 1;
            for (int j = 0; j < n; j++) {
                if (i != j && strstr(strings[j], strings[i]) != NULL) {
                    current_sequence++;
                }
            }
            if (current_sequence > max_sequence) {
                max_sequence = current_sequence;
            }
        }
        
        printf("%d\n", max_sequence);
    }
    
    return 0;
}
