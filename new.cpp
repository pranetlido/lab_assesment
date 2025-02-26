#include <iostream> 
using namespace std ;

class billamt{
private: 
    int total_bill = 0;
    int paidbill = 0;

public: 
    billamt(){
        total_bill = 0 ;
        paidbill = 0 ;


    }
    billamt(int bill , int paidamt){
        total_bill = bill;
        paidbill = paidamt;

    }
    void display(){
        cout<< paidbill << "\n";
        cout << total_bill<< "\n";
        if (paidbill == 0 ){
            cout<< "zero bill";
        }
        if (paidbill == total_bill){
            cout << "amount paid\n";
        }
        else{
            cout<< "unpaid\n";
        }
    }


};

int main(){
    billamt obj1 ;
    billamt obj2(100 , 200) ; 
    obj1.display();
    obj2.display();
    return 0 ;

}