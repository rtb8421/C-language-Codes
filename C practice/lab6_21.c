#include <stdio.h>

int main() {
    static int count = 1;
    printf("main called %d times\n", count++);
    if (count <= 10) {
        main();
    }
        return 0;
        
}