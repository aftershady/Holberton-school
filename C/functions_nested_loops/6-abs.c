#include <unistd.h>
#include "main.h"
/**
*_abs - abs number
*@a: number
*Description: return the absolute value of a number
*Return: abs value
*/
int _abs(int a)
{
if (a == 0)
{
return (0);
}
else if (a < 0)
{
return (a * -1);
}
else
{
return (a);
}
}
