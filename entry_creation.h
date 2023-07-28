// we have to add 2 to each field to account for '\n'
// when the user hits enter and the appending of a
// null terminating character '\0'
typedef struct Credentials {
    char site[22];
    char userName[12];
    char password[27];
} Creds;

void remove_newline(Creds* entry);
Creds creating_new_entry();
