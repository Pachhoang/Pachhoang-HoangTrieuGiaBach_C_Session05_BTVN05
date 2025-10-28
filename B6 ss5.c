#include <stdio.h>
int main(){
    int a;
    int b;
    char toan_tu;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap toan tu (+, -, *, /): ");
    scanf(" %c", &toan_tu);
    switch(toan_tu){
        case '+':
        printf("Ket qua: %d", a+b);
        break;
        case '-':
        printf("Ket qua:%d",a-b);
        break;
        case '*':
        printf("Ket qua:%d",a*b);
        break;
        case '/':
        if(b==0){
            printf("Loi:Khong the chia het cho 0");
        }else{
            printf("Ket qua:%.2f",(float)a/b);
        }
        break;
        default:
        printf("Toan tu khong hop le");;

    }
    return 0;
}