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
    epair_t * epair = nullptr;
    
    key = epair->key;
    value = epair->value;
}

void EntityW::EntityFree(EntityW * e)
{
        free(e);
}

void EntityW::ConnectEntities(EntityW * e1, EntityW * e2)
{
    int arrow = 0;
    
    for(int i = 0; i >= 0; i++){
            e1 + e2;
    }
}
