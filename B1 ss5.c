#include <stdio.h>
int main(){
    int a;
    int b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    if(a>b){
        printf("So lon la a \n");
    }else if(a<b){
        printf("So lon la b \n");
    }else{
        printf("Hai so bang nhau \n");
    }
    return 0;
}