#include <stdio.h>
int main(){
    puts(" ***** AND *****");
    printf(" true && true : %d\n", (1 && 1));
    printf(" true && false : %d\n", (1 && 0));
    printf(" false && true : %d\n", (0 && 1));
    printf(" false && false : %d\n", (0 && 0));
    puts("\n ***** OR *****");
    printf(" true || true : %d\n", (1 || 1));
    printf(" true || false : %d\n", (1 || 0));
    printf(" false || true : %d\n", (0 || 1));
    printf(" false || false : %d\n", (0 || 0));
    puts("\n ***** XOR *****");
    printf(" true ^ true : %d\n", (1 ^ 1));
    printf(" true ^ false : %d\n", (1 ^ 0));
    printf(" false ^ true : %d\n", (0 ^ 1));
    printf(" false ^ false : %d\n", (0 ^ 0));
    return 0;
}

