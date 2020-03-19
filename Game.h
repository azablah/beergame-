/*
 * Game.h
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
#include <iterator>
#include <vector>
#include <string> // defines standard C++ string class

class Order
{
private:  // data members are private
    int orderid;
    int gid;
    int fromPlayerid;
    int toPlayerid;
    int orderedInWeek;
    int shippedInWeek;
    int numberOfBeers;
    int orderDelay;

public: // business logic methods are public
	Order();
    // setter methods
    void setGId(int number);
    void setOrderId(int number);
    void setFromPlayerId(int number);
    void setToplayerId(int number);
    void setOrderedInWeek(int number);
    void setShippedInWeek(int number);
    void setNumberOfBeers(int number);

    // getter method
    int getGId();
    int getOrderId();
    int getFromPlayerId();
    int getToplayerId();
    int getOrderedInWeek();
    int getShippedInWeek();
    int getNumberOfBeers();

    // service method
    void executeOrder();
};

class Game
{
private:  // data members are private
    int gid;
    int instrid;
    int Factid;
    int Distributorid;
    int Wholesalerid = 0;
    int Retailerid = 0;
    std::vector<Order> *ordersToBeExecuted;//change made
    std::vector<int> demandPerWeek;
    double backorderCost = 1;
    double holdingCost = 0.5;

    int startingInventory = 12;
    int weeksToBePlayed = 26;
    int currentWeek = 0;
    int infoCode = 0;
    int shipmentDelay;
    int orderDelay;

public: // business logic methods are public
	Game();
	Game(int ngId,int ninstrId,int pFactId,int pDistributorId,
	int pWholesalerId,int pRetailerId,std::vector<int> ndemandPerWeek,
	int norderDelay,int nholdingCost,int nbackorderCost,
	int nstartingInventory,int nweeksToBePlayed);
    // setter methods
    void setGId(int number);
    void setInstrId(int number);
    void setDistributorId(int number);
    void setFactId(int number);
    void setWholesalerId(int number);
    void setRetailerId(int number);
    void setDemandPerWeek(std::vector<int> newDemand);
    void setStartingInventory(int number);
    void setBackorderCost(double number);
    void setHoldingCost(double number);
    void setShipmentDelay(int number);
    void setOrderDelay(int number);
    void setWeeksToBePlayed(int number);
    void setInfoCode(int number);

    // getter method
    int getGId();
    int getInstrId();
    int getDistributorId();
    int getFactId();
    int getWholesalerId();
    int getRetailerId();
    std::vector<int> getDemandPerWeek();
    int getStartingInventory();
    double getBackorderCost();
    double getHoldingCost();
    int getShipmentDelay();
    int getOrderDelay();
    int getWeeksToBePlayed();
    int getInfoCode();

    // service method
    void executeOrdersForCurrentWeek();
    void updatePlayerInventories();
    void advanceWeek();
    void addOrder(Order newOrder);
    std::vector<std::string> generatePasswordes();
};

