#include <stdio.h>
int main(){
    int n,a,b;
    printf("enter number whose u want table:");
scanf("%d", &n);
for(a=1;a<=10;a++){
    b=a*n;
    printf("%d * %d = %d\n", n, a, b);
}
return 0;
}