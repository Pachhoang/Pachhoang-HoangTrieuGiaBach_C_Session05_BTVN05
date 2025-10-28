#include <stdio.h>
int main() {
    int tuoi;
    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);
    int gia_ve=20000;
    if(tuoi<6){
        printf("Gia ve: Mien phi");
    }else if(tuoi>6 && tuoi<=18){
        gia_ve=20000*0.5;
        printf("Gia ve: %d VND", gia_ve);
    }else if(tuoi>18 && tuoi<=60){
        printf("Gia ve: %d VND", gia_ve);
    }else if(tuoi>60){
        gia_ve=20000*0.7;
        printf("Gia ve: %d VND", gia_ve);
    }else{
        printf("Tuoi khong hop le");
    }
    return 0;
}