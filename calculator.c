#include <stdio.h>
int main(){
    int ch;
    float a,b;
    printf("enter number 1:");
    scanf("%f",&a);
    printf("enter number 2:");
    scanf("%f",&b);
    printf("1. addition");
    printf("\n2. subtraction");
    printf("\n3. multiplication");
    printf("\n4. division");
    printf("\n5. square ");

    printf("enter choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("%f", (a+b));
        break;
        case 2:
        printf("%f", (a-b));
        break;
        case 3:
        printf("%f", (a*b));
        break;
        case 4:
        printf("%f", (a/b));
        break;
       case 5:
        printf("%f ", (a*a));
        break;
        default:
        printf("invalid choice");
    }
    return 0;

    
}