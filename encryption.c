#include "encryption.h"

void reverse(char* str){
    char* start = str;
    char* end = start + strlen(str) - 1;
    char temp;
    printf("%p %p", (void*)start, (void*)end);
    
    // works because end and start are addresses so they can be reversed until it hits past halfway
    while(end > start) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

}

char* encrypt(char* phrase) {
    char* encrypted_pass = malloc(50 * sizeof(char));
    if(encrypted_pass == NULL){
        fprintf(stderr, "Failed to allocate memory for Encrypted Password");
        exit(1);
    }
    strncpy(encrypted_pass, phrase, 49);
    encrypted_pass[49] = '\0';
    reverse(encrypted_pass);
    
    return encrypted_pass;

}
