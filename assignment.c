#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 6, k = 0;
    float val, a[n];
    for (int i = 1; i <= n; i++) {
        scanf("%f",&val);
        a[k++] = val;
    }
    for (int i = 0; i < k; i++) {
        for (int j = i+1; j < k; j++) {
            if (a[i] > a[j]) 
            {
                float t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }for (int i = 0; i < k; i++){
        printf("%.2f ",a[i]);
    }
}