#include "player.hpp"


using namespace ultimate;

// Set up the static id variable
Player::s_id = 0;

// Constructor from a string
Player::Player(std::string name) :
	m_name{name}, m_id{s_id++}, m_height{0}, m_stats{}
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
	return std::hash<unsigned long>(player.get_id());
}
