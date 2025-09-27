#include <stdio.h>
int main() {
    char tenkhachhang[30];
    int chisodiencu;
    int chisodienmoi;
    float gia;
    printf("Ten khach hang: "); scanf("%s",&tenkhachhang);
    printf("Chi so dien cu: "); scanf("%d",&chisodiencu);
    printf("Chi so dien moi: "); scanf("%d",&chisodienmoi);
    int soluong = chisodienmoi - chisodiencu;
    int tiendien=0;
    if (soluong <= 100) {
        tiendien = soluong * 1418;
    }else if (soluong <= 150){
        tiendien = 100 * 1418 + (soluong - 100) * 1622;
    }else if (soluong <= 200){
        tiendien = 100 * 1418 + 50 * 1622 + (soluong - 150) * 2044;
    }else if (soluong <= 300){
        tiendien = 100 * 1418 + 50 * 1622 + 50 * 2044 + (soluong - 200) * 2210;
    }else if (soluong <= 400){
        tiendien = 100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + (soluong - 300) * 2361;
    }else{
        tiendien = 100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + 100 * 2361 + (soluong - 400) * 2420;
    }
    printf("Tien dien: %d\n",tiendien);
    return 0;
}
