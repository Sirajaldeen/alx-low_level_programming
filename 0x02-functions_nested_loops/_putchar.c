#include <unistd.h>
/*
* _putchar -writes the charcater c to stdout
*@c: ther
*/
int _putchar(char c)
{
return (write (1 , &c, 1));
}
