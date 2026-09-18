#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *longestCommonPrefix(char **strs, int strsSize)
{
    int i = 0;
    int j;

    char *result = (char *)malloc(201 * sizeof(char));

    while (strs[0][i] != '\0')
    {
        for (j = 1; j < strsSize; j++)
        {
            if (strs[j][i] != strs[0][i] || strs[j][i] == '\0')
            {
                result[i] = '\0';
                return result;
            }
        }

        result[i] = strs[0][i];
        i++;
    }

    result[i] = '\0';

    return result;
}

int main()
{
    char *strs1[] = {"flower", "flow", "flight"};
    char *strs2[] = {"dog", "racecar", "car"};

    printf("Test Case 1: %s\n", longestCommonPrefix(strs1, 3));
    printf("Test Case 2: %s\n", longestCommonPrefix(strs2, 3));

    return 0;
}