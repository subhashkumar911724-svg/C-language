#include<stdio.h>
int main(){
    int a,sum=0;
    printf("enter a no.");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        sum=sum+i*i;
    }
    printf("%d",sum);
}