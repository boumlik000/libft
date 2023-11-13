#include "header.h"
int ft_isalnum(int x)
{
    return ((x >= '0' && x<= '9') || (x>= 'a' && x<+ 'z') || (x>= 'A' && x<= 'Z'));
}
