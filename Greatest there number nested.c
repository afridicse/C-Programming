#include<stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    if (a>b){
       if (a>c){
        printf("is greatest %d", a);
       }
       else {
        printf("is greatest %d",c);
       }
    }
    else {
        if (b>c)
    {
       printf("is greatest %d",b); 
    }
    else {
        printf("is greatest %d",c);
    }
    }
    return 0;
}
