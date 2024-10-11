#include <stdio.h>
#include <string.h>

void encrypt(char* data, char key) {
	//data[i] != '\0'�� i < strlen(data)�� ����
	for (int i = 0; data[i] != '\0'; i++) {
		data[i] = data[i] ^ key;
	}
}

void decrypt(char* data, char key) {
	//data[i] != '\0'�� i < strlen(data)�� ����
	for (int i = 0; data[i] != '\0'; i++) {
		data[i] = data[i] ^ key;
	}
}

int main(void) {
	char plaintext[] = "Hanbat NAtional University";
	char key = 'M';

	printf("Original : %s\n", plaintext);

	encrypt(plaintext, key);
	printf("Encrypted : %s\n", plaintext);

	decrypt(plaintext, key);
	printf("Dcrypted : %s\n", plaintext);

	return 0;
}