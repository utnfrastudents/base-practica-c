#include "menu.h"

int menu_main(int* option)
{
    int returnValue = ERROR;
    char structName[PERSONS_MAX];

    strcpy(structName, PERSON_STRUCT);

    inputs_clearScreen();

    printf("=======================================================\n");
    printf("             MENU PRINCIPAL DE %s\n", arrays_stringToUppercase(structName, PERSON_NAME_MAX));
    printf("=======================================================\n");
    printf("    1 - Alta de %s\n", arrays_stringToCamelCase(structName, PERSON_NAME_MAX));
    printf("    2 - Modificar %s\n", arrays_stringToCamelCase(structName, PERSON_NAME_MAX));
    printf("    3 - Baja de %s\n", arrays_stringToCamelCase(structName, PERSON_NAME_MAX));
    printf("    4 - Informes de %s\n", arrays_stringToCamelCase(structName, PERSON_NAME_MAX));
    printf("    5 - Salir\n");
    printf("=======================================================\n");

    if(!inputs_getInt(option, "Elija una opcion del menu: ",
        "Opcion incorrecta, ingrese nuevamente: ", OPTION_MIN, MAIN_MAX))
    {
        returnValue = OK;
    }

    return returnValue;
}

int menu_update(int* option)
{
    int returnValue = ERROR;
    char structPersonName[PERSONS_MAX];
    char structEntityName[ENTITY_NAME_MAX];

    strcpy(structPersonName, PERSON_STRUCT);
    strcpy(structEntityName, ENTITY_STRUCT);

    inputs_clearScreen();

    printf("=======================================================\n");
    printf("                MODIFICAR %s\n", arrays_stringToUppercase(structPersonName, PERSON_NAME_MAX));
    printf("=======================================================\n");
    printf("    1 - Modificar el Nombre\n");
    printf("    2 - Modificar el Apellido\n");
    printf("    3 - Modificar la %s\n", arrays_stringToCamelCase(structEntityName, ENTITY_NAME_MAX));
    printf("    4 - Volver al menu principal\n");
    printf("=======================================================\n");

    if(!inputs_getInt(option, "Elija una opcion del menu: ",
        "Opcion incorrecta, ingrese nuevamente: ", OPTION_MIN, UPDATE_MAX))
    {
        returnValue = OK;
    }

    return returnValue;
}
