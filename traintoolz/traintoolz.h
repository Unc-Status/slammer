//traintoolz.h
//Praise be to the Lord Jesus Christ, he who believes in him shall not perish but have eternal life - john 3:16

#ifndef __TRAINTOOLZ_H__
#define __TRAINTOOLZ_H__

#include "stdafx.h"

class CTrainToolz
{
public:
    CTrainToolz();
    virtual ~CTrainToolz();
  
    vec3_t position;
  
    vec3_t x;
    vec3_t y;
    vec3_t z;

    int trntlznumberid;
  
    bool bSpawned;
    bool bUniversal;
  
    //load train
    void LoadTrainModel(CTrainToolz* toolz, float pos[4], bool bSpwned, const char* mdlFile, epair_t * pKey, epair_t * pValue);
}

#endif
