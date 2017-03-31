#include <stdio.h>

int main(void) {

	double number;
	double valorhoratrabalhada;
	double salary;
	scanf("%lf %lf %lf", &number, &valorhoratrabalhada, &salary);
	double valor = valorhoratrabalhada * salary;
	printf("NUMBER = %.0f\nSALARY = U$ %.2f\n", number, valor);

return 0;

}
