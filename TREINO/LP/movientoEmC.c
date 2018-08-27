#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // for isLower(), remove case not
/*
             ___
            /   \\
       /\\ | . . \\
     ////\\|     ||
   ////   \\ ___//\
  ///      \\      \
 ///       |\\      |
//         | \\  \   \
/          |  \\  \   \
           |   \\ /   /
           |    \/   /
           |     \\/|
           |      \\|
           |       \\
           |        |
           |_________\

if you copy, death will find you if you don't teach another person by the end of the day

*/

//Use W, A, S, D to move the character
int main ()
{
    char register unsigned n = 5, e = 5, c;
    for(;;)
    {
        c = getch();
        c = tolower(c);
        switch (c)
        {
            case 'w':
                system ("cls"); // or puts("\x1B[2J");
                n--;
                calc(n, e);
                break;
            case 's':
                system ("cls"); // or puts("\x1B[2J");
                n++;
                calc(n, e);
                break;
            case 'a':
                system ("cls"); // or puts("\x1B[2J");
                e -= 3;
                calc(n, e);
                break;
            case 'd':
                system ("cls"); // or puts("\x1B[2J");
                e += 3;
                calc(n, e);
                break;
            case 13:
                exit(0);
                break;
            default:
                puts("invalid key!!!\n use W, A, S, D for move object or ENTER for exit");

        }
    }
    return 0;
}
void calc(int register x, int register y)
{
    indent(x);
    space(y); puts("   .");
    space(y); puts("__/ \\");
    space(y); puts("\\     /");
    space(y); puts("/_   _\\");
    space(y); puts("  \\ /");
    space(y); puts("   '");
}
void space (int register q)
{
    while (q > 0)
    {
        printf(" ");
        q--;
    }
    return;
}
void indent (int register s)
{
    while (s > 0)
    {
        printf("\n");
        s--;
    }
}
