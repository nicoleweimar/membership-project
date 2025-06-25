#ifndef COSTCOMEMBER_h
#define COSTCOMEMBER_h
#include <string>
#include <iostream>
using namespace std;


class CostcoMember {
public:
    enum Kind {BUSINESS, EXECUTIVE, GOLDSTAR};
    CostcoMember(string name, string number, Kind kind);

    Kind getKind();
    string getName();
    string getNumber();
    int getTripCount();
    void incrementTripCount();
    void clearTripCount();
    
    double getPurchaseTotal();
    void incrementPurchaseTotal(double amount);
    void decrementPurchaseTotal(double amount);
    void clearPurchaseTotal(); 
    
    
    // setters: increment trip count, clear trip count
    //increement purchase total, decrement purchase total, clear purchase total
    
/*    void incrementTripCount{
        void setTripCount = TripCount++
    };
*/
   
    //make double work with == using : (std::to_string(d))
    
    
private:
    string mName;
    string mNumber;
    Kind mKind;
    int mTripCount;
    double mPurchaseTotal;
  

};

#endif 
