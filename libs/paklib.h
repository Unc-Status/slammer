/*paklib.h*/
/*praise to the Lord*/

#ifndef __PAKLIB__
#define __PAKLIB__

struct pak_t{
    bool bSet;
    char MAX_PATH[2048];
    const char * pType;
};

//pak is the game type

const char * pakfile;

//message plugin

const char * PAK_PLUGIN_NAME = "Pak Plugin...\n";


#endif