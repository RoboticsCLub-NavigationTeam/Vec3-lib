#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "vec3.h"

int main()
{
        srand(time(NULL));
        
        Vec3<float> A(0, 1, 1);
        Vec3<float> B(1, 2, 3);

        Vec3<float> AB = B - A;

        printf("Vector A : ");
        A.print();
        printf("\n Vector B : ");
        B.print();
        printf("\nVector AB(B-A) : ");
        AB.print();
        printf("\n");

        return 0;
}

void _Error_Handler(const char *file, size_t line)
{
        printf("File : %s, Line : %d\n", file, line);
}
