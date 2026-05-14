#include <stdio.h>

struct Student{
    char name[10];
    int score;
};
void add(struct Student s){
    void *p = malloc(sizeof(struct Student));
}
void delete(struct Student s, void *p){
    if(strcmp(p, s.name) == 0){
        free(p);
    }
}
void print(struct Student s){
    printf("%s %d\n", s.name, s.score);
}
void quit(struct Student s){
    exit(0);
}
int main() {
    struct Student s;
    char func[10];
    scanf("%9s %9s %d", func, s.name, &s.score);
    if (strcmp(func, "add") == 0) {
        add(s);
    } else if (strcmp(func, "delete") == 0) {
        delete(s, NULL);
    } else if (strcmp(func, "print") == 0) {
        print(s);
    } else if (strcmp(func, "quit") == 0) {
        quit(s);
    }
    return 0;
}
