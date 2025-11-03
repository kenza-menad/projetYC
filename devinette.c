#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int secret, guess, essais = 0;
    srand(time(NULL));
    secret = rand() % 100 + 1;

    printf("=== Jeu de devinette ===\n");
    do {
        printf("Devine le nombre (1 à 100) : ");
        scanf("%d", &guess);
        essais++;
        if (guess < secret) printf("➡️ Plus grand !\n");
        else if (guess > secret) printf("⬇️ Plus petit !\n");
        else printf("🎉 Bravo ! Trouvé en %d essais.\n", essais);
    } while (guess != secret);

    return 0;
}

