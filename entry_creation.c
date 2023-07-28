#include "entry_creation.h"

void remove_newline(Creds* entry){
    char *pos;
    if ((pos = strchr((*entry).site, '\n')) != NULL) *pos = '\0';
    if ((pos = strchr((*entry).userName, '\n')) != NULL) *pos = '\0';
    if ((pos = strchr((*entry).password, '\n')) != NULL) *pos = '\0';
}

Creds creating_new_entry(){
    Creds entry;

    printf("Enter site name: ");
    fgets(entry.site, sizeof(entry.site), stdin);

    printf("Enter username (up to 10 characters): ");
    fgets(entry.userName, sizeof(entry.userName), stdin);

    printf("Enter password (up to 25 characters): ");
    fgets(entry.password, sizeof(entry.password), stdin);

    printf("\nSite: %s", entry.site);
    printf("Username: %s", entry.userName);
    printf("Password: %s", entry.password);
    
    remove_newline(&entry);

    return entry;
}
