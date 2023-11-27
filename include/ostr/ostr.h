#ifndef H_OSTR
#define H_OSTR

unsigned int ostr_len(char *str);

char *ostr_create(const char *initial_string);
void ostr_destroy(const char *str);

#endif