#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
    int age;
    char academic[50];
    int weight;
    int height;
    char address[50];
    char position[50];

} information;


int main() {
    int size;
    printf("Please enter your size:\n");
    scanf("%d", &size);
    information myinformation[size];
    for (int i = 0; i < size; ++i) {
        printf("Please enter your id %d :\n", i);
        scanf("%d", &myinformation[i].id);
        printf("Please enter your name %d :\n", i);
        fgetc(stdin);
        fgets(myinformation[i].name, 50, stdin);
        if (!strchr(myinformation[i].name, '\n')) {
            while (fgetc(stdin) != '\n');
        }
        printf("please enter your age %d :\n", i);
        scanf("%d", &myinformation[i].age);
        printf("please enter your academic %d :\n", i);
        fgetc(stdin);
        fgets(myinformation[i].academic, 50, stdin);
        if (!strchr(myinformation[i].academic, '\n')) {
            while (fgetc(stdin) != '\n');
        }
        printf("please enter your weight %d :\n", i);
        scanf("%d", &myinformation[i].weight);
        printf("please enter your height %d :\n", i);
        scanf("%d", &myinformation[i].height);
        printf("please enter your address %d :\n", i);
        fgetc(stdin);
        fgets(myinformation[i].address, 50, stdin);
        if (!strchr(myinformation[i].address, '\n')) {
            while (fgetc(stdin) != '\n');
        }
        printf("please enter your position %d :\n", i);
        fgets(myinformation[i].position, 50, stdin);
        if (!strchr(myinformation[i].position, '\n')) {
            while (fgetc(stdin) != '\n');
        }
        for (int i = 0; i < size; ++i) {
            printf("id %d: %d\n", i, myinformation[i].id);
            printf("Name %d : %s\n", i, myinformation[i].name);
            printf("Age %d : %d tuổi\n", i, myinformation[i].age);
            printf("Academic %d : %s\n", i, myinformation[i].academic);
            printf("Weight %d : %d kg\n", i, myinformation[i].weight);
            printf("Height %d : %d cm\n", i, myinformation[i].height);
            printf("Address %d : %s\n", i, myinformation[i].address);
            printf("Position %d : %s\n", i, myinformation[i].position);
        }
    }
        return 0;
    }
