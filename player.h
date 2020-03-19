/*
 * player.h
 * 
 * Copyright 2020 Farzan Ali Khan <farzan@farzan-HP-ProBook-450-G3>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>

#include <string> // defines standard C++ string class
 
class Player
{
private:  // data members are private
    int pId;
    std::string role;
    int inventory;
    int backorder;
    int cost;
    int shipmentDelay;
    int order;
    int demand;
    
    
 
public: // business logic methods are public
	Player();
    // setter methods
    void setPId(int number);
    void setRole(std::string& newrole);
    void setInventory(int number);
    void setBackorder(int number);
    void setCost(int number);
    void setShipment(int number);
    void setOrder(int number);
    void setDemand(int number);
    
    
    // getter method
    int getPId();
    std::string getRole();
    int getInventory();
    int getBackorder();
    int getCost();
    int getOrder();
    int getShipment();
    int getDemand();
    
    // service method
    int decreaseInventory(int numberOfBeers);
    int increaseInventory(int numberOfBeers);
};

