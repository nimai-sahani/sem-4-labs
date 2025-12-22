#include<stdio.h>
int main(){
    
int a[4][4]={(120),(150),(46),(15),
    (111),(105),(146),(10),
    (200),(46),(57),(17),
    (210),(10),(5),(121)};

for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
        printf("%d\t", a[j][i]);
    }
    printf("\n");
}
return 0;
}