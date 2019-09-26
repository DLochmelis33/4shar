#include <stdio.h>
#include <string.h>

char* supercat(char* restrict s1, const char* restrict s2){
    while(*s1++){}
    s1--;
    
    while(*s2){
        *s1 = *s2;
        s1++;
        s2++;
    }
    s1 = '\0';
    return s1;
}

int main()
{
    
    char p1[] = "123";
    char p2[] = "456";
    
    supercat(p1, p2);
    supercat(p1, p2);
    
    return 0;
}
