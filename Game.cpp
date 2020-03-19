/*
 * Game.cpp
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
#include <cmath>
#include <iterator>
#include <map>
#include <vector>
#include <list>
#include "Game.h"




using namespace std;
//emptyconstructor
	Order::Order(){
		}
	void Order::setGId(int number){
		gid=number;
		}
	void Order::setOrderId(int number){
		orderid=number;
		}
	void Order::setFromPlayerId(int number){
		fromPlayerid=number;
		}
	void Order::setToplayerId(int number){
		toPlayerid=number;
		}
	void Order::setOrderedInWeek(int number){
		orderedInWeek=number;
		setShippedInWeek(orderedInWeek+orderDelay);
		}
	void Order::setShippedInWeek(int number){
		shippedInWeek=number;
		}
	void Order::setNumberOfBeers(int number){
		numberOfBeers=number;
		}

	//getters
	int Order::getGId(){
		 return gid;
		}
	int Order::getOrderId(){
		 return orderid;
		}
	int Order::getFromPlayerId(){
		return fromPlayerid;
		}
	int Order::getToplayerId(){
		return toPlayerid;
		}
	int Order::getOrderedInWeek(){
		return orderedInWeek;
		}
	int Order::getShippedInWeek(){
		return shippedInWeek;
		}
	int Order::getNumberOfBeers(){
		return numberOfBeers;
		}
		//service method

	void Order::executeOrder(){

		}
	Game::Game(){}
	Game::Game(int ngId,int ninstrId,int pFactId,int pDistributorId,
	int pWholesalerId,int pRetailerId,vector<int> ndemandPerWeek,
	int norderDelay,int nholdingCost,int nbackorderCost,
	int nstartingInventory,int nweeksToBePlayed){
			gid = ngId;
			int instrId = ninstrId;
			Factid = pFactId;
			Distributorid = pDistributorId;
			Wholesalerid = pWholesalerId;
			Retailerid = pRetailerId;
			demandPerWeek = demandPerWeek;
			orderDelay = norderDelay;
			holdingCost = nholdingCost;
			backorderCost = nbackorderCost;
			startingInventory = nstartingInventory;
			weeksToBePlayed = nweeksToBePlayed;
				}
	void Game::setGId(int number){
		gid = number;
		}
    void Game::setInstrId(int number){
		instrid = number;
		}
    void Game::setDistributorId(int number){
		Distributorid = number;
		}
    void Game::setFactId(int number){
		Factid = number;
		}
    void Game::setWholesalerId(int number){
		Wholesalerid = number;
		}
    void Game::setRetailerId(int number){
		Retailerid = number;
		}
    void Game::setDemandPerWeek(vector<int> newDemand) {
		demandPerWeek = newDemand;
		}
    void Game::setStartingInventory(int number){
		startingInventory = number;
		}
    void Game::setBackorderCost(double number){
		backorderCost = number;
		}
    void Game::setHoldingCost(double number){
		holdingCost = number;
		}
    void Game::setShipmentDelay(int number){
		shipmentDelay = number;
		}
    void Game::setOrderDelay(int number){
		orderDelay = number;
		}
    void Game::setWeeksToBePlayed(int number){
		weeksToBePlayed = number;
		vector<Order> OrderVector[weeksToBePlayed];
		ordersToBeExecuted = OrderVector;
		}
    void Game::setInfoCode(int number){
		infoCode = number;
		}


    //getters

	int Game::getGId(){
		return gid;
		}
    int Game::getInstrId(){
		return instrid;
		}
    int Game::getDistributorId(){
		return Distributorid;
		}
    int Game::getFactId(){
		return Factid;
		}
    int Game::getWholesalerId(){
		return Wholesalerid;
		}
    int Game::getRetailerId(){
		return Retailerid;
		}
    std::vector<int> Game::getDemandPerWeek() {
		return demandPerWeek;
		}
    int Game::getStartingInventory(){
		return startingInventory;
		}
    double Game::getBackorderCost(){
		return backorderCost;
		}
    double Game::getHoldingCost(){
		return holdingCost;
		}
    int Game::getShipmentDelay(){
		return shipmentDelay;
		}
    int Game::getOrderDelay(){
		return orderDelay;
		}
    int Game::getWeeksToBePlayed(){
		return weeksToBePlayed;
		}
    int Game::getInfoCode(){
		return infoCode;
		}
	void Game::advanceWeek(){
		currentWeek = currentWeek+1;
		}
	void Game::addOrder(Order newOrder){
		ordersToBeExecuted[currentWeek].push_back(newOrder);
		}
	vector<string> Game::generatePasswordes(){
		int j,i;
		vector<string> list;
		 const char charset[] =
			"0123456789"
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
			"abcdefghijklmnopqrstuvwxyz";
		const size_t max_index = (sizeof(charset) - 1);
		char c;
		string str(8,0);
		for (j=0;j<4;j++){
			for (i = 0;i<8;i++){
				c = charset[ rand() % max_index ];
				str.push_back(c);
				}
			list.push_back(str);
			str = "";
			}
		return list;
		}
