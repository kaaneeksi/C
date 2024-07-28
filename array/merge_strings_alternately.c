#include <stdlib.h>

char * mergeAlternately(char * word1, char * word2)
{
    int	i;
    int	j;
    int	k;
    int	len_word1;
    int	len_word2;
    char	*result;

    k = 0;
    i = 0;
    j = 0;
    len_word1 = strlen(word1);
    len_word2 = strlen(word2);
    result = (char *)malloc((len_word1 + len_word2 + 1) * sizeof(char));

    while (i < len_word1 && j < len_word2) {
        result[k++] = word1[i++];
        result[k++] = word2[j++];
    }

    while (i < len_word1) {
        result[k++] = word1[i++];
    }

    while (j < len_word2) {
        result[k++] = word2[j++];
    }

    result[k] = '\0';

    return (result);
}
