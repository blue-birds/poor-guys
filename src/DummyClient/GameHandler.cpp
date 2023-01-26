#include "pch.h"
#include "Gamehandler.h"
#include "GameSession.h"
#include "MatchSession.h"

void GameHandler::HandlerPacket(PacketSessionRef& ref, BYTE* buffer, int32 len)
{
    GameHeader* head = reinterpret_cast<GameHeader*>(buffer);
    switch (head->type)
    {
    case Protocol::CONNECT:
        HandlerConnect(ref, ParsingPacket<Protocol::Data, GameHeader>(buffer, (int32)head->size));
        break;
    case Protocol::MOVE:
        HandlerMove(ref, ParsingPacket<Protocol::Data, GameHeader>(buffer, (int32)head->size));
        break;
    case Protocol::OBSTACLE_SETTING:
        HandlerOBSet(ref, ParsingPacket<Protocol::Data, GameHeader>(buffer, (int32)head->size));
        break;
    case Protocol::OBSTACLE_MOVE:
        HandlerOBMove(ref, ParsingPacket<Protocol::Data, GameHeader>(buffer, (int32)head->size));
        break;
    case Protocol::START:
        HandlerStart(ref, ParsingPacket<Protocol::Data, GameHeader>(buffer, (int32)head->size));
    default:
        break;
    }
}

void GameHandler::HandlerConnect(PacketSessionRef& ref, Protocol::Data&& pkt)
{
    
}

void GameHandler::HandlerMove(PacketSessionRef& ref, Protocol::Data&& pkt)
{
    auto point = pkt.player(0);
    cout << "whitch(" << pkt.id() << ") : " << point.x() << " " << point.y() << " " << point.z() << endl;
}

void GameHandler::HandlerOBSet(PacketSessionRef& ref, Protocol::Data&& pkt)
{
    cout << "Ob set" << pkt.obtacle_size() << endl;
}

void GameHandler::HandlerOBMove(PacketSessionRef& ref, Protocol::Data&& pkt)
{
    cout << "Ob Move" << pkt.obtacle_size() << endl;
}

void GameHandler::HandlerStart(PacketSessionRef& ref, Protocol::Data&& pkt)
{
    cout << "������" << pkt.player_size() << endl;
}

SendBufferRef GameHandler::MakeSendBuffer(Protocol::Data pkt, Protocol::INGAME type)
{
    return _MakeSendBuffer<Protocol::Data, GameHeader, Protocol::INGAME>(pkt, type);
}
