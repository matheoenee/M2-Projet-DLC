#include "aes.h"
#include "../banner.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aes_keygen() {
    system("clear");
    show_banner("banners/AES/AES_KEYGEN.txt");

    int key_length;
    printf("Choose AES key length (128, 192, 256 bits): ");
    scanf("%d", &key_length);

    int key_bytes = key_length / 8;
    unsigned char key[key_bytes];

    // Seed the random number generator
    srand((unsigned) time(NULL));
    for (int i = 0; i < key_bytes; i++) {
        key[i] = rand() % 256;
    }

    char filename[256];
    printf("Enter filename to save the key (e.g., key.bin): ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "wb");
    if (!file) {
        printf("Error creating key file.\n");
        return;
    }
    fwrite(key, 1, key_bytes, file);
    fclose(file);

    printf("Key generated and saved to %s\n", filename);
}

void aes_encrypt() {
    printf("Performing AES encryption...\n");
}

void aes_decrypt() {
    printf("Performing AES decryption...\n");
}