#ifndef COSTCOWAREHOUSE_h
#define COSTCOWAREHOUSE_h
#include <string>
#include "CostcoMember.h"
using namespace std;

class CostcoWarehouse{
public:
    CostcoWarehouse(string location, int number);
    string getLocation();
    int getNumber();
    
    void shopForStuff(CostcoMember & member, double amount);
    void returnStuff(CostcoMember & member, double amount);
    
    double calculateReward(CostcoMember member);
    double issueReward(CostcoMember & member);
    
private:
    string mLocation;
    int mNumber;
};


#endif
