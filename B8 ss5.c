#include <stdio.h>
int main() {
    int nuoc;
    printf("Nhap so nuoc tieu thu (m3): ");
    scanf("%d", &nuoc);
    if(nuoc>0 && nuoc<=10){
        printf("Tong tien: %d VND", (nuoc*6000));
    }else if(nuoc>10 && nuoc<=20){
        printf("Tong tien: %d VND", 10*6000+(nuoc-10)*7000);
    }else if(nuoc>20 && nuoc<=30){
        printf("Tong tien: %d VND", 10*6000+10*7000+(nuoc-20)*8500);
    }else if(nuoc>30){
        printf("Tong tien: %d VND", 10*6000+10*7000+10*8500+(nuoc-30)*10000);
    }
    return 0;
}