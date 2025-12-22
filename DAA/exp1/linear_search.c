#include<stdio.h>
int main(){
    int A[]={8, 2, 1, 10, 5, 9};
    int i;
    for(i=0;i<6;i++){
        if (A[i] == 5) {
            printf("%d ", A[i]);
            break;
        }
    }

    return 0;
}
