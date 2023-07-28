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

char* cc(char* str, char* phrase){
    int offset = key;
    int temp;
    int len = strlen(str);
    
    for(int i = 0; i < len; i++){
       temp = str[i];
       str[i] = (char)(temp+offset); 
    }
    
    for(int i = len; i< (len * 2); i++){
        temp = phrase[i - len];
        str[i] = (char)(temp + (offset/2));
    }
    
    str[(len * 2)] = '\0';
    return str;
}

char* encrypt(char* phrase) {
    char* encrypted_pass = malloc(50 * sizeof(char));
    
    if(encrypted_pass == NULL){
        fprintf(stderr, "Failed to allocate memory for Encrypted Password");
        exit(1);
    }
    
    //creation of enc pass
    strncpy(encrypted_pass, phrase, 49);
    encrypted_pass[49] = '\0';
    
    //reverse portion of string
    reverse(encrypted_pass);
    
    //caesar cipher added and manipulation
    cc(encrypted_pass, phrase);

    //return encrypted pass
    return encrypted_pass;

}
