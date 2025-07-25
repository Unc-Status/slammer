//node.h
//praise the Lord, he is the true author of my code

#ifndef __NODE_H__
#define __NODE_H__

#include "mathlib.h"

class Node {
public:
  Node();
  virtual ~Node();

  int NodeId = 0;
  int NodeType = nullptr;

  int NodeCount = 0;

  vec3_t NodePosition;

  bool bNodeReset;
};

//pointer
Node NodePtr;
Node * Nde;
#endif
