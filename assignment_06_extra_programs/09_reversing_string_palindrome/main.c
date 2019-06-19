// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

#include <stdio.h>

int main (void)
{
    char str[4096];    
    printf("Enter a string: ");
    scanf("%s", str);
    
    int i, str_size = 0;
    for (i = 0; str[i] != '\0'; ++i)
    {
        str_size++;        
    }
        
    char str_reversed[str_size];
    for (i = 0; i < str_size; ++i)
    {
        str_reversed[str_size - 1 - i] = str[i];
    }
    
    printf("The string \"%s\" reversed is \"%s\".\n", str, str_reversed);
    printf("It is ");    
    for (i = 0; i < str_size; ++i)
    {
        if (str_reversed[i] != str[i])
        {            
            printf("not ");
            break;
        }
    }
    printf("a palindrome!\n");
    
    return 0;
}
