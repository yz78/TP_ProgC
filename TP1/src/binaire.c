#include <limits.h>
#include <stdio.h>

static void afficher_binaire(unsigned int nombre) {
	unsigned int bit = 1u << (sizeof(unsigned int) * CHAR_BIT - 1);
	int premier_bit = 0;

	for (int i = 0; i < (int)(sizeof(unsigned int) * CHAR_BIT); i++) {
		if ((nombre & bit) != 0u) {
			premier_bit = 1;
		}

		if (premier_bit) {
			putchar((nombre & bit) != 0u ? '1' : '0');
		}

		bit >>= 1;
	}

	if (!premier_bit) {
		putchar('0');
	}
}

int main(void) {
	unsigned int nombres[] = {0u, 4096u, 65536u, 65535u, 1024u};
	int nombre_de_valeurs = (int)(sizeof(nombres) / sizeof(nombres[0]));

	for (int i = 0; i < nombre_de_valeurs; i++) {
		printf("%u en binaire : ", nombres[i]);
		afficher_binaire(nombres[i]);
		putchar('\n');
	}

	return 0;
}
