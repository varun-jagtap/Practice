#include <stdio.h>
#include <string.h>

#define MAX_FILES 20
#define NAME_LENGTH 50

typedef struct {
  char name[NAME_LENGTH];
  int sizeKB;
} File;

File directory[MAX_FILES];
int fileCount = 0;

/* Return the matching index, or -1 if the file is absent. */
int findFile(const char *name) {
  for (int i = 0; i < fileCount; i++) {
    if (strcmp(directory[i].name, name) == 0) {
      return i;
    }
  }

  return -1;
}

/* Discard remaining characters on the current input line. */
void clearInput(void) {
  int ch;

  while ((ch = getchar()) != '\n' && ch != EOF) {
    /* Discard input. */
  }
}

void createFile(void) {
  char name[NAME_LENGTH];
  int size;

  if (fileCount == MAX_FILES) {
    printf("Directory is full. Cannot create another file.\n");
    return;
  }

  printf("Enter filename (no spaces, maximum 49 characters): ");
  if (scanf("%49s", name) != 1) {
    printf("Unable to read filename.\n");
    return;
  }
  clearInput();

  if (findFile(name) != -1) {
    printf("A file with this name already exists.\n");
    return;
  }

  printf("Enter file size in KB: ");
  if (scanf("%d", &size) != 1) {
    clearInput();
    printf("Invalid file size.\n");
    return;
  }
  clearInput();

  if (size < 0) {
    printf("File size cannot be negative.\n");
    return;
  }

  strcpy(directory[fileCount].name, name);
  directory[fileCount].sizeKB = size;
  fileCount++;

  printf("File created successfully.\n");
}

void deleteFile(void) {
  char name[NAME_LENGTH];

  printf("Enter filename to delete: ");
  if (scanf("%49s", name) != 1) {
    printf("Unable to read filename.\n");
    return;
  }
  clearInput();

  int index = findFile(name);

  if (index == -1) {
    printf("File not found.\n");
    return;
  }

  /* Shift records to close the gap left by deletion. */
  for (int i = index; i < fileCount - 1; i++) {
    directory[i] = directory[i + 1];
  }

  fileCount--;
  printf("File deleted successfully.\n");
}

void searchFile(void) {
  char name[NAME_LENGTH];

  printf("Enter filename to search: ");
  if (scanf("%49s", name) != 1) {
    printf("Unable to read filename.\n");
    return;
  }
  clearInput();

  int index = findFile(name);

  if (index == -1) {
    printf("File not found.\n");
  } else {
    printf("File found.\n");
    printf("Filename: %s\n", directory[index].name);
    printf("Size: %d KB\n", directory[index].sizeKB);
  }
}

void displayFiles(void) {
  if (fileCount == 0) {
    printf("Directory is empty.\n");
    return;
  }

  printf("\n%-6s %-25s %s\n", "Sr.No.", "Filename", "Size (KB)");

  for (int i = 0; i < fileCount; i++) {
    printf("%-6d %-25s %d\n", i + 1, directory[i].name, directory[i].sizeKB);
  }

  printf("Total files: %d\n", fileCount);
}

int main(void) {
  int choice;

  while (1) {
    printf("\n--- SIMPLE FILE SYSTEM SIMULATION ---\n");
    printf("1. Create File\n");
    printf("2. Delete File\n");
    printf("3. Search File\n");
    printf("4. Display Files\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");

    int status = scanf("%d", &choice);

    if (status == EOF) {
      printf("\nExiting simulation.\n");
      break;
    }

    if (status != 1) {
      clearInput();
      printf("Invalid input. Enter a number from 1 to 5.\n");
      continue;
    }
    clearInput();

    switch (choice) {
    case 1:
      createFile();
      break;

    case 2:
      deleteFile();
      break;

    case 3:
      searchFile();
      break;

    case 4:
      displayFiles();
      break;

    case 5:
      printf("Exiting simulation.\n");
      return 0;

    default:
      printf("Invalid choice. Select 1 to 5.\n");
    }
  }

  return 0;
}
