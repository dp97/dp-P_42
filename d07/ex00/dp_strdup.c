#include <stdlib.h>

void	dp_strcpy(char *s1, const char *s2)
{
    int     i;
    
    i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

char    *dp_strdup(char *src)
{
    char    *cpy;
    
    cpy = malloc(sizeof(src) + 1);
    dp_strcpy(cpy, src);
    return (cpy);
}
