#include<stdio.h>
int main(){
int i=0,j=0,a;
for(i=1;i<=4;i++){
    for(j=1;j<=4;j++){
        a=i*j;
        printf("%d\t",a);
    }
    printf("\n");
 }
return 0;
}