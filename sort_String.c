#include <stdio.h>
#include <string.h>
#define MAX_STRINGS 20
#define MAX_STRING_LEN 200

void InsertionSort(char list[MAX_STRINGS][MAX_STRING_LEN]);

int main()
{
    int index;
    char strings[MAX_STRINGS][MAX_STRING_LEN];

    /* Get input */
    printf("Enter %d strings.\n", MAX_STRINGS);
    for (index = 0; index < MAX_STRINGS; index++)
    {
        printf("Input string %d : ", index);
        scanf("%199s", strings[index]);     // limit the width so we don't go past the buffer
        strings[index][sizeof(strings[index]) - 1] = '\0';
    }

    InsertionSort(strings);

    printf("\nThe input set, in alphabetical order:\n");
    for (index = 0; index < MAX_STRINGS; index++)
    {
        printf("%s\n", strings[index]);
    }
}

void InsertionSort(char list[MAX_STRINGS][MAX_STRING_LEN])
{
    for (int i = 1; i < MAX_STRINGS; i++)
    {
        int j = i;

        while (j > 0 && strcmp(list[j - 1], list[j]) > 0)
        {
            char tmp[MAX_STRING_LEN];
            strncpy(tmp, list[j - 1], sizeof(tmp) - 1);
            tmp[sizeof(tmp) - 1] = '\0';

            strncpy(list[j - 1], list[j], sizeof(list[j - 1]) - 1);
            list[j - 1][sizeof(list[j - 1]) - 1] = '\0';

            strncpy(list[j], tmp, sizeof(list[j]));
            list[j][sizeof(list[j]) - 1] = '\0';

            --j;
        }
    }
}
