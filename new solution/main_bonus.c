#include <fcntl.h>
#include <stdio.h>
#include "get_next_line_bonus.h"

int main(int argc, char **argv)
{
    int fd;
    char *line;
    int line_count = 0;

    if (argc == 1)
    {
        printf("Leyendo de entrada estándar. Escribe algo y presiona Ctrl+D para terminar:\n");
        fd = 0; // `stdin` está representado por el descriptor de archivo 0
    }
    else
    {
        fd = open(argv[1], O_RDONLY);
        if (fd == -1)
        {
            printf("Error al abrir el archivo %s\n", argv[1]);
            return 1;
        }
    }

    // Lee y muestra cada línea
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Línea %d: %s", ++line_count, line);
        free(line);

        // Opción de seguridad para evitar bucles infinitos
        if (line_count > 1000)
        {
            printf("Posible bucle infinito detectado\n");
            break;
        }
    }

    if (line_count == 0)
        printf("No se leyó ninguna línea\n");
    else
        printf("\nTotal de líneas leídas: %d\n", line_count);

    if (argc > 1)
        close(fd);

    return 0;
}
