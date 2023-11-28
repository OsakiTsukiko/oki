#include <ostr/ostr.h>
#include <stdlib.h>
#include <string.h>

unsigned int ostr_len(char *str) {
    if (str == NULL) {
        return 0;
    }
    
    unsigned int len = 0;
    while (*str != 0)
    {
        len += 1;
        str += 1;
    }
    return len;
}

char *ostr_create(const char *initial_string) {
    char *res = (char *)malloc(sizeof(char) * (ostr_len(initial_string) + 1));
    memcpy(res, initial_string, sizeof(char) * (ostr_len(initial_string) + 1));
    return res;
}

void ostr_destroy(const char *str) {
    // this function is mainly for consistency
    if (str != NULL) {
        free(str);
    }
}