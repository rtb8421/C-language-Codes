#include <stdio.h>

struct point

{

int x,y;
};

int main()

{

struct point p1 = {5, 7};

struct point *ptr=&p1;

ptr->x=5+2;

printf("%d,%d", ptr->x-2, ptr->y);

return 0;

}