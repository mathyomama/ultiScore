#ifndef PLAYER_HPP__
#define PLAYER_HPP__

namespace ultimate {

class Player {
	public:
		Player();
	private:
		std::string m_name;
		float m_height;
		Stats m_stats;
};

}

#endif
