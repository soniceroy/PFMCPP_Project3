/*
Project 3 - Part 1d / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3. 
Part1 will be broken up into 5 separate steps 
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives and std::string. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine`
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
        Remember to pick properties that can be represented with 'int float double bool char std::string'
2) write the name of the primitive type you'll be using after each property
    pick properties that can be represented with 'int float double bool char std::string'
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            width in cm (int)
            height in cm (int)

3) move Thing 5-9 to between your Thing 4 and Thing 10.
*/

/*
Thing 1) Cafe
5 properties:
    1) number of baristas (int)
    2) number of pour over stations (int)
    3) number of croissants (int)
    4) time it takes to pull a shot (int)
    5) amount of cream (float)
3 things it can do:
    1) make a pour over
    2) give a croissant
    3) make a latte
 */

/*
Thing 2) Motorcycle
5 properties:
    1) amount of tire pressure (float)
    2) amount of gasoline (float)
    3) radio volume (float)
    4) radio station (float)
    5) amount of engine oil (float)
3 things it can do:
    1) accelerate
    2) break
    3) pop a wheelie
 */

/*
Thing 3) Oven
5 properties:
    1) temperature (float)
    2) height of rack (int)
    3) oven setting (broil, bake) (int)
    4) timer setting (on, off) (int)
    5) timer duration (int)
3 things it can do:
    1) change rack height
    2) turn on/off oven
    3) turn on/off timer
 */

/*
Thing 4) Ship
5 properties:
    1) rudder angle (float)
    2) sail setting (up/down) (int)
    3) sail angle (float)
    4) anchor setting (up/down) (int)
    5) engine speed (float)
3 things it can do:
    1) turn rudder
    2) turn sail
    3) raise/lower anchor
 */

/*
Thing 5) Buffet
5 properties:
    1) current soup choice (std::string)
    2) slices of pizza (int)
    3) pieces of ribs (int)
    4) number of plates (int)
    5) amount of grime (float)

3 things it can do:
    1) stock food (pizza or ribs)
    2) stock plates 
    3) repell customers if it gets to grimey
 */

/*
Thing 6) Waiting Staff
5 properties:
    1) amount of staff (int)
    2) amount of pep aka flare (float)
    3) amount of soda syrup (float)
    4) amount of co2 for the soda (float) 
    5) number of clean cups
3 things it can do:
    1) take a break (stocks up on pep/flare)
    2) serve soda
    3) stock soda and co2
 */

/*
Thing 7) Tables
5 properties:
    1) number of chairs (int)
    2) percentage of full drinks (int)
    3) number of dirty plates
    4) drink capacity e.g. # of empty drinks derived from drinkCapacity - fullDrinks (int)
    5) number of napkins
3 things it can do:
    1) seat people
    2) replenish napkins (via unmentioned bus boys)
    3) apply repellence to customers if not kept clean
 */

/*
Thing 8) Cleaning Staff
5 properties:
    1) number of dirty plates (int)
    2) number of dirty cups (int)
    3) number of spent napkins (int)
    4) number of staff (int)
    5) amount of rib sauce (float)
3 things it can do:
    1) clean plates
    2) clean cups
    3) dispose of napkins
 */

/*
Thing 9) Front of House
5 properties:
    1) incoming customers (int)
    2) current jukebox song (std::string)
    3) number of seating staff (int)
    4) front of house grime (float)
    5) amount of bubble gum in bubble gum machine (int)
3 things it can do:
    1) serve bubble gum
    2) seat people
    3) repell people if front of house grime is too high
 */
/*
Thing 10) Restaurant
5 properties:
    1) Buffet
    2) Waiting Staff
    3) Tables
    4) Kitchen Staff
    5) Front of House
3 things it can do:
    1) seat parties
    2) serve food
    3) cook food
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
