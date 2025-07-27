//ishader.h
//praise be to the Lord Jesus Christ!

#ifndef __ISHADER_H__
#define __ISHADER_H__

#include "shader.h"

float transparency;

typedef void (*SHADER_SET_TRANSPARENT)(shader_t* s, float trns, bool bTrans);
typedef shader_t*(*ALLOC_SHADER)(shader_t* s);
typedef void (*SHADER_FREE)(shader_t* sf);
typedef void (*LOAD_SHADER_DUMP)(char SDump, int SCount);

#endif
