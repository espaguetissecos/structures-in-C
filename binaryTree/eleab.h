#ifndef ELEAB_H
#define	ELEAB_H

#include <stdio.h>
#include "types.h"

typedef struct _EleAB EleAB;

/* Inicializa un elemento reservando memoria, devolviendo el elemento si lo ha hecho correctamente o NULL si no. */
EleAB* iniEleAB();

/* Establece el valor del campo info */
EleAB* setEleABInfo(EleAB* e, void* p);
EleAB* setEleABInfoAdv(EleAB *e, void* p, int campo);

/* Devuelve el valor del campo info */
void* getEleABInfo(EleAB* e);
void* getEleABInfoAdv(EleAB* e, int campo);

/* Copia el elemento fuente src en el destino dst. Los elementos de entrada son el elemento a copiar y el elemento donde va a ser copiado. Devuelve un puntero al elemento copiado (= la dirección del mismo) o NULL en caso de error. */
EleAB* copyEleAB (EleAB* dst, const EleAB* src);
EleAB* copyEleABDic (EleAB* dst, EleAB* src);

/* Compara dos elementos, devolviendo un número negativo si ele1 < ele2,  un número positivo si ele1>ele2 o cero si ele1==ele2 */
int cmpEleAB (const EleAB* ele1, const EleAB* ele2);

/* Imprime en un fichero ya abierto el elemento y devolverá el número de caracteres escritos. */
int printEleAB (FILE* pf, const EleAB* ele);

/* Elimina un elemento. */
void freeEleAB (EleAB* ele);



#endif
