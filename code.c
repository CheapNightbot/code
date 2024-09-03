#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

// Size of `code` command, including space and NUL
#define CMD_SIZE 6

int main(int argc, char *argv[])
{
    // Check for too many arguments
    if (argc > 2)
    {
        printf("\033[0;31mError\033[0m: expected none or only one argument, but %i were provided.\n", argc - 1);
        printf("Usage: code <file>\n");
        return 1;
    }

    // Check for no argument
    else if (argc == 1)
    {
        // Open VSCode in current directory
        system("code .");
        return 0;
    }

    // Check for argument as current directory (.)
    else if (argc == 2 && strcmp(argv[1], ".") == 0)
    {
        // Open VSCode in current directory
        system("code .");
        return 0;
    }

    struct stat sb;
    if (stat(argv[1], &sb) == -1) {
        perror("stat");
        return 1;
    }

    // Check if the argument is a directory
    else if (argc == 2 && S_ISDIR(sb.st_mode))
    {
        // Pass the folder to (actual) code command as an argument
        char *cmd = malloc(CMD_SIZE + sizeof(argv[1]));
        sprintf(cmd, "code %s", argv[1]);
        system(cmd);
        free(cmd);
        return 0;
    }


    // Create a new file with provided name
    char *filename = argv[1];
    FILE *file = fopen(filename, "a");

    if (file == NULL)
    {
        printf("\033[0;31mError\033[0m: Something went wrong while creating %s\n", filename);
        return 1;
    }

    fclose(file);

    char *cmd = malloc(CMD_SIZE + sizeof(filename));
    sprintf(cmd, "code %s", filename);
    system(cmd);
    free(cmd);

    return 0;
}
