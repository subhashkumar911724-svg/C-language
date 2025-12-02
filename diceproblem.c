#include <stdio.h>
int main(){
    int a;
    printf("enter a no.");
    scanf("%d",&a);
    if (a==1){
        printf("dice facing opposite side of %d is 6 ",a);
    }
    else if (a==2){
        printf("dice facing opposite side of %dis 5",a);
    }
    else if (a==3){
        printf("dice facing opposite side of %d is 4",a);
    }
    else if (a==4){
        printf("dice facing opposite side of %d is 3",a);
    }
    else if(a==5){
        printf("dice facing opposite side is %d is 2",a);
    }
    else if (a==6){
        printf("dice facing opposite side is %d is 1",a);
    }
    else {
        printf("invalid data");
    }

    return 0;
}