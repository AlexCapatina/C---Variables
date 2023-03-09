//This brings in the iostream library
#include <iostream>
#include <string>

int addNumbers(int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}

int multiplyNumbers(int first_param, int second_param){
    int result = first_param * second_param;
    return result;
}

int main(){   
    int first_number {3}; //Staement
    int second_number {7};

    std::cout << "First number: " << first_number << std::endl;
    std::cout << "Second number: " << second_number << std::endl;    

    int sum = first_number + second_number;
    std::cout << "Sum 1: " << sum << std::endl;

    sum = addNumbers(12, 13);
    std::cout << "Sum 2: " << sum << std::endl;

    sum = addNumbers(12, 14);
    std::cout << "Sum 3: " << sum << std::endl;

    std::cout << "Sum 4: " << addNumbers(14, 16) << std::endl;

    std::cout << "Multiplication 1: " << multiplyNumbers(4,5) << std::endl;    

    //Input and Output
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << "Hello C++20" << std::endl;

    int age{21};
    std::cout << "Age: " << age << std::endl;

    std::cerr << "Error message" << std::endl;
    std::clog << "Log message" << std::endl;

    int age1;
    std::string name;
    std::cout << "Please type your name and age: " << std::endl;

    std::cin >> name;//cin to take inputs
    std::cin >> age1;
    std::cin >> name >> age1;//one line for multiple inputs

    std::cout << "Hello " << name << ", your are " << age1 << " years old!" << std::endl;

    //Data with space
    std::string full_name;
    int age2;

    std::cout << "Please type your full name and your age:" << std::endl;
    std::getline(std::cin, full_name);
    std::cin >> age2;
    std::cout << "Hello " << full_name << ", your are " << age2 << " years old!" << std::endl;

    return 0;
}