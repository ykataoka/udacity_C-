#include <iostream>

using namespace std;

class Cats{
  string name;
  string breed;
  int age;
  
public:
  Cats();
  void setName(string newName);
  void setBreed(string newBreed);
  void setAge(int newAge);
  string getName();
  string getBreed();
  int getAge();
  void printInfo();
};

// constuctor ClassNAME::ClassName(){hogehoge}
// DO NOT FORGET add Constuctor in public method.
Cats::Cats()
{
    cout<<"Assigning inital values in the constructor\n";
    name = "Unknown";
    breed = "Unknown"; //the initial value of the breed
    age = 99; //the initial value of the age
}

void Cats::setName(string newName){
  name = newName;
}

void Cats::setBreed(string newBreed){
  breed = newBreed;
}

void Cats::setAge(int newAge){
  age = newAge;
}

string Cats::getName(){
  return name;
}

string Cats::getBreed(){
  return breed;
}

int Cats::getAge(){
  return age;
}

void Cats::printInfo(){
  cout<<name<<" "<<breed<<" "<<age<<"\n";
}


int main(){
  Cats cat1, cat2;

  cat1.printInfo();
  cat2.printInfo();
  
  cat1.setName("tama");
  cat1.setBreed("tigercat");
  cat1.setAge(20);
  cat1.printInfo();
  
  cat2.setName("Pochi");
  cat2.setBreed("dogcat");
  cat2.setAge(100);
  cat2.printInfo();
  
  return 0;
}
