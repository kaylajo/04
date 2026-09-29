#include <stdio.h>
int main (int argc, char *argv[]) {
    int second;
    int min, sec;

    printf("input the second :");
    scanf("%d", &second);

    min = second / 60;
    sec = second % 60;
    printf("the time is %d : %d\n", min, sec);
    return 0;
}
