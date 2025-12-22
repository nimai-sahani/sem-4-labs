//if the value is > 120 replace it with 255 if it is < 120 replace it with 0
#include<stdio.h>
int main(){
int i, j;
int a[4][4]={(120),(150),(46),(15),
    (111),(105),(146),(10),
    (200),(46),(57),(17),
    (210),(10),(5),(121)};
    
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        if(a[i][j]>120){
        a[i][j]=255;
    }
    else{
        a[i][j]=0;
    }
    printf("%d\t",a[i][j]);
    }
    printf("\n");
}
return 0;
}