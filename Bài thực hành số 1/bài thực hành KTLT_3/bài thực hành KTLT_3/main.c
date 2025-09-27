#include <stdio.h>
int main() {
    int thang,nam,songay;
    printf("Tháng: "); scanf("%d",&thang);
    printf("Năm: "); scanf("%d",&nam);
    if(thang == 1||thang == 3||thang == 5||thang == 7||thang == 8||thang == 10||thang == 12){
        songay = 31;
    }else if (thang == 4||thang == 6||thang == 9||thang == 11){
        songay = 30;
    }else if (thang == 2){
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
            {
            songay = 29;
        }else{
            songay = 28;
        }
    }else{
        songay = 0;
    }
    printf("Số ngày: %d\n", songay);
    return 0;
}
