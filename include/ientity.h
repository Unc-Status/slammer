//ientity.h
//Praise be to the Lord Jesus Christ!
/*
  “For God so loved the world, that he gave his only begotten Son, that whosoever believeth in him should not perish, but have everlasting life.” - John 3:16
*/

#ifndef __IENTITY_H__
#define __IENTITY_H__

#include "entitylib.h"

typedef void(*PFN_ENTITY_EPAIR)(entity_t * e, const char * key, const char * value);
typedef entity_t(*PFN_ALLOC_ENTITY)();
typedef void(*PFN_ENTITY_FREE)(entity_t * e);

#endif
