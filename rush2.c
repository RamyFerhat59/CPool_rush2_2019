/*
** EPITECH PROJECT, 2019
** rush2-1.c
** File description:
** rush2-1.c
*/

#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int count = 0;

    for ( int b = 2; b < argc; b++) {
        if (my_strlen(argv[1]) < 2 || my_strlen(argv[b]) > 1) {
          write(2, "Invalid\n", 8);
          return (84);
      }
    }
    for (int c = 2; c < argc; c++) {
        for (int j = 0; j < my_strlen(argv[1]); j++) {
            if (argv[1][j] == argv[c][0] || argv[1][j] + 32 == argv[c][0] || argv[1][j] - 32 == argv[c][0])
            count++;
        }
    my_putchar(argv[c][0]);
    my_putchar(':');
    my_put_nbr(count);
    my_putchar('\n');
    count = 0;
    }
    return 0;
}
