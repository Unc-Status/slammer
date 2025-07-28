//caulk.h
//Praise be to the Lord Jesus Christ, whoever believes in him shall not perish but have eternal life - john 3:16

#ifndef __CAULK_H__
#define __CAULK_H__

#include "stdafx.h"

typedef struct caulk_s{
      const char* CaulkShader = "Caulk.png";
      bool bDetailed;
      //NOTE : some brushes for certain games may not be caulkable
      bool bCaulkable;
      int shaderflagsid;

      brush_t* CaulkBrush;
}caulk_t;

#endif
