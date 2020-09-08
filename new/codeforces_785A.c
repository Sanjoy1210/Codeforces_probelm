#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, total = 0;
    scanf("%d", &n);
    char polyhedrons[n];

    for(int i = 0; i < n; i++){
        scanf("%s", polyhedrons);

        if(!strcmp(polyhedrons, "Icosahedron")){
            total += 20;
        }
        if(!strcmp(polyhedrons, "Cube")){
            total += 6;
        }
        if(!strcmp(polyhedrons, "Tetrahedron")){
            total += 4;
        }
        if(!strcmp(polyhedrons, "Dodecahedron")){
            total += 12;
        }
        if(!strcmp(polyhedrons, "Octahedron")){
            total += 8;
        }

    }

    printf("%d\n", total);

    return 0;
}
