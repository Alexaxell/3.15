#include <stdio.h>

int main(void) {
    float PrezzoBiglietto;
    float PrezzoFinale;
    char condizione;
    printf("inserisci il prezzo del biglietto: ");
    scanf("%f", &PrezzoBiglietto);
    printf("inserisci la tua condizione:\n pensionato (P)\n studente (S)\n disoccupato (D)\n");
    scanf("%c", &condizione);
    if (condizione =='P') {
        PrezzoFinale = PrezzoBiglietto - (PrezzoBiglietto * 0.10);
        printf("il prezzo finale del biglietto è: %.2f euro", PrezzoFinale);
    }
    else if (condizione =='S') {
        PrezzoFinale = PrezzoBiglietto - (PrezzoBiglietto * 0.15);
        printf("il prezzo finale del biglietto è %.2f euro", PrezzoFinale);
    }
    else if (condizione =='D') {
        PrezzoFinale = PrezzoBiglietto - (PrezzoBiglietto * 0.25);
        printf("il prezzo finale del biglietto è %.2f euro", PrezzoFinale);
    }
    return 0;
}
