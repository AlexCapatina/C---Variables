#include <iostream>

int main(){       
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

    return 0;
}