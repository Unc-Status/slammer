/*bckgrndtoolz.h*/
/*praise the Lord*/

#ifndef __BCKGRNDTOOLZ_H__
#define __BCKGRNDTOOLZ_H__

//bckgrnd init class
class BCKGRNDTOOLZ {
public:
	BCKGRNDTOOLZ();
	virtual ~BCKGRNDTOOLZ();
};

/*actual background tool*/
class BckGrndTool {
public:
	BckGrndTool();
	virtual ~BckGrndTool();

	int m_nBckgrndRow;
	int m_nBckgrndColumn;

	bool m_bResetBckgrnd;

	float m_fBckgrndColor;
	float m_fBckgrndMaxCoord[3] = { 10000.0f, 10000.0f, 10000.0f };
	float m_fBckgrndMinCoord[3] = { 0.0f, 0.0f, 0.0f };

	bool m_bBckgrndZoomIn();
	bool m_bBckgrndZoomOut();
	
	const char* m_cBckgrndText;

	void m_BckgrndDrawBrushes(void* pBrush);
	void m_BckgrndDrawEntities(void*& pEntities);

};

#endif