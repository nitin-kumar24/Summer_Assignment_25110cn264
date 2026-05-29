#include <stdio.h>

int main(){
    int n,sum=0;
    printf("enter the number up to which the sum has to be calculated: ");
    scanf("%d",&n);

    for(int i = 1; i <=n ; i++){
        sum=sum+i;
    }
    printf("the sum is %d",sum);
    return 0;
}