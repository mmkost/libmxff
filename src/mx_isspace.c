#include "libmx.h"
bool mx_isspace(char c) {
  if(c == '\f' || c == '\t' || c == '\r' || c == ' ' || c == '\n' || c == '\t') {
        return true;
    }
    return false;
}
