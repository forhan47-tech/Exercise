#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) { // Replace punctuation manually
        char ch = str[i];
        if ((ch >= 33 && ch <= 47)  || // ! " # $ % & ' ( ) * + , - . /
            (ch >= 58 && ch <= 64)  || // : ; < = > ? @
            (ch >= 91 && ch <= 96)  || // [ \ ] ^ _ `
            (ch >= 123 && ch <= 126))  // { | } ~
        {
            str[i] = ' ';
        }
    }
 
    printf("\nAfter punctuation replaced:\n%s", str);
    return 0;
}
