#ifndef H_OSTR
#define H_OSTR

// Create / Destroy Strings

// Creates new Dynamic String
char *ostr_create(const char *initial_string);
// Destroy Dynamic String
void ostr_destroy(const char *str);

// Utilities
// Length of String
unsigned int ostr_len(char *str);
#endif