#include "player.hpp"


using namespace ultimate;

// Constructor from a string
Player::Player(std::string name) :
	m_name{name}, m_height{0}, m_stats{Stats{}}
{
}

// Equivalence operator
bool Player::operator==(const Player& rhs)
{
	return (m_id == rhs.get_id() && m_name == rhs.get_name());
}

// hash function for Player class
template<>
size_t std::hash<Player>::operator()(const Player &player)
{
	return std::hash<size_t>(player.get_id());
}
