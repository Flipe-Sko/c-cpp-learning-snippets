int main(void) {
    unsigned int counter1, counter2;
    unsigned int* ptr1 = &counter1;
    unsigned int* ptr2 = &counter2;

    for ( counter1 = 0, counter2 = 10; *ptr1 != *ptr2 ; counter1++, counter2--) {
        printf("counter1 = %u, counter2 = %u\n", counter1, counter2);
    }
}


