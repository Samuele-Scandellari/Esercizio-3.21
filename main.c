#include <stdio.h>
int main() {
    int giorno, mese, anno;
    int validita = 1;
    printf("Inserisci la data (GG MM AAAA): ");
    scanf("%d %d %d", &giorno, &mese, &anno);
    if (mese < 1 || mese > 12) {
        validita = 0;
    } else {
        switch (mese) {
            case 1: // Gennaio
            case 3: // Marzo
            case 5: // Maggio
            case 7: // Luglio
            case 8: // Agosto
            case 10: // Ottobre
            case 12: // Dicembre
                if (giorno < 1 || giorno > 31) {
                    validita = 0;
                }
            break;
            case 2: // Febbraio
                if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)) {
                    if (giorno < 1 || giorno > 29) {
                        validita = 0;
                    }
                } else {
                    if (giorno < 1 || giorno > 28) {
                        validita = 0;
                    }
                }
            break;
            case 4: // Aprile
            case 6: // Giugno
            case 9: // Settembre
            case 11: // Novembre
                if (giorno < 1 || giorno > 30) {
                    validita = 0;
                }
            break;
        }
    }
    if (validita) {
        printf("La data esiste\n");
    } else {
        printf("La data non esiste\n");
    }
    return 0;
}