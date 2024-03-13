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

int main() {
  char sentence[300];

  printf("Введите предложения: ");
  fgets(sentence, sizeof(sentence), stdin);

  int removedCount = removeEvenPositionLetters(sentence);

  printf("Результат после удаления букв на четных позициях: %s\n", sentence);
  printf("Количество удаленных букв: %d\n", removedCount);

  return 0;
}