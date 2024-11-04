#include "controller.h"
#include "view.h"
#include "model/aes.h"

#include <stdio.h>

void run() {
    int main_choice;
    while (1) {
        display_main_menu();
        get_user_choice(&main_choice);

        switch (main_choice) {
            case 1: aes_controller(); break;
            case 0: printf("Exiting...\n"); return;
            default: printf("Invalid choice.\n");
        }
    }
}

void aes_controller() {
    int aes_choice;
    while (1) {
        display_aes_menu();
        get_user_choice(&aes_choice);

        switch (aes_choice) {
            case 1: aes_keygen(); break;
            case 2: aes_encrypt(); break;
            case 3: aes_decrypt(); break;
            case 0: return;
            default: printf("Invalid choice.\n");
        }
    }
}
