#include <string>
#include <iostream>
#include "CostcoWarehouse.h"
using namespace std;

CostcoWarehouse::CostcoWarehouse(string location, int number){
    mLocation = location;
    mNumber =  number;
}

string CostcoWarehouse::getLocation(){
    return mLocation;
}

int CostcoWarehouse::getNumber(){
    return mNumber;
}

void CostcoWarehouse::shopForStuff(CostcoMember & member, double amount){
    member.incrementTripCount();
    member.incrementPurchaseTotal(amount);
}

void CostcoWarehouse::returnStuff(CostcoMember & member, double amount){
    member.decrementPurchaseTotal(amount);
}

double CostcoWarehouse::calculateReward(CostcoMember member){
    double reward = 0;
    if (member.getKind() == CostcoMember::Kind::EXECUTIVE)
        reward = member.getPurchaseTotal()*0.02;
    return reward;
}

double CostcoWarehouse::issueReward(CostcoMember & member){
    double reward = calculateReward(member);
    if (reward > 0){
        member.clearPurchaseTotal();
    }
    return reward;
}
