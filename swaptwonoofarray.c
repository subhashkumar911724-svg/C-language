#include<stdio.h>
int main(){
    int n; //4
    printf("enter no");
    scanf("%d",&n);
    int arr[n]; // 0123
    printf("enter array\n");
    for( int i=0;i<n;i++){
        scanf("%d",&arr[i]); //1 2 3 4
    }
    int i=0,j=n-1;
    while (i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for (int i=0;i<n;i++){
        printf("%d\n ",arr[i]);

    }
    //printf("%d %d",arr[i], arr[j]);
    return 0;
}