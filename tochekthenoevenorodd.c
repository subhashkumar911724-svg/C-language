#include <stdio.h>
int main(){
    int a;
    printf("enter a no.");
    scanf("%d",&a);
    if (a%2==0){
        printf("true for even");
    }
    else{
        printf("false for odd");
    }
    return 0;
}