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
    char s1[] = "hello";
    reverseString(s1, 5);
    printf("Test Case 1: %s\n", s1);

    // Edge case: single-character string
    char s2[] = "a";
    reverseString(s2, 1);
    printf("Test Case 2: %s\n", s2);

    return 0;
}