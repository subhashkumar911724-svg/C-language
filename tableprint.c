#include<stdio.h>
int main(){
    int a;
    printf("enter a no.");
    scanf("%d",&a);
    for( int i=1;i<=a;i++){
        //  int b=5*i;
        printf("%d\n",5*i);
    }
    return 0;
}