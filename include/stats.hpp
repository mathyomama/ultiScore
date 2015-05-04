#ifndef STATS_HPP__
#define STATS_HPP__

namespace ultimate {

class Stats {
	public:
		// Enumerator for all the different types of stats
		enum Stat {
			SCORE,
			ASSIST,
			DEFENSE,
			TURNOVER
		};

		// constructors
		Stats(); // default constructor

		// member functions
		void incrStat(Stat stat); // increment the stat by one
		void decrStat(Stat stat); // decrement the stat by one
		void inputStat(unsigned int amount, Stat stat); // input the amount a stat should be
		void clearStat(Stat stat); // set the stat to zero
		void clearAllStats(); // set all the stats to zero

	private:
		// private member variables
		unsigned int m_scores;
		unsigned int m_assists;
		unsigned int m_defenses;
		unsigned int m_turnovers;
};

}

#endif
