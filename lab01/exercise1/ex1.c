#include <string.h>
#include "ex1.h"

/* Returns the number of times LETTER appears in STR.
There are two different ways to iterate through a string.
1st way hint: strlen() may be useful
2nd way hint: all strings end in a null terminator */
int num_occurrences(char *str, char letter) {
    /* TODO: implement num_occurances */
    int count = 0;

    // Method 1: Using strlen()
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == letter) {
            count++;
        }
    }

    // Method 2: Using null terminator
/*    char *ptr = str;
    while (*ptr != '\0') {
        if (*ptr == letter) {
            count++;
        }
        ptr++;
    }
*/
    return count;
}

/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */
void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {
    /* TODO: implement compute_nucleotide_occurances */
    dna_seq->A_count = 0;
    dna_seq->C_count = 0;
    dna_seq->G_count = 0;
    dna_seq->T_count = 0;

    for (int i = 0; i < strlen(dna_seq->sequence); i++) {
        switch (dna_seq->sequence[i]) {
            case 'A': dna_seq->A_count++; break;
            case 'C': dna_seq->C_count++; break;
            case 'G': dna_seq->G_count++; break;
            case 'T': dna_seq->T_count++; break;
        }
    }
    return;
}
