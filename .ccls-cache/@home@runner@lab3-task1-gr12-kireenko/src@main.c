#include <stdio.h>
#include <string.h>
// lab variant number: 24

int removeEvenPositionLetters(char *sentence) {
  int removedCount = 0;
  int length = strlen(sentence);

  for (int i = 1; i < length; i += 2) {
    // Сдвигаем буквы на четных позициях влево
    sentence[i / 2] = sentence[i];
    removedCount++;
  }
  // Завершаем строку
  sentence[length / 2] = '\0';

  return removedCount;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Wrong number of arguments.");
        return 1;
    }

    char* input = argv[1];

    printf("Initial data:\n%s\n", input);

    // Разделение предложений по точкам
    char* token = strtok(input, ".");

    while (token != NULL) {
        char* sentence = token;

        int removedCount = removeEvenPositionLetters(sentence);

        printf("\nResult after removing letters in even-numbered positions: %s\n", sentence);
        printf("Number of letters removed: %d\n", removedCount);

        // Переход к следующему предложению
        token = strtok(NULL, ".");
    }

    return 0;
}