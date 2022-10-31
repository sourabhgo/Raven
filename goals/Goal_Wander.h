#ifndef GOAL_WANDER_H
#define GOAL_WANDER_H

//-----------------------------------------------------------------------------
//
//  Name:   Goal_Wander.h
//
//
//
//  Desc:   Causes a bot to wander until terminated
//-----------------------------------------------------------------------------
#include "Goals/Goal.h"
#include "Raven_Goal_Types.h"
#include "../Raven_Bot.h"


class Goal_Wander : public Goal<Raven_Bot>
{
private:

public:

  Goal_Wander(Raven_Bot* pBot):Goal<Raven_Bot>(pBot,goal_wander)
  {}

  void Activate();

  int  Process();

  void Terminate();
};





#endif
