
#include <iostream>
using namespace std;


template <class T>
class Number {
   private:
   
    T num1;
    T num2;

   public:
    Number(T n1, T n2){
}
    T getNum() {
        return num1;
    }
};

int main524{

   
    Number<int> numberInt(7,8);

  
    Number<double> numberDouble(7.7,8.2);

    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;

    return 0;
}
