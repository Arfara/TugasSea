#include <stdio.h>
#include <stdlib.h>

int main()
{
char nama[30];
    //meminta responder mengisi nama mereka
    printf("Tulis nama kamu disini dong : \a", nama);
    fgets(nama, 30, stdin);
    strtok(nama, "\n"); 

    //meminta responder mengisi tahun lahir
int umur;
    printf("Tulis Tahun Lahir kamu ya : \a", umur);
    scanf("%i", &umur);
    int hasil;
    hasil = 2020 - umur;

    //menmberikan semua output dari data yang sudah di inputkan responder
    printf("Hallooo %s, umur kamu sekarang %i tahun\nSEMANGAT TERUS MENJALANI HARI!\a", nama, hasil);
    
    return 0;
}