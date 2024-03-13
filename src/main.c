#include <stdio.h>
#include <string.h>

int removeEvenPositionLetters(char *sentence) {
    int removedCount = 0;
    int length = strlen(sentence);

    for (int i = 1; i < length; i += 2) {
        sentence[i / 2] = sentence[i];
        removedCount++;
    }

    sentence[length / 2] = '\0';

    return removedCount;
}

int main() {
    char sentence[300];

    printf("Введите предложения: ");
    fgets(sentence, sizeof(sentence), stdin);

    int removedCount = removeEvenPositionLetters(sentence);

    printf("Результат после удаления букв на четных позициях: %s\n", sentence);
    printf("Количество удаленных букв: %d\n", removedCount);

    return 0;
}