#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "entry_creation.c"
#include "encryption.c"

int main(){
    Creds entry = creating_new_entry();
    char* enc_pass = encrypt(entry.password);
    
    if(enc_pass != NULL){
        printf("\nEncrypted Password: %s\n", enc_pass);
        free(enc_pass);
    }
    
    return 0;
}
