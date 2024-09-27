/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct below your plain-english UDT. i.e.:

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#if false //ignore these #if #endif lines. they're just here to prevent compiler errors.
struct CarWash
{

};
#endif
/*
    - Do this for all 10 UDTs

2) Below your plain-english UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
    - Do this for all 10 UDTs
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - Do this for all 10 UDTs
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
    if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar(Car car); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior(Car car);
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


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
struct Cafe {
    // number of baristas (int)
    int baristas = 1;
    // number of pour over stations (int)
    int pourOverStations = 1;
    // number of croissants (int)
    int croissants = 1;
    // time it takes to pull a shot (int)
    int shotTime = 1;
    // amount of cream (float)
    float cream = 1.06f;
    
    // make a pour over
    int makePourOver(int coffeeType);
    // give a croissant
    int giveCroissant();
    // make a latte
    int makeLatte(int shotNum, float cupsOfCream);
};

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
struct Motorcycle {
    // amount of tire pressure (float)
    float tirePressure = 50.0f;
    // amount of gasoline (float)
    float gas = 0.0f;
    // radio volume (float)
    float radioVolume = 0.0f;
    // radio station (float)
    float station = 0.0f;
    // amount of engine oil (float)
    float oil = 2.0f;

    // accelerate
    float accelerate(float amount);
    // break
    float useBreak(float amount);
    // pop a wheelie
    float popWheelie(int duration);
};
/*
Thing 3) Oven
5 properties:
    1) temperature (float)
    2) height of rack (int)
    3) oven setting (broil, bake) (std::string)
    4) timer setting (on, off) (int)
    5) timer duration (int)
3 things it can do:
    1) change rack height
    2) turn on/off oven
    3) turn on/off timer
 */
struct Oven {
    // temperature (float)
    float temperature = 70.0;
    // height of rack (int)
    float rackHeight = 2;
    // oven setting (broil, bake) (std::string)
    std::string setting = "bake";
    // timer setting (on, off) (int)
    int timer = 0;
    // timer duration (int)
    int timerDuration = 0;

    // change rack height
    int changeRackHeight(int offset);
    // turn on/off oven
    int toggleOven();
    // turn on/off timer
    int toggleTimer();
};
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
