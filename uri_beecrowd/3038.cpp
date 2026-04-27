#include <bits/stdc++.h>

using namespace std;

int main()
{

    char texto[500];

    while (~scanf("%[^\n]%*c", texto))
    {

        for (int i = 0; texto[i]; ++i)
            if (texto[i] == '@')
                putchar('a');
            else if (texto[i] == '&')
                putchar('e');
            else if (texto[i] == '!')
                putchar('i');
            else if (texto[i] == '*')
                putchar('o');
            else if (texto[i] == '#')
                putchar('u');
            else
                putchar(texto[i]);
        
        putchar('\n');

    }

    return 0;

}