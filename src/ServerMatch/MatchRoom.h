#pragma once
#include <JobQueue.h>

class MatchRoom
{
public:
	int32 Enter(PlayerRef player);
	void Leave(PlayerRef player);
	void Broadcast(Match::Users& users, int32 matchRoom);

	void Clear() { _players.clear(); }
	int32 GetSize() { return static_cast<int32>(_players.size()); }

private:
	map<uint64, PlayerRef> _players;
};