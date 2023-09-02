#include<stdio.h>
int main(){
    int arr[]={25,28,72,51,5,1};
    int n=6;
    printf("brfore sorted\n");
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("after sorted\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);

    return 0;
}