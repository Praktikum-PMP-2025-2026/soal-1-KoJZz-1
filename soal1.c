#include <stdio.h>

void inputs(int* izin, int* suhu, int* radiasi, int* jam){
    scanf("%d %d %d %d", izin, suhu, radiasi, jam);
}

void gerbang(int izin, int suhu, int radiasi, int jam){
    if (radiasi >= 6){
        printf("TOLAK");
    } else if (suhu >= 390){
        printf("KARANTINA");
    } else if (izin == 1 && (jam < 6 || jam > 20)){
        printf("TOLAK");
    } else if (izin == 1){
        printf("MASUK");
    } else if (izin == 2 && radiasi <= 2 && (jam >= 8 && jam <= 18)){
        printf("MASUK");
    } else if (izin == 2){
        printf("PEMERIKSAAN");
    } else if (izin == 3 && radiasi == 0 && suhu < 380){
        printf ("MASUK");
    } else printf("TOLAK");
}

int main(){
    int izin; int suhu; int radiasi; int jam;
    inputs(&izin, &suhu, &radiasi, &jam);
    gerbang(izin, suhu, radiasi, jam);
    return 0;
}
