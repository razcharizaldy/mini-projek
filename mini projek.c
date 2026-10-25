#include <stdio.h>

enum Level {
    EASY = 1,   // dimulai dari 1 agar cocok dengan pilihan menu
    MEDIUM,     // 2
    HARD        // 3
};

int main() {
    enum Level level;
    int pilihan, nyawa, waktu;

    printf("=== PEMILIHAN LEVEL GAME ===\n");
    printf("1. Easy\n");
    printf("2. Medium\n");
    printf("3. Hard\n");
    printf("Pilih level : ");
    scanf("%d", &pilihan);

    level = (enum Level)pilihan;

    printf("\n======= PENGATURAN GAME =======\n");

    switch (level) {
        case EASY:
            printf("Level   : Easy\n");
            nyawa = 5;
            waktu = 120;
            break;
        case MEDIUM:
            printf("Level   : Medium\n");
            nyawa = 3;
            waktu = 90;
            break;
        case HARD:
            printf("Level   : Hard\n");
            nyawa = 1;
            waktu = 60;
            break;
        default:
            printf("Level tidak valid!\n");
            return 0;
    }

    printf("Nyawa   : %d\n", nyawa);
    printf("Waktu   : %d detik\n", waktu);

    if (nyawa == 1) {
        printf("Pesan   : Hati-hati, kamu cuma punya satu nyawa!\n");
    } else {
        printf("Pesan   : Selamat bermain!\n");
    }

    return 0;
}