#include <iostream>
#include <string>
#include <cassert>
#include "CostcoMember.h"
#include "CostcoWarehouse.h"

int main(){
    CostcoMember howard( "Howard", "123456", CostcoMember::Kind::EXECUTIVE );
    CostcoWarehouse warehouse( "Culver City", 210 );

    assert( howard.getName() == "Howard" );
    assert( howard.getNumber() == "123456" );
    assert( howard.getKind() == CostcoMember::Kind::EXECUTIVE );
    assert( howard.getTripCount() == 0 );
     
    assert( std::to_string( howard.getPurchaseTotal() ) == "0.000000" );

    assert( warehouse.getLocation() == "Culver City" );
    assert( warehouse.getNumber() == 210 );
    assert( std::to_string( warehouse.calculateReward( howard ) ) == "0.000000" );
    warehouse.shopForStuff( howard, 100 );
    assert( std::to_string( howard.getPurchaseTotal( ) ) == "100.000000" );
    assert( howard.getTripCount(  ) == 1 );
    warehouse.shopForStuff( howard, 1000 );
    warehouse.returnStuff( howard, 100 );
    assert( std::to_string( howard.getPurchaseTotal( ) ) == "1000.000000" );
    assert( howard.getTripCount(  ) == 2 );
    assert( std::to_string( warehouse.calculateReward( howard ) ) == "20.000000" );
    assert( std::to_string( warehouse.issueReward( howard ) ) == "20.000000" );
    assert( std::to_string( howard.getPurchaseTotal( ) ) == "0.000000" );
    assert( howard.getTripCount(  ) == 2 );
     
    
    CostcoMember nicole("Nicole", "234567", CostcoMember::Kind::BUSINESS );
    CostcoWarehouse warehouse2( "San Diego", 180 );
    assert( nicole.getName() == "Nicole" );
    assert( nicole.getNumber() == "234567" );
    assert( nicole.getKind() == CostcoMember::Kind::BUSINESS );
    assert( nicole.getTripCount() == 0 );
    assert( std::to_string( nicole.getPurchaseTotal() ) == "0.000000" );
    
    assert( warehouse2.getLocation() == "San Diego" );
    assert( warehouse2.getNumber() == 180 );
    assert( std::to_string( warehouse2.calculateReward( nicole ) ) == "0.000000" );
    warehouse2.shopForStuff(nicole, 1000);
    assert( std::to_string(nicole.getPurchaseTotal( ) ) == "1000.000000" );
    assert( nicole.getTripCount(  ) == 1 );
    assert( std::to_string( warehouse2.calculateReward( nicole ) ) == "0.000000" );
    warehouse.returnStuff( nicole, 100 );
    assert( nicole.getTripCount(  ) == 1 );
    assert( std::to_string( warehouse2.issueReward( nicole ) ) == "0.000000" );
    
    
    CostcoMember michael("Michael", "345f23", CostcoMember::Kind::GOLDSTAR);
    assert(michael.getNumber() == "345f23" );
    CostcoWarehouse warehouse3( "Palo Alto", 85934 );
    assert( warehouse3.getNumber() == 85934);
    assert(michael.getKind() == CostcoMember::Kind::GOLDSTAR);
    assert(std::to_string( warehouse3.calculateReward( michael ) ) == "0.000000" );
    assert(std::to_string(warehouse3.issueReward( michael ) ) == "0.000000" );
    
    
    CostcoMember sandra("Sandra", "hh33 442", CostcoMember::Kind::GOLDSTAR);
    assert(sandra.getNumber() == "hh33 442" );
    
    CostcoMember maya("Maya", "X3YKLMQ4", CostcoMember::Kind::EXECUTIVE);
    assert(maya.getNumber() == "X3YKLMQ4" );
    CostcoWarehouse warehouse5("Saint Louis", 6);
    assert(warehouse5.getNumber() == 6);
    assert(warehouse5.getLocation() == "Saint Louis");
    assert(maya.getKind() == CostcoMember::Kind::EXECUTIVE);
    assert(std::to_string(warehouse5.calculateReward( howard ) ) == "0.000000" );
    warehouse5.shopForStuff(maya, 723);
    assert(std::to_string(maya.getPurchaseTotal( ) ) == "723.000000" );
    assert(maya.getTripCount(  ) == 1 );
    warehouse5.shopForStuff(maya, 9411);
    assert(std::to_string(maya.getPurchaseTotal( ) ) == "10134.000000" );
    assert(maya.getTripCount(  ) == 2);
    warehouse5.returnStuff( maya, 134);
    assert(std::to_string(maya.getPurchaseTotal( ) ) == "10000.000000" );
    assert(maya.getTripCount(  ) == 2);
    assert( std::to_string( warehouse5.calculateReward( maya ) ) == "200.000000" );
    assert( std::to_string( warehouse5.issueReward( maya ) ) == "200.000000" );
    
    
    
    return( 0 );
}


