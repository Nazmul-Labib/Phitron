#include <stdio.h>

int main() {
    int age;
    char name[50];

    printf("Enter your age: ");
    scanf("%d", &age); // reads integer but leaves newline '\n' in buffer
    getchar();

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // reads leftover newline, not the actual name

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    return 0;
}
