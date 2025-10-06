#include <stdio.h>
#include <string.h>

int main() {
    int numTasks = 5;
    char tasks[numTasks][50];  // 5 tasks, each up to 49 chars

    // Input tasks
    for (int i = 0; i < numTasks; i++) {
        printf("Enter task %d: ", i + 1);
        fgets(tasks[i], sizeof(tasks[i]), stdin);

        // Remove the newline character added by fgets
        tasks[i][strcspn(tasks[i], "\n")] = '\0';
    }

    // Print tasks
    printf("\nYour To-Do List:\n");
    for (int i = 0; i < numTasks; i++) {
        printf("%d. %s\n", i + 1, tasks[i]);
    }

    return 0;
}
