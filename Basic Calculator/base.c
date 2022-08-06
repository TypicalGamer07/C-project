#include <stdio.h>
void main () {
    printf ("Welcome to my C calculator, this is get more advanced & complicated time to time \n");
    printf ("Give your integer input \n");
    int total,n1,n2;
    scanf ("%d %d",&n1,&n2);
    total = n1 + n2;
    printf ("%d + %d =%d \n", n1,n2,total);
    system("pause");
}