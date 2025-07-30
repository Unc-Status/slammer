/*slammerplugins.h*/
/*praise the Lord*/

#ifndef __SLAMMER_PLUGINS_H__
#define __SLAMMER_PLUGINS_H__

#include "stdafx.h"

//unzip
bool PluginUncrustify(const char * pPluginFile);

/*editor types*/
struct plane_t {
	int pnts[3];
	vec3_t plnvecs;
	bool plnconcave;
	vec3_t plnnorm;
	//decimal
	double plndist;
};

struct face_t {
	int fpnts[4];
	vec3_t fvecs;
	bool fClamp;
	vec3_t fmidpnt;
	plane_t* pln;
	textool_t* texture;
	int nfSize;//face size
};

struct surface_t {
	bool bReflective;
	int spoints[4];
	face_t* face;
};

struct brush_t {
	int bpoints[8];
	int MAX_POINTS[128];
	textool_t* btexture;
	bool bSplit;
	int bnumid;
	surface_t* bsurface;
	face_t* bface;
	plane_t* bpln;
	int nbSize;//brush size
};

struct polyhederon_t {
	brush_t * polyhederonbrush;
};

struct epair_t {
	const char* key;
	const char* value;
};

//from gtkradiant
struct winding_t {
	int numpoints;
	int maxpoints;
	float points[8][5];
};

#endif