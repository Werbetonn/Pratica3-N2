#include <stdio.h>
#define PI 3.14

float areaDoCirculo(float raio);

int main() {
	float r, a;
	printf("Informe o valor do raio: ");
	scanf("%f", &r);
	a = areaDoCirculo(r);
	printf("A área do circulo é %.2f com\n", a);
	
	return 0;
}

float areaDoCirculo(float raio) {
	return PI * raio * raio;
}
