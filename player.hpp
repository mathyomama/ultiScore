#ifndef PLAYER_HPP__
#define PLAYER_HPP__

namespace ultimate {

class Player {
	public:
		// constructor
		Player(); // default constructor
		explicit Player(std::string name); // takes name of player
		Player(std::string name, unsigned int height); // takes name and height

		// member functions
		void setHeight(unsigned int height);
		void setName(std::string);

	private:
		// member variables
		std::string m_name;
		unsigned int m_height; // we can arbitrarily say it's in inches
		Stats m_stats; // This will hold the stats for the player
};

}

#endif
