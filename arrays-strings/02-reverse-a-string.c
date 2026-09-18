#include <stdio.h>

void reverseString(char *s, int sSize)
{
    int i = 0;
    int j = sSize - 1;
    char temp;

    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    char s[] = "hello";

    reverseString(s, 5);

    printf("Reversed string: %s\n", s);

    return 0;
}