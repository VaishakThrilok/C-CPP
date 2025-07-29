#include<iostream>
using namespace std;

class FizzBuzz{
public: FizzBuzz(uint32_t fizz, uint32_t buzz): fizz_(fizz), buzz_(buzz){}

  virtual void process(uint32_t value){
    cout << value;
    if(isFizz(value))
    cout << "Fizz";
    if(isBuzz(value))
    cout << "Buzz";
  }

protected:
const uint32_t fizz_;
const uint32_t buzz_;

virtual bool isFizz(uint32_t value){
    return fizz_ == value;
}
virtual bool isBuzz(uint32_t value){
    return buzz_== value;
}
};

class FizzBuzz1: public FizzBuzz{
public:
  FizzBuzz1(uint32_t fizz,uint32_t buzz) : FizzBuzz(fizz, buzz){

  }

protected: 
   bool isFizz(uint32_t value) override{
    return value % fizz_ == 0;
   } 
   bool isBuzz(uint32_t value) override{
    return value % buzz_ == 0;
   }
};

class FizzBuzz2 : public FizzBuzz{
public:
    FizzBuzz2(uint32_t fizz, uint32_t buzz, uint32_t target) : FizzBuzz(fizz, buzz), target_(target){

    }

protected:
uint32_t target_;

int countFlips(uint32_t value){
    uint32_t diff = value ^ target_;
    int count =0;
    while(diff){
        count += (diff & 1);
        diff >>= 1;
    }
    return count;
}

bool isFizz(uint32_t value) override{
    return countFlips(value) == fizz_;
}
bool isBuzz(uint32_t value) override{
    return countFlips(value) == buzz_;
}
};

int main(){
    cout << "FizzBuzz\n";

    // FizzBuzz fizzbuzz(2,3);
    // FizzBuzz1 fizzbuzz(2,3);
    FizzBuzz2 fizzbuzz(2,3,4);

    const uint32_t count = 32;
    for(uint32_t i = 1; i<count ; i++){
        fizzbuzz.process(i);
        cout << ",";
    }
    fizzbuzz.process(count);
    cout << "\n Done\n";

    return 0;
}