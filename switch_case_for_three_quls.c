#include <stdio.h>
#include <locale.h>

int main() {
    int choice;

    printf("Select the Qul you want to display:\n");
    printf("1. Surah Al-Ikhlas (112)\n");
    printf("2. Surah Al-Falaq (113)\n");
    printf("3. Surah An-Nas (114)\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nSurah Al-Ikhlas (112):\n");
            printf("1. قُلْ هُوَ اللَّهُ أَحَدٌ\n");
            printf("2. اللَّهُ الصَّمَدُ\n");
            printf("3. لَمْ يَلِدْ وَلَمْ يُولَدْ\n");
            printf("4. وَلَمْ يَكُن لَّهُ كُفُوًا أَحَدٌ\n");
            break;

        case 2:
            printf("\nSurah Al-Falaq (113):\n");
            printf("1. قُلْ أَعُوذُ بِرَبِّ الْفَلَقِ\n");
            printf("2. مِن شَرِّ مَا خَلَقَ\n");
            printf("3. وَمِن شَرِّ غَاسِقٍ إِذَا وَقَبَ\n");
            printf("4. وَمِن شَرِّ النَّفَّاثَاتِ فِي الْعُقَدِ\n");
            printf("5. وَمِن شَرِّ حَاسِدٍ إِذَا حَسَدَ\n");
            break;

        case 3:
            printf("\nSurah An-Nas (114):\n");
            printf("1. قُلْ أَعُوذُ بِرَبِّ النَّاسِ\n");
            printf("2. مَلِكِ النَّاسِ\n");
            printf("3. إِلَٰهِ النَّاسِ\n");
            printf("4. مِن شَرِّ الْوَسْوَاسِ الْخَنَّاسِ\n");
            printf("5. الَّذِي يُوَسْوِسُ فِي صُدُورِ النَّاسِ\n");
            printf("6. مِنَ الْجِنَّةِ وَالنَّاسِ\n");
            break;

        default:
            printf("you entered wrong choice \n");
            break;
    }
    return 0;
}