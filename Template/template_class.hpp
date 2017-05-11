//header file for main.cpp

#include<iostream>

//The class accepts strings, 
//so we need to use namespace
using namespace std;

//tell compiler this class uses a generic value
template <class T>
class StudentRecord
{
private:
  const int size = 5;
  T grade;
  int studentId;
public:
  StudentRecord(T input);
  void setId(int idIn);
  void printGrades();
};

template<class T>
StudentRecord<T>::StudentRecord(T input)
{
  grade=input;
}

template<class T>
void StudentRecord<T>::setId(int idIn)
{
  studentId = idIn;
}

template<class T>
void StudentRecord<T>::printGrades()
{
  cout<<"ID# "<<studentId<<": ";
  cout<<grade<<"\n ";
  cout<<"\n";
}

// new class
template <class T>
class Multiplier{

private:
  T var1;
  T var2;
  T product;

public:
  Multiplier();
  // accessor (change the private variable by class member function)
  void setM1(T input1){
    var1 = input1;
  }
  // accessor
  void setM2(T input2){
    var2 = input2;
  }
  // accessor
  void setProduct(){
    product = var1 * var2;
  }

  T getProduct(){
    return product;
  }

  // prototype declaration
  T getvar1();
  T getvar2();
  
  void printEquation(){
    cout<<var1<<" x ";
    cout<<var2<<" = ";
    cout<<product<<"\n";
  }  
};  

template<class T>
T Multiplier<T>::getvar1(){
  return var1;
}

template<class T>
T Multiplier<T>::getvar2(){
  return var2;
}

template<class T>
Multiplier<T>::Multiplier(){
  // var1 = 0;
  // var2 = 0;
  // product = 0.15;
}
  
