//header file for main.cpp
/*TODO: 
*-  create a class called Pet
*- it inherits from both the class Patient 
*- and the class Dog
*- Pet has one private member: name
*- Pet has public getName and setName functions.
*/
#include<iostream>
#include<string>

using namespace std;

class Patient
{
    private:
        int idNumber;
    public:
        void setIdNumber(int idIn);
        int getIdNumber();
};

void Patient::setIdNumber(int idIn)
{
    idNumber = idIn;
}

int Patient::getIdNumber()
{
    return idNumber;
}

class Dog
{
    private:
        string Breed;
    public:
        void setBreed(string breedIn);
        string getBreed();
};

void Dog::setBreed(string breedIn)
{
    Breed = breedIn;
}

string Dog::getBreed()
{
    string breed;
}

class Pet : public Patient, public Dog{
private:
  string name;
public:
  void setName(string nameIn){
    name = nameIn;
  }
  string getName(){
    return name;
  }  
};
