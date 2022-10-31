#ifndef RAVEN_EXPLORE_GOAL_EVALUATOR
#define RAVEN_EXPLORE_GOAL_EVALUATOR

//-----------------------------------------------------------------------------
//
//  Name:   ExploreGoal_Evaluator.h
//
//
//
//  Desc:  class to calculate how desirable the goal of exploring is
//-----------------------------------------------------------------------------

#include "Goal_Evaluator.h"
#include "../Raven_Bot.h"


class ExploreGoal_Evaluator : public Goal_Evaluator
{ 
public:

  ExploreGoal_Evaluator(double bias):Goal_Evaluator(bias){}
  
  double CalculateDesirability(Raven_Bot* pBot);

  void  SetGoal(Raven_Bot* pEnt);

  void RenderInfo(Vector2D Position, Raven_Bot* pBot);
};

#endif