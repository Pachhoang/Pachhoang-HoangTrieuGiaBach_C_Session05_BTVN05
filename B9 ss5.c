 #include <stdio.h>
int main() {
 float he_so_luong, luong;
    int ngay_cong, chuc_vu;
    float phu_cap = 0, thuong = 0;
    printf("Nhap he so luong: ");
    scanf("%f", &he_so_luong);

    printf("Nhap so ngay cong trong thang: ");
    scanf("%d", &ngay_cong);

    printf("Nhap chuc vu (1: Nhan vien, 2: To truong, 3: Quan ly): ");
    scanf("%d", &chuc_vu);
    if(chuc_vu == 1) {
        phu_cap = 500000;
    } else if (chuc_vu == 2) {
        phu_cap = 1000000;
    } else if (chuc_vu == 3) {
        phu_cap = 2000000;
    } else {
        printf("Chuc vu khong hop le!\n");
    }
    if (ngay_cong > 26) {
        thuong = (ngay_cong - 26) * 200000;
    }

    luong = ngay_cong * 160000 * he_so_luong + phu_cap + thuong;

    printf("He so luong: %.2f\n", he_so_luong);
    printf("So ngay cong: %d\n", ngay_cong);
    printf("Phu cap: %.0f VND\n", phu_cap);
    printf("Thuong: %.0f VND\n", thuong);
    printf("Tong luong: %.0f VND\n", luong);

    return 0;
}