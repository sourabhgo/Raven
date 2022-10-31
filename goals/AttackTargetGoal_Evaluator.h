#ifndef RAVEN_ATTACK_GOAL_EVALUATOR
#define RAVEN_ATTACK_GOAL_EVALUATOR

//-----------------------------------------------------------------------------
//
//  Name:   AttackTargetGoal_Evaluator.h
//
//
//
//  Desc:  class to calculate how desirable the goal of attacking the bot's
//         current target is
//-----------------------------------------------------------------------------

#include "Goal_Evaluator.h"
#include "../Raven_Bot.h"


class AttackTargetGoal_Evaluator : public Goal_Evaluator
{ 
public:

  AttackTargetGoal_Evaluator(double bias):Goal_Evaluator(bias){}
  
  double CalculateDesirability(Raven_Bot* pBot);

  void  SetGoal(Raven_Bot* pEnt);

  void RenderInfo(Vector2D Position, Raven_Bot* pBot);
};



#endif