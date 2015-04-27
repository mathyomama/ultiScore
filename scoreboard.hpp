#ifndef game_hpp__
#define game_hpp__

#include <iostream>
#include <string>

namespace ultimate {

class Scoreboard {
	public:
		// Enumeration for team
		enum Team {
			GOODGUYS,
			BADGUYS
		};

		// Constructors
		Scoreboard(); // default constructor
		Scoreboard(std::string team1, std::string team2, unsigned int scoreLimit=15); // Takes two team names and score limit
		
		// Member Functions
		void addTeam(std::string team_name, Team guys);
		void incrScore(std::string team_name);
		void incrScore(Team guys);
	private:
		std::string m_team1; // The first team
		std::string m_team2; // The second team
		unsigned int m_team1_score;
		unsigned int m_team2_score;
		unsigned int m_scoreLimit;
		std::vector<Team>;

};

}

#endif
