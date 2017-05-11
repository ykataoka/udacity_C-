#include <iostream>
#include <string>
using namespace std;

class Flower
{
private:
  string bloomTime;
public:
  Flower();
  void setBloomTime(string bloomIn);
  string getBloomTime();
};
  
Flower::Flower()
{
  bloomTime = "spring";
}

void Flower::setBloomTime(string bloomIn)
{
  bloomTime = bloomIn;
}

string Flower::getBloomTime()
{
  return bloomTime;
}

class Rose : public Flower
{
    private:
        string fragrance;
    public:
        Rose();
        void setFragrance(string fragIn);
        string getFragrance();
};

Rose::Rose()
{
  //TODO: complete the constructor
  fragrance = "None";
}

void Rose::setFragrance(string fragIn)
{
  fragrance = fragIn;
}

string Rose::getFragrance()
{
  //TODO: Complete the function
  return fragrance;
}

