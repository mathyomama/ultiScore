#ifndef PLAYER_HPP__
#define PLAYER_HPP__

#include <string>
#include <functional>
#include "stats.hpp"

namespace ultimate {

	// forward declaring needed classes
	class Stats;

	class Player {
		public:
			// constructor
			explicit Player(std::string name); // takes name of player
			Player(std::string name, unsigned int height); // takes name and height

			// member functions
			void set_height(unsigned int height);
			void set_name(std::string name);
			unsigned long get_id() const;
			std::string get_name() const;
			bool operator==(const Player &rhs);

		private:
			// static member variable
			static unsigned long s_id;

			// member variables
			std::string m_name;
			unsigned long m_id;
			unsigned int m_height; // in inches
			Stats m_stats; // This will hold the stats for the player
	};

}


// Need to define a hash function for Player so it can be used in unordered_set
namespace std {

	template <>
	class hash<ultimate::Player> {
		public:
			size_t operator()(const ultimate::Player &player) const;
	};

}

#endif
