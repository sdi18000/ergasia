#include <iostream>
#include "GameBoard.hpp"
#include <string>
#include <thread>
#include <chrono>

using namespace std; 

GameBoard::GameBoard(int n){
	int l=n;
	string a;
	for(int o=0;o<n;o++){
		this_thread::sleep_for(chrono::seconds(1));
		string p="Player ";
		a=to_string(o+1);
		p=p+a;
		p=p+" Stronghold";
		players.push_back(new Player(p,l));
		l--;
	}
	
}


void GameBoard::printGameStatistics(){
		vector<Player*>::iterator it;
		int i=1;
		for(it=players.begin();it!=players.end();it++){
			cout << "Player " << i ;
			(*it)->printstats(); 
			i++;
		}
}

vector<Player *> GameBoard::getPlayers(){
	return players;
}	