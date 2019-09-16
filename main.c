#include "input.h"

int main()
{
    char firstString[STRING_MAX] = "Hola ";
    char secondString[51];
    
    input_clearScreen();

    if(!input_getString(secondString, "Ingrese su nombre: ", "Intente nuevamente: ", 2, 51))
    {
        if(!input_concatStrings(firstString, secondString, 100))
        {
            input_pauseScreen(firstString);
        }
    }

    return 0;
}
