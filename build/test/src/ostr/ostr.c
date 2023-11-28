#include <ostr/ostr.h>
#include <stdio.h>

int main() {
    char *s = ostr_create("HELLO WORLD!");
    printf("%d\n", ostr_len(s));
    printf("%s\n", s);

    ostr_destroy(s);
    return 0;
}