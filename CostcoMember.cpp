#include <string>
#include "CostcoMember.h"
using namespace std;

CostcoMember::CostcoMember(string name, string number, Kind kind){
    mName = name;
    mNumber = number;
    mKind = kind;
    mTripCount = 0;
    mPurchaseTotal = 0;
}

CostcoMember::Kind CostcoMember::getKind(){
    return mKind;
}

string CostcoMember::getName(){
    return mName; 
}

string CostcoMember::getNumber(){
    return mNumber;
}

int CostcoMember::getTripCount(){
    return mTripCount;
}

void CostcoMember::incrementTripCount(){
    mTripCount++;
}

void CostcoMember::clearTripCount(){
    mTripCount = 0;
}

double CostcoMember::getPurchaseTotal(){
    return mPurchaseTotal;
}

void CostcoMember::incrementPurchaseTotal(double amount){
    mPurchaseTotal = mPurchaseTotal + amount;
}

void CostcoMember::decrementPurchaseTotal(double amount){
    mPurchaseTotal = mPurchaseTotal - amount;
}

void CostcoMember::clearPurchaseTotal(){
    mPurchaseTotal = 0;
}

