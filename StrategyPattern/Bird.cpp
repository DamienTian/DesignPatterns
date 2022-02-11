#include "Bird.h"

Bird::Bird()
{
    setSound("Tweet");
    setFlyingAbility(new ItFly());
}

Bird::~Bird()
{

}