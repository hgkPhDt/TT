/* Arquivo padrão para definir as bibiliotecas
 * e cores padrão ASCII para caso venha a ser usado.*/


#include <stdio.h>
#include <stdlib.h>

//        :::ATRIBUTOS:::
#define BOLD         "\x1B[1m"
#define FAINT        "\x1B[2m"
#define STANDOUT     "\x1B[3m"
#define UNDERLINE    "\x1B[4m"
#define BLINK        "\x1B[5m"
#define REVERSE      "\x1B[7m"
#define HIDDEN       "\x1B[8m"
#define NO_STANDOUT  "\x1B[23m"
#define NO_UNDERLINE "\x1B[24m"
#define NO_BLINK     "\x1B[25m"
#define NO_REVERSE   "\x1B[27m"

//        :::CORES:::
#define BLACK    "\x1B[30m"
#define RED      "\x1B[31m"
#define GREEN    "\x1B[32m"
#define YELLOW   "\x1B[33m"
#define BLUE     "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN     "\x1B[36m"
#define WHITE    "\x1B[37m"
#define RESET    "\x1B[0m"
#define DGRAY_LIGHT      "\x1B[90m"
#define RED_LIGHT        "\x1B[91m"
#define GREEN_LIGHT      "\x1B[92m"
#define YELLOW_LIGHT     "\x1B[93m"
#define BLUE_LIGHT       "\x1B[94m"
#define MAGENTA_LIGHT    "\x1B[95m"
#define CYAN_LIGHT       "\x1B[96m"
#define GRAY_LIGHT       "\x1B[97m"

//        :::BACKGROUND:::
#define BG_BLACK    "\x1B[40m"
#define BG_RED      "\x1B[41m"
#define BG_GREEN    "\x1B[42m"
#define BG_YELLOW   "\x1B[43m"
#define BG_BLUE     "\x1B[44m"
#define BG_MAGENTA  "\x1B[45m"
#define BG_CYAN     "\x1B[46m"
#define BG_WHITE    "\x1B[47m"
#define BG_RESET    "\x1B[0m"
#define BG_DGRAY_LIGHT      "\x1B[100m"
#define BG_RED_LIGHT        "\x1B[101m"
#define BG_GREEN_LIGHT      "\x1B[102m"
#define BG_YELLOW_LIGHT     "\x1B[103m"
#define BG_BLUE_LIGHT       "\x1B[104m"
#define BG_MAGENTA_LIGHT    "\x1B[105m"
#define BG_CYAN_LIGHT       "\x1B[106m"
#define BG_GRAY_LIGHT       "\x1B[107m"

#define DEFAULT_FOREGROUND       "\x1B[39m"
#define DEFAULT_BACKGROUND       "\x1B[49m"