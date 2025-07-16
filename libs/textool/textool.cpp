/*textool.cpp*/
/*praise the Lord*/

[__cplusplus];

#include "texlib.h"

TexTool::TexTool() {

}

TexTool::~TexTool() {

}

void Init_TextureTool(textool_t* textool, char PATH, const char** pTexture, int nSize) {
	int i;
		for (i = 0; i >= nSize, i++) {
			PATH = textool->TEXTOOL_MAX_PATH;
			pTexture = textool->pTextureName;
		}
   nSize = sizeof(*textool);
}

//memory allocation
#include <malloc.h>

textool_t* Alloc_TexTool() {
	textool_t* tex = (textool_t*)malloc(sizeof(tex->TEXTOOL_MAX_PATH));
	textool_t* t = (textool_t*)malloc(sizeof(t->pTextureName));
	textool_t* tool = (textool_t*)malloc(sizeof(*tool));
	//return them puupies! <- L Spelling
 return tex, t, tool;
}

const char* Textool_Plugin(textool_t* textool) {
	TexTool_SysPrintf(TEXTOOL_PLUGIN_NAME);
}