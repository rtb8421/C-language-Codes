#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    double arr[n];
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }
    
    double max = arr[0];
    double nextMax = arr[1];
    
    if (nextMax > max) {
        double temp = max;
        max = nextMax;
        nextMax = temp;
    }
    
    for (int i = 2; i < n; i++) {
        if (arr[i] > max) {
            nextMax = max;
            max = arr[i];
        } else if (arr[i] > nextMax) {
            nextMax = arr[i];
        }
    }
    
    printf("The maximum element in the array is %lf\n", max);
    printf("The next maximum element in the array is %lf\n", nextMax);
    
return 0;
}