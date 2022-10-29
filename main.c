#include "main.h"

void find_locations_of_chars(const char* the_text, int* location_array);
void crypto_text(char* text_to_cryp, const int* locations, size_t size_of_locations_arr);

int main(void){

    strcpy(alphabet, " abcdefghijklmnopqrstuvwxyz abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ ABCDEFGHIJKLMNOPQRSTUVWXYZ"); // 0: 0.harf

    char text[] = "furkan solmaz";
    size_t text_size = strlen(text);
    int harfAdresi[text_size]; // kaçıncı harf olduklarını içeren array "a 1. harf olarak başlıyor."
    find_locations_of_chars(text, harfAdresi);
    crypto_text(text, harfAdresi, text_size);
    puts(text);
    return 0;

}

void find_locations_of_chars(const char* the_text, int* location_array){
    // loop through each char
    char current_char;
    for (int i = 0; i< strlen(the_text); i++){
        current_char = the_text[i];
        for(int j = 0; i< strlen(alphabet); j++){
            //printf("%d", j);
            if (current_char == alphabet[j]) {
                printf("%c -- %c -- %d\n", current_char, alphabet[j], j);
                location_array[i] = j;
                break;
            }
        }
    }
}

void crypto_text(char* text_to_cryp, const int* locations, size_t size_of_locations_arr) {

    size_t size = size_of_locations_arr;
    printf("harf sayisi: %lu\n", size);

    for (int j = 0; j < size; j++) {
        text_to_cryp[j] = alphabet[locations[j] + 2];

    }
}





