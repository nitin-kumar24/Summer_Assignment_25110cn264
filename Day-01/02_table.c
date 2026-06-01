#include<stdio.h>

int main(){
    int n;
    printf("enter the number whose table has to be printed: ");
    scanf("%d",&n);

    for(int i =1 ; i <=10 ; i++){
        printf("%d ",n*i);
    }
    return 0;
}