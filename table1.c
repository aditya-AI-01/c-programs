#include <stdio.h>
int main(){
    int a,n;
    printf("ENTER NUM WHOSE U WANT TABLE: ");
    scanf("%d",&n);
    a = 1;
    while(a<=10){
        printf("%d * %d = %d\n",n,a,n*a);
        a++;
    }
    
}