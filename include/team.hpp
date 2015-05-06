#ifndef TEAM_HPP__
#define TEAM_HPP__

#include <unordered_set>
#include "player.hpp"

namespace ultimate {
	// forward declaring needed classes
	class Stats;
	class Player;

	class Team {
		public:
			// constructor
			Team();
			Team(std::string teamname);

			// member functions
			void insertPlayer(const Player &player);
			void insertPlayer(Player &&player);
			void removePlayer(const Player &player);

		private:
			// member variables
			std::string m_teamname;
			std::unordered_set<Player> m_players;
	};

}


#endif
