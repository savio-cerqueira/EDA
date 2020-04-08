#include <stdio.h>
#include <stdlib.h>

#define maxHeight 255

typedef struct {
    int height;
    int weight;
} HeightWeigth;

void show(HeightWeigth* p) {
    printf("\nHeight: %i, Weight: %i \n", p->height, p->weight);

    if (p->height > maxHeight) printf("Altura acima da maxima \n\n");
    else printf("Altura abaixo da maxima \n\n");
}

int main() {
    HeightWeigth* p = (HeightWeigth*) malloc(sizeof(HeightWeigth));

    p->height = 185;
    p->weight = 80;

    show(p);

    return 0;
}