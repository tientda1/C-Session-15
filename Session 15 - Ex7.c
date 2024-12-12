#include<stdio.h>

int main(){
	char text[]="fjajw@245ff";
	int countCharText = 0;
	int countCharNum = 0;
	int countCharSpecial = 0;
	int length = strlen(text);
	for(int i = 0; i<length; i++){
		if(isalpha(text[i])){
			countCharText++;
		}else if(isdigit(text[i])){
			countCharNum++;
		}else{
			countCharSpecial++;
		}
	}
	printf("So ki tu chu cai la: %d\n", countCharText);
	printf("So ki tu chu so la: %d\n", countCharNum);
	printf("So ki tu dac biet la: %d", countCharSpecial);

	return 0;
}

