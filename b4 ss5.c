#include <stdio.h>
int main() {
    int thu_nhap;
    printf("Nhap thu nhap cua ban: ");
    scanf("%d", &thu_nhap);
    float thue;
    if(thu_nhap<5){
        thue=thu_nhap*0.05;
        printf("Thue thu nhap phai dong: %.2f", thue);
    }else if(thu_nhap>5 && thu_nhap<=10){
        thue=thu_nhap*0.1;
        printf("Thue thu nhap phai dong: %.2f", thue);
    }else if(thu_nhap>10){
        thue=thu_nhap*0.15;
        printf("Thue thu nhap phai dong: %.2f", thue);
    }
    return 0;
}