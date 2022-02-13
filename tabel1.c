/* File             : tabel1.c */
/* Penulis          : Fauzyah Hadirahma, emal faubelajar@gmail.com */
/* Deskripsi        : mendefinisikan array dan mengisi nilainya */

#include <stdio.h>
int main ()
{
    /* KAMUS */
    int Tab [5] = {1, 2, 3, 4, 5}; /* Tab [0] = 1; Tab [1] = 2; .  .. Tab [4] = 5*/
    float TabX [3] = {1.5, 3.5E2, 9.99};
    char TabChar [4] = {'1', '2', '@', 'Z'};
    
    int i; /* untuk iterasi indeks tabel */
    /* menuliskan isi Tab berderet ke kanan*/
    for (i=0; i<5; i++) 
        {
            printf ("Tab [%d] = %d; ", i, Tab [i]);
        }
    
    printf ("\n");
    
    /* Latihan : tuliskan nilai TabX dan TabChar */
    for (i=0; i<3; i++)
        {
            printf ("TabX [%d] = %5.2f; ", i, TabX [i]);
        }
    
    printf ("\n");
    
    for (i=0; i<4; i++)
        {
            printf ("TabChar [%d] = %c; ", i, TabChar [i]);
        }
    
    return 0;
}
