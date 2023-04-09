#include <stdio.h>

void main(){
int n = 10;
int arr[n];
for (int i=0;i<n;i++){
    scanf("%d\n",&arr[i]);
}

printf("===========================\n");
printf("the new array\n");
for (int i=n;i>=0;i--){
    printf("%d\n",arr[i]);
}


}
