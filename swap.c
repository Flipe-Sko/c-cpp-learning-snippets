//sawp

void swap(int  *a, int *b);

int main(void) {
    int nu1,nu2;
    nu1 = 10;
    nu2 = 18;

    printf("%d\n%d\n", nu1, nu2);

    swap(&nu1,&nu2);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    //printf("%d\n", temp);
    printf("%d\n%d\n", *a, *b);
}
