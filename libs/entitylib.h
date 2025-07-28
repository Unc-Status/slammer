//entitylib.h
//Praise be to the Lord Jesus Christ!
/*
  “For God so loved the world, that he gave his only begotten Son, that whosoever believeth in him should not perish, but have everlasting life.” - John 3:16
*/

#ifndef ENTITYLIB_H
#define ENTITYLIB_H

#include "stdafx.h"

typedef struct entity_s{
    vec3_t origin;
    int enumberid;
    bool bSpawn;
    const char* pKey;
    const char* pValue;
    epair_t * entepair;
    const char* model;//if model entity
}entity_t;

#endif
