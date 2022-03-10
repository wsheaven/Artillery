#include <cassert>    // for ASSERT
#include <iostream>   // for COUT
#include "projectile.h"
using namespace std;

class ProjectileTest;


/**************************************
*
***************************************/
class Projectile
{
private:
   const double mass = 46.7;
   const double initialVelocity = 827.0;
   const double diameter = 154.89;

   double distance = 0.0;
   double hangTime = 0.0;

public:
   friend ProjectileTest;

   virtual double getDistance(double angle)
   {
      distance = 0.0;
   }

   virtual double getHangTime(double angle)
   {
      hangTime = 0.0;
   }
};

/**************************************
* angle = 45 :  distance = 22655.7, hangTime = 68.0
* angle = 1  :  distance = 1027.7,  hangTime = 109.8
* angle = 89 :  distance = 2090.9,  hangTime = 2.7
* angle = 0  :  distance = 0,       hangTime = 109.8
* angle = 90 :  distance = 0,       hangTime = 0
*
* angle = 180 :  distance = 0, hangTime = 0
* angle = 360 :  distance = 0, hangTime = 109.8
* angle = 720 :  distance = 0, hangTime = 109.8
*
* angle = -45 :  distance = -22655.7, hangTime = 68
* angle = -89 :  distance = -2090.9, hangTime = 2.7
* angle = 5327569 :  distance = -15596.3, hangTime = 33
* angle = -453568 :  distance = 22396.3,  hangTime = 85.6
*
* angle = null    :  distance = 0, hangTime = 0
* angle = X       :  error
* angle = $       :  error
* angle = "text"  :  error
***************************************/
class ProjectileTest : virtual Projectile
{
public:
   void run()
   {
      set_45();
      set_1();
      set_89();
      set_0();
      set_90();
      set_180();
      set_360();
      set_720();
      set_neg45();
      set_neg89();
      set_5327569();
      set_neg453568();
      set_null();
      set_x();
      set_$();
      set_text();
   }
   //no need for constructors or variables for test cases.

private:

   void set_45()//angle = 45 :  distance = 22655.7, hangTime = 68.0
   {
      Projectile p;
      p.distance = 100;
      p.hangTime = 100;
      p.getDistance(45);
      p.getHangTime(45);
      assert(p.distance == 22655.7);
      assert(p.hangTime == 68.0);
   }

   void set_1()//angle = 1  :  distance = 1027.7,  hangTime = 109.8
   {
      Projectile p;
      p.distance = 100;
      p.hangTime = 100;
      p.getDistance(1);
      p.getHangTime(1);
      assert(p.distance == 1027.7);
      assert(p.hangTime == 109.8);
   }

   void set_89()//angle = 89 :  distance = 2090.9,  hangTime = 2.7
   {
      Projectile p;
      p.distance = 100;
      p.hangTime = 100;
      p.getDistance(89);
      p.getHangTime(89);
      assert(p.distance == 2090.9);
      assert(p.hangTime == 2.7);
   }

   void set_0()//angle = 0  :  distance = 0,       hangTime = 109.8
   {
      Projectile p;
      p.distance = 100;
      p.hangTime = 100;
      p.getDistance(0);
      p.getHangTime(0);
      assert(p.distance == 0);
      assert(p.hangTime == 109.8);
   }

   void set_90()//angle = 90 :  distance = 0,       hangTime = 0
   {
      Projectile p;
      p.distance = 100;
      p.hangTime = 100;
      p.getDistance(90);
      p.getHangTime(90);
      assert(p.distance == 0);
      assert(p.hangTime == 0);
   }

   void set_180()//angle = 180 :  distance = 0, hangTime = 0
   {
      Projectile p;
      p.distance = 100;
      p.hangTime = 100;
      p.getDistance(180);
      p.getHangTime(180);
      assert(p.distance == 0);
      assert(p.hangTime == 0);
   }

   void set_360()//angle = 360 :  distance = 0, hangTime = 109.8
   {
      Projectile p;
      p.distance = 100;
      p.hangTime = 100;
      p.getDistance(360);
      p.getHangTime(360);
      assert(p.distance == 0);
      assert(p.hangTime == 109.8);
   }

   void set_720()//angle = 720 :  distance = 0, hangTime = 109.8
   {
      Projectile p;
      p.distance = 100;
      p.hangTime = 100;
      p.getDistance(720);
      p.getHangTime(720);
      assert(p.distance == 0);
      assert(p.hangTime == 109.8);
   }

   void set_neg45()//angle = -45 :  distance = -22655.7, hangTime = 68
   {
      Projectile p;
      p.distance = 100;
      p.hangTime = 100;
      p.getDistance(-45);
      p.getHangTime(-45);
      assert(p.distance == -22655.7);
      assert(p.hangTime == 68);
   }

   void set_neg89()//angle = -89 :  distance = -2090.9, hangTime = 2.7
   {
      Projectile p;
      p.distance = 100;
      p.hangTime = 100;
      p.getDistance(-89);
      p.getHangTime(-89);
      assert(p.distance == -2090.9);
      assert(p.hangTime == 2.7);
   }

   void set_5327569()//angle = 5327569 :  distance = -15596.3, hangTime = 33
   {
      Projectile p;
      p.distance = 100;
      p.hangTime = 100;
      p.getDistance(5327569);
      p.getHangTime(5327569);
      assert(p.distance == -15596.3);
      assert(p.hangTime == 33);
   }

   void set_neg453568()//angle = -453568 :  distance = 22396.3,  hangTime = 85.6
   {
      Projectile p;
      p.distance = 100;
      p.hangTime = 100;
      p.getDistance(-453568);
      p.getHangTime(-453568);
      assert(p.distance == 22396.3);
      assert(p.hangTime == 85.6);
   }

   void set_null()//angle = null    :  distance = -1, hangTime = -1
   {
      Projectile p;
      p.distance = 100;
      p.hangTime = 100;
      p.getDistance(NULL);
      p.getHangTime(NULL);
      assert(p.distance == -1);
      assert(p.hangTime == -1);
   }

   void set_x()//angle = X       :  distance = -1, hangTime = -1:  error
   {
      Projectile p;
      p.distance = 100;
      p.hangTime = 100;
      p.getDistance("X");
      p.getHangTime("X");
      assert(p.distance == -1);
      assert(p.hangTime == -1);
   }

   void set_$()//angle = $       :  distance = -1, hangTime = -1:  error
   {
      Projectile p;
      p.distance = 100;
      p.hangTime = 100;
      p.getDistance("$");
      p.getHangTime("$");
      assert(p.distance == -1);
      assert(p.hangTime == -1);
   }

   void set_text()//angle = "text"  :  distance = -1, hangTime = -1:  error
   {
      Projectile p;
      p.distance = 100;
      p.hangTime = 100;
      p.getDistance("text");
      p.getHangTime("text");
      assert(p.distance == -1);
      assert(p.hangTime == -1);
   }

};



//int main()
//{
//   ProjectileTest test;
//   test.run();
//}