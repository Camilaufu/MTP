#include <stdio.h>
int main () {
    float base,altura, area_triangulo;
    printf ("entre coma a base do triangulo:");
    scanf("%f",&base);
    printf ("entre coma a altura:");
    scanf("%f",&altura);
    area_triangulo = (base*altura)/2;
    printf( "Area triangulo e: %.3f\n",area_triangulo);

return 0;
}
