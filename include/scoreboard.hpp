#ifndef game_hpp__
#define game_hpp__

#include <iostream>
#include <string>
#include <vector>
#include "team.hpp"

namespace ultimate {

	// forward declaring needed classes
	class Team;
	class Player;
	class Stats;

	class Scoreboard {
		public:
			// Enumerator for side
			enum Side {
				GOODGUYS,
				BADGUYS
			};

			// Constructors
			Scoreboard(); // default constructor
			Scoreboard(Team you, Team opponents, unsigned int scoreLimit=15); // Takes two team names and score limit
			
			// Member Functions
			void insertTeam(const Team &team, Side); // insert the team into the scoreboard
			void insertTeam(Team &&team, Side); // move insert
			void incrScore(const Team &team); // incremenet the score by 1
			void incrScore(Side side);
			void clearScore(const Team &team); // clear the score of given team
			void clearScore(Side side);

		private:
			// member variables
			Team m_you; // The good guys team
			Team m_opponent; // The bad guys team
			unsigned int m_your_score;
			unsigned int m_oppnonent_score;
			unsigned int m_score_limit; // the point value being played to
			unsigned int current_point; // the current point being played
			std::vector<Side> m_points; // vector of who scored each point
	};

}

#endif
