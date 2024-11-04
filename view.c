#include "view.h"
#include "banner.h"

#include <stdlib.h>
#include <stdio.h>

void display_main_menu() {
    system("clear");
    show_banner("banners/MAIN_MENU.txt");

    printf("1. AES\n");
    printf("0. Exit\n");
}

void display_aes_menu() {
    system("clear");
    show_banner("banners/AES/AES_MENU.txt");

    printf("1. Key Generation\n");
    printf("2. Encrypt\n");
    printf("3. Decrypt\n");
    printf("0. Back to Main Menu\n");
}

void get_user_choice(int *choice) {
    printf("Enter your choice: ");
    scanf("%d", choice);
}
