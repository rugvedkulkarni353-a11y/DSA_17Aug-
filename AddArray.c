#include<stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int a[6];

   for(int i = 0; i < 5; i++){
    a[i] = arr[i];
    }

    a[5] = 6;
    for(int i = 0; i < 6; i++){
        printf("%d  ", a[i]);
    }
    return 0;
}