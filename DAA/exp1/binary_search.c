#include <stdio.h>
int main(){
	int A[]={8, 2, 1, 10, 5, 9};
    int i;
    int n = 6;
	int key = 5;
    int low =0;
    int high = n-1;
	int mid =(low+high)/2;
	printf("Enter the key value: ");
	scanf("%d", &key);
	while(low<=high){
		if(A[mid]==key){
			printf("Element index %d", mid);
			return 0;
		}
		else if(A[mid]<key){
			low = mid + 1;
			mid = (low + high) / 2;
		}
		else{
			high = mid - 1;
			mid = (low + high) / 2;
		}
	}
	return 0;
	
}
