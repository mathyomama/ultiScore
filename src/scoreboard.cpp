#include "scoreboard.hpp"


using namespace ultimate;


Scoreboard::Scoreboard() :
	m_you{}, m_opponent{}, m_your_score{0}, m_opponent_score{0}, m_score_limit{15},
	m_current_point{0}, m_points{}
{
}
