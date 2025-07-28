//caulk.h
//Praise be to the Lord Jesus Christ, whoever believes in him shall not perish but have eternal life - john 3:16

#ifndef __CAULK_H__
#define __CAULK_H__

typedef struct caulk_s{
      const char* CaulkShader = "Caulk.png";
      bool bDetailed;
      //NOTE : some brushes for certain games may not be caulkable
      bool bCaulkable;
}caulk_t;

#endif
