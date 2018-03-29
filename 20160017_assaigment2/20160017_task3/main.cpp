// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: 20160017_assaigment2_task3.cpp
// Author1 and ID and Group: Ahmed Abed Ahmed , 20160017 , group 5
// Teaching Assistant: TA'S for Group 5,6
// Purpose the sphere will sink or float in water
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
   float y = 62.4 ;
   double radius , weight ;
   double volume = (4/3)*(M_PI)*(pow(radius,3));/* M_PI = 3.14 */
   double FB = volume * y ;
   cout << "please Enter the Weight\n" ;
   cin >> weight ;
   cout << "please Enter  then Radius \n";
   cin >>  radius  ;


   if (FB>=weight)
    cout << "The sphere will float";
   else
    cout << "the sphere will shrink";

    return 0;
}
