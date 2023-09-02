#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int n, i;
    double sum = 0.0, mean, std_dev = 0.0;

    printf("Enter the number of elements in the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    mean = sum / n;

    for (i = 0; i < n; i++)
    {
        std_dev += pow(arr[i] - mean, 2);
    }

    std_dev = sqrt(std_dev / n);

    printf("Mean: %lf\n", mean);
    printf("Standard deviation: %lf\n", std_dev);

return 0;
}
