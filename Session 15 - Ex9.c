#include <stdio.h>
void removeCharacter(char str[], char ch) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
int main() {
    char str[100] ,ch;
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);
    removeCharacter(str, ch);
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ch, str);
    return 0;
}

