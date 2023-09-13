void print_name(char *name, void (*f)(char *)){
f(name);
}
void print_name_function(char *name) {
    printf("Name: %s\n", name);
}
