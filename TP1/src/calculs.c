/* Exercice 1.8 : sélectionner une opération arithmétique ou binaire. */
#include <stdio.h>

int main(void) {
	int num1 = 12;
	int num2 = 5;
	char op = '+';

	switch (op) {
		case '+':
			printf("%d + %d = %d\n", num1, num2, num1 + num2);
			break;
		case '-':
			printf("%d - %d = %d\n", num1, num2, num1 - num2);
			break;
		case '*':
			printf("%d * %d = %d\n", num1, num2, num1 * num2);
			break;
		case '/':
			if (num2 == 0) {
				printf("Division par zero impossible.\n");
			} else {
				printf("%d / %d = %d\n", num1, num2, num1 / num2);
			}
			break;
		case '%':
			if (num2 == 0) {
				printf("Modulo par zero impossible.\n");
			} else {
				printf("%d %% %d = %d\n", num1, num2, num1 % num2);
			}
			break;
		case '&':
			printf("%d & %d = %d\n", num1, num2, num1 & num2);
			break;
		case '|':
			printf("%d | %d = %d\n", num1, num2, num1 | num2);
			break;
		case '~':
			printf("~%d = %d\n", num1, ~num1);
			break;
		default:
			printf("Operateur inconnu : %c\n", op);
			return 1;
	}

	return 0;
}

