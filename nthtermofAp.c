#include<stdio.h>
int main(){
    int n,a1,a2;
    printf("enter fist no.is a\n enter second number is d\n enter nth term to obtain \n");
    scanf("%d %d %d",&a1,&a2,&n);
    int nthTerm=(a1+(n-1)*(a2-a1));
    printf("%d",nthTerm);
    return 0;
}