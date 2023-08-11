#include <unistd.h>

int main() {
    char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, message, sizeof(message) - 1); // Using file descriptor 2 for standard error
    return 1;
}
