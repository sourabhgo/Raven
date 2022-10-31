#ifndef BOLT_H
#define BOLT_H

//-----------------------------------------------------------------------------
//
//  Name:   Bolt.h
//
//  
//
//  Desc:   class to implement a bolt type projectile
//
//-----------------------------------------------------------------------------
#include "Raven_Projectile.h"

class Raven_Bot;



class Bolt : public Raven_Projectile
{
private:

  //tests the trajectory of the shell for an impact
  void TestForImpact();
  
public:

  Bolt(Raven_Bot* shooter, Vector2D target);
  
  void Render();

  void Update();
  
};


#endif