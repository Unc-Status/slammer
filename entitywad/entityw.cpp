//entityw.cpp
//praise the Lord, he is the true author of my code

#include "entityw.h"
#include "slammerplugins.h"

int g_EntityId = 0;
bool g_EntitySpawned;

EntityW g_EntityClpbrd;

EntityW::EntityW()
{
    g_EntityId = 0;
    g_EntitySpawned = true;
}

EntityW::~EntityW()
{

}

void EntityW::AllocEntity()
{
    EntityW * e = (EntityW*)malloc(sizeof(EntityW));
}

void EntityW::EntityEpair(EntityW * e, const char * key, const char * value)
{
    
}
