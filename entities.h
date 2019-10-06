#ifndef ENTITY_H_INCLUDED
#define ENTITY_H_INCLUDED

#include "menu.h"

#define ID_INIT_ENTITY 10 /**< Valor inicial de un ID de tipo Entidad. >*/

/** \brief Funcion para generar un nuevo ID de estructura de tipo Entidad.
 *
 * \param void No requiere parametros.
 * \return int
 *      Nuevo ID incremental para cada ID de tipo Entidad.
 *
 */
int entities_getNewId(void);

/** \brief Funcion que blanquea todas las posiciones de un arreglo de Entidad
 *          colocando la bandera isEmpty en TRUE.
 * 
 * \param list[] sEntity Direccion de memoria del inicio del arreglo de tipo Entidad.
 * \param length int Longitud del array.
 * \return int
 *      [-1] Si hubo un error.
 *      [0] Si la inicializacion de todas sus posiciones fue realizada con exito.
 *
 */
int entities_init(sEntity list[], int length);

/** \brief Funcion que carga valores de muestra a un arreglo de tipo Entidad
 *      dependiendo de la cantidad definida como parametro.
 *
 * \param list[] sEntity Direccion de memoria del inicio del arreglo de tipo Entidad.
 * \param length int Longitud del array.
 * \param quantity unt Cantidad de valores a cargar en el arreglo.
 * \return void No retorna valores.
 *
 */
void entities_hardcode(sEntity list[], int length, int quantity);

#endif // ENTITY_H_INCLUDED