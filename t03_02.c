#include <stdio.h>

#define MAX_N 1000 

int main() {
    int n, i;
    int scores[MAX_N]; 
    int sum = 0;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];
    }
    
    double average = (double)sum / n;
    
    int count_above_average = 0;
    for (i = 0; i < n; i++) {
        if (scores[i] >= average) {
            count_above_average++;
        }
    }
    
    printf("%d\n", sum);
    printf("%.2f\n", average);
    printf("%d\n", count_above_average);
    
    return 0;
}
