#include <stdio.h>
#include <string.h>

typedef struct Credentials {
    char site[10];
    char userName[5];
    char password[15];
} Creds;


int main(){
    Creds Avneet;
    
    scanf("%s", Avneet.site);
    printf("Site: %s\n", Avneet.site);
    printf("User Name: %s\n", Avneet.userName);
    printf("%d", sizeof(Avneet.site));
    return 0;
}
