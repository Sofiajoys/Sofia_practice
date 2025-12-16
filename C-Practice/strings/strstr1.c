#include<stdio.h>
char *my_strstr(const char *haystack, const char *needle)
{
    int i, j;
    for (i = 0; haystack[i] != '\0'; i++)
    {
        for (j = 0; needle[j] != '\0'; j++)
        {
            if (haystack[i + j] != needle[j])
                break;
        }
        if (needle[j] == '\0')
            return (char *)&haystack[i];
    }

    return NULL;
}
int main()
{
    char str[] = "hello world";
    char sub[] = "world";

    char *p = my_strstr(str, sub);

    if (p)
        printf("Found: %s\n", p);
    else
        printf("Not found\n");

    return 0;
}