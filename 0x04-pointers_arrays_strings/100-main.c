#include "headerfile.h"
#include <stdio.h>
/**
 *
 * Return: Always 0.
 */
int main(void)
{

    int n;


    n = _atoi("98");

    printf("%d\n", n);

    n = _atoi("-402");

    printf("%d\n", n);

    n = _atoi("          ------++++++-----+++++--98");

    printf("%d\n", n);

    n = _atoi("214748364");

    printf("%d\n", n);

    n = _atoi("0");

    printf("%d\n", n);

    n = _atoi("Suite 402");

    printf("%d\n", n);

    n = _atoi("         +      +    -    -98 Capitol Street; San Francisco, CA 94115 - USA             ");

    printf("%d\n", n);

    n = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");

    printf("%d\n", n);

    return (0);

}
