#include <stdio.h>
int main (int argc, char *argv[]) {
    int second;
    int hour, min, sec;
    printf("input the second : ");
    scanf("%d", &second);

    hour = second / 3600;
    min = (second % 3600) / 60;
    sec = second % 60;

    printf("The time for %d second is %d : %d : %d\n", second, hour, min, sec);

    return 0;
}
