#include "main.h"

void find_locations_of_chars(const char* the_text, int* location_array);
void crypt_text(char* text_to_cryp, int* locations, size_t size_of_locations_arr, int pushSize);
void decrypt_text(char* text_to_decrypt, int* locations,size_t size_of_locations_arr, int pull_size);
int main(void){

    strcpy(alphabet, " abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ"); // 0: 0.harf

    char text[] = "Burak Duzdar";
    size_t text_size = strlen(text);
    int harfAdresi[text_size]; // kaçıncı harf olduklarını içeren array "a 1. harf olarak başlıyor."

    find_locations_of_chars(text, harfAdresi);//harf adresine, adresleri yazan func.

    crypt_text(text, harfAdresi, text_size, 28);//Adreslere göre harfleri şifreleyen func.
    puts(text);
    decrypt_text(text, harfAdresi, text_size, 28);
    puts(text);
    return 0;

}


void find_locations_of_chars(const char* the_text, int* location_array){
    // loop through each char
    char current_char;
    for (int i = 0; i< strlen(the_text); i++){
        current_char = the_text[i];
        for(int j = 0; i< strlen(alphabet); j++) {
            //printf("%d", j);
            if (current_char == alphabet[j]){
                //printf("%c -- %c -- %d\n", current_char, alphabet[j], j);
                location_array[i] = j;
            break;
            }
        }
    }
}

void crypt_text(char* text_to_cryp, int* locations, size_t size_of_locations_arr, int pushSize) {

    pushSize = pushSize%27;
    size_t size = size_of_locations_arr;
    //printf("harf sayisi: %lu\n", size);

    for (int j = 0; j < size; j++) {
        text_to_cryp[j] = alphabet[locations[j] + pushSize];
        locations[j] = locations [j] + pushSize;
    }
}
//TODO: decrypt text fonksiyonuna crypt text fonksiyonundan farklı bi pull size girdiğimizde çalışmalı.
void decrypt_text(char* text_to_decrypt, int* locations,size_t size_of_locations_arr, int pull_size){
    pull_size = pull_size%27;
    size_t size = size_of_locations_arr;


    for (int j = 0; j < size; j++) {
        text_to_decrypt[j] = alphabet[locations[j] - pull_size];
        locations[j] = locations [j] - pull_size;
    }
}





