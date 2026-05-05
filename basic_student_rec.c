#include <stdio.h>
int main(){
    char name,father_name,mother_name;
    int a,roll_no,n;
    float p,c,m,total,per;
    printf(" << WELCOME TO MY STUDENT MENU DRIVEN PROGRAM >> ");
    printf("ENTER NUMBER OF STUDENT : ");
    scanf("%d",&n);
    for(a=1;a<=n;a++){
    printf(" <<  STUDENT DATA  >> ");
    printf("ENTER STUDENT NAME : ");
    scanf("%s",&name);
    printf("ENTER ROLL NUMBER OF STUDENT : ");
    scanf("%d",&roll_no);
    printf("ENTER STUDENTS'S FATHER NAME : ");
    scanf("%s",&father_name);
    printf("ENTER STUDENT'S MOTHER NAME : ");
    scanf("%s",&mother_name);
    printf("ENTER STUDENT'S MARKS IN PHYSICS : ");
    scanf("%f",&p);
    if(p<33){
        printf(" STUDENT FAILED IN PHYSICS EXAMINAMTION ");
    }
    printf("ENTER STUDENT'S MARKS IN CHEMISTRY : ");
    scanf("%f",&c);
    if(c<33){
        printf(" STUDENT FAILED IN CHEMISTRY ");
    }    
    printf("\nENTER STUDENT'S MARKS IN MATHEMATICS : ");
    scanf("%f",&m);
    if(m<33){
        printf("STUDENT FAILED IN MATHEMATICS");
    }
    
    total=(p+c+m);
    printf("\nTOTAL MARKS OF STUDENT OUT OF 300 : %f", total);
    per=((p+c+m)/300)*100;
    printf("\nPERCENTAGE OF STUDENT : %f",per);

    if(per>90){
        printf(" GRADE ->> A");
    }
    else if(per>75){
        printf(" GRADE ->> B");
    }
    else if(per>60){
        printf(" GRADE ->> C");
    }
    else if(per>33){
        printf(" GRADE ->> D");
    }
    else{
        printf(" FAIL ");
    }}
    return 0;

    }
