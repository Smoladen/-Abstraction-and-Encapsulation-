#include <iostream>
#include <fstream>
#include <string>

class Adress{

private:
    std::string city;
    std::string street;
    int house;
    int apartment;
public:

    std::string getAdress(std::string city, std::string street, int house, int apartment){
        this->city = city;
        this->street = street;
        this->house = house;
        this->apartment = apartment;
        return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(apartment);
    }

};

int main() {
    int numOfAdresses;
    std::string city;
    std::string street;
    int house;
    int apartment;
    Adress adress;

    std::ifstream read("/home/denis/Рабочий стол/Git Homework/Homework Abstraction and Encapsulation/01/in.txt");
    std::ofstream write("/home/denis/Рабочий стол/Git Homework/Homework Abstraction and Encapsulation/01/out.txt");
    read >> numOfAdresses;

    std::string* arr = new std::string[numOfAdresses];

    write << numOfAdresses;

    for(int i = 0; i < numOfAdresses; i++){
        read >> city >> street >> house >> apartment;
        arr[i] = adress.getAdress(city,street,house,apartment);
    }

    // for(int i = 0; i < numOfAdresses; i++){
    //   write << arr[i] << std::endl;
    // }

    for(int i = numOfAdresses; i > 0; i--){
        write << std::endl << arr[i-1];
    }

    delete[] arr;
    return 0;
}
