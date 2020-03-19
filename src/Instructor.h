
#include <iostream>
#include <cstring>
#include "Game.h"

using namespace std;

class Instructor{

    private:
        int instrId;
        string instrEmail;
        string instrPassword;

    public:

        //empty constructor
        Player(){};

        //setters
        void ​setInstrEmail(string newinstrEmail){
            strcpy(instrEmail, newinstrEmail);

        }
        void ​setInstrPassword(string newinstrPassword){
            strcpy(instrPassword, newinstrPassword);
        }
        void ​setInstrID(int newinstrID){
            strcpy(instrID, newinstrID);
        }

       //getters
        string ​getInstrEmail() {return instrEmail; }
        string ​getInstrPassword()  {return instrPassword; }
        int ​getInstrID() {return instrID; }


		createGame() {};

		createGame() {
			if (currentWeek == 0){
				cin >> gId;
				cin >> instrId;
				cin >> pFactId;
				cin >> pDistributorId;
				cin >> pWholesalerId;
				cin >> pRetailerId;
				cin >> demandPerWeek;
				cin >> orderTimeDelay;
				cin >> holdingCost;
				cin >> backorderCost;
				cin >> startingInventory;
				cin >> weeksToBePlayed;
			}
			else {
				cout << "Game must finish first before creating a new one" << endl;
				break;
			}

		}

		createGames(int numOfGames) {
			cin >> numOfGames;
			return numOfGames;
		}

		showGameStatus() {
			return updatePlayerInventories();
		}
};

