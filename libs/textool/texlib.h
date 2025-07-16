/*texlib.h*/
/*praise be to the Lord*/

//texlib plugin

#ifndef TEXLIB_H
#define TEXLIB_H

float TEXWIDTH;
float TEXHEIGHT;

//textool...
struct textool_t{
    char TEXTOOL_MAX_PATH[2048];
    const char * pTextureName;
    bool bDetailed;
};

//name
const char * TEXTOOL_PLUGIN_NAME = "TexTool Plugin...\n";

void Init_TextureTool(textool_t* textool, char PATH, const char** pTexture, int nSize);
textool_t* Alloc_TexTool();
void TexTool_SysPrintf(const char* plugin);
const char* Textool_Plugin(textool_t* textool);

//class for init and other stuff...
class TexTool{
public:
    TexTool();
    virtual ~TexTool();

    bool textoolinit();
};

#define TEXTOOL_GUID_TABLE { 0X0DDD0XFF54 }

#endif
