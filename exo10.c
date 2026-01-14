#include <stdio.h>

int main() 
    {
    int h, m, s, t;
    printf("Type the time in seconds: ");
    scanf("%d", &t);
    h = t / 3600;
    m = (t % 3600) / 60;
    s = t % 60;
    printf("Time is %02d:%02d:%02d\n", h, m, s);

    return 0;
}