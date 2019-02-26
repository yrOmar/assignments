#omar tahirou yaro

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string key = argv[1];
    if (argc != 2)
    {
    printf("Please give me a valid key");
    return 1;
    }
    else
    {
    int k = atoi(key) % 26;
    if (k == 0)
    {
    printf("Invalid key. Try again\n");
    return 1;
    }
    string plnttxt = GetString();
    if (plnttxt != NULL)
    {
    for (int i = 0, n = strlen(plnttxt); i < n; i++)
    {
    int c = 0;
    if (isupper(plttxt[i]))
    {
    c = ((int)plnttxt[i] - 97 + k) % 26) + 65;
    printf("%c , (char) c);
    }
    else if (islower(plnttxt[i]))
    {
    c = (((int)plnttxt[i] - 97 = k) % 26) + 97;
    }
    else
    {
    printf("%c" , plnttxt[i]);
    }
}
printf("\n");
return 0;