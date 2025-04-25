// Online C compiler to run C program online
#include <stdio.h>

int main()
{

    char ch;
    scanf("%c", &ch);

    if ((int)ch < 97)
    {
        printf("%c", ch + 32);
    }
    else
    {
        printf("%c", ch - 32);
    }
    
}

// or
// if(ch>='a' && ch<='z')
// else if(ch>='A' && ch<='Z')
