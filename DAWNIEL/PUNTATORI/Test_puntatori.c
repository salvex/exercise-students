#include <stdio.h>
#include <stdlib.h>
void myStrcat(char *s1, char *s2, char *result);

int main()
{
    char stringa1[] = {"suca"};
    char stringa2[] = {"melo"};
    char result[10];

    myStrcat(stringa1, stringa2, result);



    return 0;
}

void myStrcat(char *s1, char *s2, char result)
{
    while(s1 != '\0')
    {
        *result = s1;
        result++;
        s1++;

    }
    while(s2 != '\0')
    {
        *result = *s2;
        result++;
        s2++;
    }
    printf("%s", *result);

}
