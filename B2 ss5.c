#include <stdio.h>
int main() {
    float a;
    float b;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    float x=(-b)/a;
    printf("Phuong trinh co nghiem: x = %.2f\n", x);
    if(a==0 && b==0){
        printf("Phuong trinh vo so nghiem\n");
    }else if(a==0 && b!=0){
        printf("Phuong trinh vo nghiem\n");
    }else{
        if(a!=0){
            printf("Phuong trinh co nghiem: x = %.2f\n", x);
    }
    }
    return 0;
}