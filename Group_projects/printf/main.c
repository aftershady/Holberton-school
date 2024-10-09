#include <stdio.h>
#include "main.h"
int main(void)
{
int i = -505;
int len1 = 0;
int len2 = 0;
len1 = printf("vrai printf, i = %d\n", i);
len2 = _printf("faux printf, i = %d\n", i);
printf("la longueur du vrai printf est %d\n", len1);
printf("la longueur du faux printf est %d\n", len2);
return 0;
}
