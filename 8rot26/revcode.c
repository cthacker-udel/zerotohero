#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char input[8204];
char tape[4108];

// lets you input only 0x1000 characters into a variable 0x200c away from ebp
// call rot26 with 0x1000, variable, and var_100ch, so args are rot26(var_100ch, variable, 0x1000)
// var_100ch = arg_8h
// variable = arg_ch
// len = arg_10h
// var_20h = loop variable

void *rot26(char *tape, char *input, int len)
{
    // jmp 0x8048722
    for (int i = 0; i < len; i++)
    {
        char x = input[i];
        char y = x + x + x;
        if (y & 0x100)
        {
        }
    }
}

int main(void)
{
    fgets(input, 0x1000, stdin);
    rot26(tape, input, 0x1000);
}