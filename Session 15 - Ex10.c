#include <stdio.h>
void countCharacters(char* str) {
    int count[256] = {0};
    for (int i = 0; str[i]; i++) {
        count[(unsigned char) str[i]]++;
    }
    printf("So lan xuat hien:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i]) {
            printf("%c: %d\n", i, count[i]);
        }
    }
}
int main() {
    char str[100];
    printf("Nhap vao chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    countCharacters(str);
    return 0;
}

