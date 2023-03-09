#include <iostream>
#include <iomanip>

int main(){       
    /*
    int num1 = 15; //Decimal
    int num2 = 017; //Octal
    int num3 = 0x0F; //Hex
    int num4 = 0b00001111; //Binary

    std::cout << "Number 1: " << num1 << std::endl;
    std::cout << "Number 2: " << num2 << std::endl;
    std::cout << "Number 3: " << num3 << std::endl;
    std::cout << "Number 4: " << num4 << std::endl;

    int elephant_count;
    int lion_count{};//Initializes to zero
    int dog_count{10};//Initializes to 10
    int cat_count{15};//Initializes to 15
    int domesticated_animals{dog_count + cat_count};//Use expression as initializer

    //int narrowing_conversion{2.9};

    std::cout << "Elephant count: " << elephant_count << std::endl;
    std::cout << "Lion count: " << lion_count << std::endl;
    std::cout << "Dog count: " << dog_count << std::endl;
    std::cout << "Cat count: " << cat_count << std::endl;
    std::cout << "Domesticated animals: " << domesticated_animals << std::endl;

    
    //Functional initialization
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);
    //Information lost. Less safe than braced initializers
    int narrowing_conversion_functional(2.9);

    std::cout << "Apple count: " << apple_count << std::endl;
    std::cout << "Orange count: " << orange_count << std::endl;
    std::cout << "Fruit count: " << fruit_count << std::endl;
    std::cout << "Narrowing conversion functional: " << narrowing_conversion_functional << std::endl;

    
    //Assignment notation
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9;

    std::cout << "Bike count: " << bike_count << std::endl;
    std::cout << "Truck count: " << truck_count << std::endl;
    std::cout << "Vehicle count: " << vehicle_count << std::endl;
    std::cout << "Narrowing conversion assignment: " << narrowing_conversion_assignment << std::endl;

    //Check the size of memory taken with sizeof
    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl;
    */


//========================================================//

/*
   //Integer modifiers
   signed int value1 {10};
   signed int value2 {-300};

   std::cout << "Value 1: " << value1 << std::endl;
   std::cout << "Value 2: " << value2 << std::endl;
   std::cout << "sizeof value 1: " << sizeof(value1) << std::endl;
   std::cout << "sizeof value 2: " << sizeof(value2) << std::endl;

   unsigned int value3 {4};
   //unsigned int value4 {-5};//Compiler error
   short short_var {-32768};
   short int short_int {405};
   signed short signed_short {122};
   signed short int signed_short_int {-456};
   unsigned short int unsigned_short_int {456};

   int int_var {55};
   signed signed_var {66};
   signed int signed_int{77};
   unsigned int unsigned_int {77};

   long long_var{88};
   long int long_int {33};
   signed long signed_long {44};
   signed long int signed_long_int {44};
   unsigned long int unsigned_long_int {44};

   long long long_long {888};
   long long int long_long_int {999};
   signed long long signed_long_long {444};
   signed long long int signed_long_long_int {1234};
   unsigned long long int unsigned_long_long_int {1234};

    std::cout << "Short variable: " << short_var << ", size: " << sizeof (short) << " bytes" << std::endl;
    std::cout << "Short Int: " << short_int << ", size: " << sizeof (short int) << " bytes" << std::endl;
    std::cout << "Signed short: " << signed_short << ", size: " << sizeof (signed short) << " bytes" << std::endl;
    std::cout << "Signed short int: " << signed_short_int << ", size: " << sizeof (signed short int) << " bytes" << std::endl;
    std::cout << "Unsigned short int: " << unsigned_short_int << ", size: " << sizeof (unsigned short int) << " bytes" << std::endl;
    std::cout << "---------------------------------" << std::endl;

    std::cout << "Int variable: " << int_var << ", size: " << sizeof (int) << " bytes" << std::endl;
    std::cout << "Signed variable: " << signed_var << ", size: " << sizeof (signed) << " bytes" << std::endl;
    std::cout << "Signed int: " << signed_int << ", size: " << sizeof (signed int) << " bytes" << std::endl;    
    std::cout << "Unsigned int: " << unsigned_int << ", size: " << sizeof (unsigned int) << " bytes" << std::endl;
    std::cout << "---------------------------------" << std::endl;

    std::cout << "Long variable: " << long_var << ", size: " << sizeof (long) << " bytes" << std::endl;
    std::cout << "Long Int: " << long_int << ", size: " << sizeof (long int) << " bytes" << std::endl;
    std::cout << "Signed Long: " << signed_long << ", size: " << sizeof (signed long) << " bytes" << std::endl;
    std::cout << "Signed Long int: " << signed_long_int << ", size: " << sizeof (signed long int) << " bytes" << std::endl;
    std::cout << "Unsigned Long int: " << unsigned_long_int << ", size: " << sizeof (unsigned long int) << " bytes" << std::endl;
    std::cout << "---------------------------------" << std::endl;

    std::cout << "Long Long variable: " << long_long << ", size: " << sizeof (long long) << " bytes" << std::endl;
    std::cout << "Long Long Int: " << long_long_int << ", size: " << sizeof (long long int) << " bytes" << std::endl;
    std::cout << "Signed Long Long: " << signed_long_long << ", size: " << sizeof (signed long long) << " bytes" << std::endl;
    std::cout << "Signed Long Long int: " << signed_long_long_int << ", size: " << sizeof (signed long long int) << " bytes" << std::endl;
    std::cout << "Unsigned Long Long int: " << unsigned_long_long_int << ", size: " << sizeof (unsigned long long int) << " bytes" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    */

//======================================================//

//Fractional numbers

    //Fixed notation
    float num1 {1.1234567801234567890f};
    double num2 {1.12345678901234567890};
    long double num3 {1.12345678901234567890L};
    float num4 {192400023.0f};
    num4 = num4 +1;
    
    //Scientific notation
    double num5 {192400023};
    double num6 {1.92400023e8};
    double num7 {1.924e8};
    double num8 {0.00000000003498};
    double num9 {3.498e-11};
    double num10 {5.6};
    double num11 {};
    double num12 {};

    //Infinity
    double result {num10/num11};

    std::cout << "sizeof float: " << sizeof(float) << std::endl;
    std::cout << "sizeof double: " << sizeof(double) << std::endl;
    std::cout << "sizeof long double: " << sizeof(long double) << std::endl;

    //Precision
    std::cout << std::setprecision(20);//Control the precision from std::cout
    std::cout << "num1 is: " << num1 << std::endl;//7 digits
    std::cout << "num2 is: " << num2 << std::endl;//15 digits
    std::cout << "num3 is: " << num3 << std::endl;//15+ digits
    std::cout << "num4 is: " << num4 << std::endl;

    std::cout << "======================================================" << std::endl;

    std::cout << "num5 is: " << num5 << std::endl;
    std::cout << "num6 is: " << num6 << std::endl;
    std::cout << "num7 is: " << num7 << std::endl;
    std::cout << "num8 is: " << num8 << std::endl;
    std::cout << "num9 is: " << num9 << std::endl;

    std::cout << "======================================================" << std::endl;

    std::cout << num10 << "/" << num11 << " yields " << result << std::endl;
    std::cout << result << " + " << num10 << " yields " << result + num10 << std::endl;
    //NaN
    result = num11/num12;
    std::cout << num11 << "/" << num12 << " = " << result << std::endl;

    return 0;
}