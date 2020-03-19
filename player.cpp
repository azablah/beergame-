#include <iostream>
#include <cmath>
#include "player.h"

using namespace std;
//emptyconstructor
	Player::Player(){
	}
	void Player::setPId(int number){
		pId = number;
	}
    void Player::setRole(std::string& newrole){
		role = newrole;
		}
    void Player::setInventory(int number){
		inventory = number;
		}
    void Player::setBackorder(int number){
		backorder = number;
		}
    void Player::setCost(int number){
		cost = number;
		}
    void Player::setShipment(int number){
		shipmentDelay = number;
		}
    void Player::setDemand(int number){
		demand = number;
		}
	void Player::setOrder(int number){
		order = floor(number);
		}
	int Player::getPId(){
		return pId;
		}
    std::string Player::getRole(){
		return role;
		}
    int Player::getInventory(){
		return inventory;
		}
    int Player::getBackorder(){
		return backorder;
		}
    int Player::getCost(){
		return cost;
		}
    int Player::getOrder(){
		return order;
		}
    int Player::getShipment(){
		return shipmentDelay;
		}
    int Player::getDemand(){
		return demand;
		}
	int Player::decreaseInventory(int numberOfBeers){
		inventory = inventory - numberOfBeers;
		return inventory;
		}
    int Player::increaseInventory(int numberOfBeers){
		inventory = inventory + numberOfBeers;
		return inventory;
		}
