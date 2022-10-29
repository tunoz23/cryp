#include "main.h"

void crypto_text(char* text_to_cryp, const int* locations[]);
void find_locations_of_chars(const char* the_text, int* location_array);

int main(void){

    strcpy(lowercase_alp," abcdefghijklmnopqrstuvwxyz"); // 0 0.harf
    strcpy(uppercase_alp, " ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    char text[] = "furkan solmaz";
    int harfAdresi[strlen(text)]; // kaçıncı harf olduklarını içeren array "a 1. harf olarak başlıyor."
    find_locations_of_chars(text, harfAdresi);
    crypto_text(text, harfAdresi);
    puts(text);
    return 0;
}

void find_locations_of_chars(const char* the_text, int* location_array){
    // loop through each char
    char current_char;
    for (int i = 0; i< strlen(the_text); i++){
        current_char = the_text[i];
        for(int j = 0; i< strlen(lowercase_alp); j++){
            //printf("%d", j);
            if (current_char == lowercase_alp[j]) {
                printf("%c -- %c -- %d\n", current_char, lowercase_alp[j], j);
                location_array[i] = j;
                break;
            }
        }
    }
}

void crypto_text(char* text_to_cryp, const int* locations[]){

    int i = 0;
    char next_char;
    int size = sizeof(locations);
    printf("%d",size);
    char* ptr_current_char = text_to_cryp;

    //for(int j = 0; j<size; j++){
     //   printf("%d", j);

    //}

    /*do{
        printf("%d\n", i);
        next_char = text_to_cryp[i+1]; // bir sonraki harf.
        *ptr_current_char = lowercase_alp[i + 2]; // şuanki harfin 2 sonrasi içinn yer değiştirilmesi.

        ptr_current_char++; // sonraki harfe geçiş
        i++; // sonraki harfe geçiş

    }
    while(next_char != '\0');*/

    //puts(text_to_cryp);
}