#include <stdio.h>
int main() {
int a[] = {0, 2, 4, 6, 8};
int *p = a + 3;
printf(“%s%d%s\n%s%d%s\n”, “a[?] = ”, *p, “?”, “a[?+1] = ”, *p, “?”);
return 0;
}
