#include "entry_creation.h"

Creds creating_new_entry(){
    Creds entry;

    printf("Enter site name: ");
    fgets(entry.site, sizeof(entry.site), stdin);

    printf("Enter username: ");
    fgets(entry.userName, sizeof(entry.userName), stdin);

    printf("Enter password: ");
    fgets(entry.password, sizeof(entry.password), stdin);

    printf("\nSite: %s", entry.site);
    printf("Username: %s", entry.userName);
    printf("Password: %s", entry.password);


    return entry;
}
