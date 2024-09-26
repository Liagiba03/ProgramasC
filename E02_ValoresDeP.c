#include <stdio.h>
int main(){
    int P= 1;
    int Q = 0;
    int R = 1;
    int T = 0;
    printf("P & R: %d\n", (P && R));
    printf("Q | T: %d\n", (Q || T));
    printf("P & Q || R & T: %d\n", ((P && Q) || (R && T)));
    printf("P XOR Q XOR R XOR T: %d\n", (P ^Q^R^T));
    printf("!Q && !T: %d\n", (!Q && !T));
    printf("!!!P: %d\n", (!!!P));
    return 0;
}

