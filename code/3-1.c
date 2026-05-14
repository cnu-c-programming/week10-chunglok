#include <stdio.h>
#include <string.h>

struct Student{
    char name[10];
    int score;
    struct Student* func;
};
struct Student* add(struct Student* add, char* name, int score){
    struct Student* info = malloc(sizeof(struct Student));
    strcpy(info->name, add->name);
    info->score = add->score;
    return info;
}
struct Student* delete(struct Student* delete, char* name){
    struct Student* info = delete;
    while(info != NULL){
        if(info->name == delete->name){
            free(info);
            return NULL;
        }
        return info;
    }
}
struct Student* print(struct Student* print){
    struct Student* info = print;
    printf("%s %d\n", info->name, info->score);
}
struct Student* quit(struct Student* quit){
    struct Student* end = quit;
    while(end != NULL){
        struct Student* temp = end;
        end = end->func;
        free(temp);
    }
    
}
