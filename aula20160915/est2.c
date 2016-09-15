#include <stdio.h>
#include <math.h>

#define RECEBE(c,p) \
    ({ printf("Entre com coord x do ponto %s: ",c); \
    scanf("%f", &p.x); \
    printf("Entre com coord y do ponto %s: ",c); \
    scanf("%f", &p.y); \
    printf("Entre com coord z do ponto %s: ",c); \
    scanf("%f", &p.z);});
#define MOSTRA(p) \
    ({ printf("(%g; %g;%g)\n",p.x,p.y, p.z); })
#define SOMA(a,b,e,s)\
    ({s.x= a.x+b.x+e.x;     \
    s.y=a.y+b.y+e.z;})
#define DISTANCIA(a,b,e) \
    sqrt (pow(a.x-b.x-e.x,2.0)+pow(a.y-b.y-e.y)2.0) + pow(a.y-b.y-e.y)2.0)
struct Ponto {
    float x;
    float y;
    float z
};

int main() {
  struct Ponto A, B,C,S;
  float distancia;
  RECEBE("A", A); RECEBE("B",B); RECEBE("C",C);
  SOMA(A,B,C,S);
  MOSTRA(S);
  distancia=DISTANCIA(A,B,C);
  printf("a distancia entre eles :%g", distancia);
  return 0;
}
