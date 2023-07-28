typedef struct Credentials {
    char site[20];
    char userName[10];
    char password[24];
} Creds;

void remove_newline(Creds* entry);
Creds creating_new_entry();
