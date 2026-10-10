#include <stdio.h>

void min_max(int arr[], int n, int *min, int *max) {
    *min = arr[n-1];
    *max = arr[n-1];
    for (int i = 0;i<n;i++){
        if (arr[i] < *min){
            *min = arr[i];
        }
        else if (arr[i] > *max){
            *max = arr[i];
        }
    }
}

int main() {
    int sayilar[] = {4, 9, 2, 7, 5};
    int kucuk, buyuk;
    min_max(sayilar, 5, &kucuk, &buyuk);
    printf("min = %d, max = %d\n", kucuk, buyuk);   // min = 2, max = 9
    return 0;
}