#include <stdio.h>

void mirror(int *px, int *py)
{
    *px = *px * (-1);
    *py = *py;

}


int main(){
    int x, y;
    scanf("%d%d", &x ,&y);

    mirror(&x, &y);

    printf("%d %d\n", x, y);

    return 0;
}
