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

void sort(std::string* arr, int size){
    int letter = 0;
    for(int i = 0; i < size - 1 ; i++){
        for (int j = i + 1; j < size; j++){
            letter = 0;
            if (arr[i] != arr[j]){
                while (arr[i][letter] == arr[j][letter])
                    letter++;
                if (arr[i][letter] < arr[j][letter]) {
                    std::string temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

int main() {
    int numOfAdresses;
    std::string city;
    std::string street;
    int house;
    int apartment;
    Adress adress;

    std::ifstream read("/home/denis/Рабочий стол/Git Homework/Homework Abstraction and Encapsulation/02/in.txt");
    std::ofstream write("/home/denis/Рабочий стол/Git Homework/Homework Abstraction and Encapsulation/02/out.txt");
    read >> numOfAdresses;

    std::string* arr = new std::string[numOfAdresses];

    write << numOfAdresses;

    for(int i = 0; i < numOfAdresses; i++){
        read >> city >> street >> house >> apartment;
        arr[i] = adress.getAdress(city,street,house,apartment);
    }

    sort(arr, numOfAdresses);

    for(int i = numOfAdresses; i > 0; i--){
        write << std::endl << arr[i-1];
    }

    delete[] arr;
    return 0;
}
