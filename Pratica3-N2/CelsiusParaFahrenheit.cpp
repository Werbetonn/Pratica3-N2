#include <stdio.h>
#include <locale.h>

float celsiusParaFahrenheit(float c);
float fahrenheitParaCelsius(float f);

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int op;
	float tf, tc;
	printf("Conversor de temperatura\n");
	printf("Escolha uma opção: \n\n");
	printf("1 - Celsius Para Fahrenheit\n");
	printf("2 - Fahrenheit Para Celsius\n");
	scanf("%d", &op);
	printf("\nDigite o valor da temperatura: ");
	
	if(op == 1) {
		printf(" em Celsius: ");
		scanf("%f", &tc);
		tf = celsiusParaFahrenheit(tc);
	}else {
		printf(" em Fahrenheit: ");
		scanf("%f", &tf);
		tc = fahrenheitParaCelsius(tf);
	}
	printf("\nTemperqatura em Celsius: %.2f C\n", tc);
	printf("Temperqatura em Fahrenheit: 5.2f F\n", tf);
	
}

float celsiusParaFahrenheit(float c) {
	return c*1.8 + 32;
}
float fahrenheitParaCelsius(float f) {
	return (f-32)/1.8;
}
