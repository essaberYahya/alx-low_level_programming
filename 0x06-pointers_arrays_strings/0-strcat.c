#include <main.h>
char* _strcat(char* dest, const char* src) {
    char* ptr = dest;
    while (*ptr) {  // find the end of the destination string
        ptr++;
    }
    while (*src) {  // copy the source string to the end of the destination string
        *ptr++ = *src++;
    }
    *ptr = '\0';  // add the terminating null byte
    return dest;
}
