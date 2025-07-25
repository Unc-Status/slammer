//entityw.h
//praise the Lord with all my soul
//he is the true author of this code

#ifndef __ENTITY_W__
#define __ENTITY_W__

class EntityW
{
public:
  EntityW();
  virtual ~EntityW();

  int entityid = nullptr;
  int entitysize = sizeof(EntityW);

  bool entityspawned = nullptr;

  void EntityEpair(EntityW * e, const char * key, const char * value);
  void ConnectEntities(EntityW * e1, EntityW * e2);
  void EntityFree(EntityW * e);
  void AllocEntity();
  void EntityName(EntityW * e);
  void DrawAABBOnEntity(EntityW * e, float mins, float maxs, bool bSpawned);

  float EntityPosition(EntityW * e, float x, float y, float z);

};

#endif
