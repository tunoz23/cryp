#include "main.h"

void crypto_text(char* text_to_cryp);

int main(void){

    strcpy(lowercase_alp,"abcdefghijklmnopqrstuvwxyz");
    strcpy(uppercase_alp, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    char text[] = "abcde";
    crypto_text(text);
    puts(text);
    return 0;
}
void crypto_text(char* text_to_cryp){

    int i = 0;
    char current_char;
    char* ptr_current_char = text_to_cryp;


    do{
        //printf("%d-", i);
        current_char = text_to_cryp[i];
        if (current_char != '\0'){
            //printf("Before the process: %s\n", text_to_cryp);
            *ptr_current_char = lowercase_alp[i + 2];
            //printf("After the process: %s\n", text_to_cryp);
            ptr_current_char++;
            i++;
        }

    }

    while(current_char != '\0');
    //puts(text_to_cryp);
}