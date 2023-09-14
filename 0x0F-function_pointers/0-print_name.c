#inlude <stdio.h>
void print_name(char *name, void (*f)(char *)){
f(name);
}
void f(char *name) {
    printf("Name: %s\n", name);
}
