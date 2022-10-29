#include "main.h"

void crypto_text(char* text_to_cryp);

int main(void){

    strcpy(lowercase_alp,"abcdefghijklmnopqrstuvwxyz");
    strcpy(uppercase_alp, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    char text[] = "dickhead";
    crypto_text(text);
    puts(text);
    return 0;
}
void crypto_text(char* text_to_cryp){

    int i = 0;
    //char current_char;
    char next_char;
    char* ptr_current_char = text_to_cryp;


    do{
        printf("%d\n", i);
        //current_char = text_to_cryp[i];
        next_char = text_to_cryp[i+1];
        *ptr_current_char = lowercase_alp[i + 2];
        ptr_current_char++;
        i++;

    }
    while(next_char != '\0');

    //puts(text_to_cryp);
}