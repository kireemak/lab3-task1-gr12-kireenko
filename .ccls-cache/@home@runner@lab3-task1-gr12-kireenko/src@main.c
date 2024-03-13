#include <stdio.h>

int removeEvenPositionLetters(char* sentence);

int main() {
    char sentence[300];

    printf("Введите предложения: ");
    fgets(sentence, sizeof(sentence), stdin);

    int removedCount = removeEvenPositionLetters(sentence);

    printf("Результат после удаления букв на четных позициях: %s\n", sentence);
    printf("Количество удаленных букв: %d\n", removedCount);

    return 0;
}