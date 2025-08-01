

void allocate_memory(int** ptr) {
    *ptr = malloc(sizeof(int)); // Alokuje pamięć i przypisuje jej adres do WSKAŹNIKA, na który wskazuje 'ptr'
}

int main() {
    int* my_ptr = NULL;
    allocate_memory(&my_ptr); // Przekazujemy adres wskaźnika 'my_ptr'
    *my_ptr = 10;
    printf("Wartość: %d\n", *my_ptr); // Wyświetli: 10
    free(my_ptr);
    return 0;
}
