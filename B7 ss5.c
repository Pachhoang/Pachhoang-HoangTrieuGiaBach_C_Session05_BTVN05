#include <stdio.h>
int main() {
    char chu_cai;
    printf("Nhap mot chu cai: ");
    scanf("%c", &chu_cai);
    if (chu_cai >= 'a' && chu_cai <= 'z') {
        chu_cai = chu_cai - 32;
        printf("Ky tu chu hoa tuong ung: %c\n", chu_cai);
    } 
    else if (chu_cai >= 'A' && chu_cai <= 'Z') {
        chu_cai = chu_cai + 32;
        printf("Ky tu chu thuong tuong ung: %c\n", chu_cai);
    } 
    else {
        printf("Khong phai chu cai.\n");
    }
    return 0;
}