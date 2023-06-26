#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 13

char generate_random_char(void)
{
    int random_num = rand() % 62;
    if (random_num < 26)
    {
        return 'A' + random_num;
    }
    else if (random_num < 52)
    {
        return 'a' + (random_num - 26);
    }
    else
    {
        return '0' + (random_num - 52);
    }
}

char *generate_password(void)
{
    char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));
    if (password == NULL)
    {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }

    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = generate_random_char();
    }
    password[PASSWORD_LENGTH] = '\0';

    return password;
}

int main(void)
{
    srand(time(NULL));

    char *password = generate_password();

    printf("%s", password);

    free(password);
    return 0;
}
