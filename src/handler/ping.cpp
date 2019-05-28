#include "ping.h"
#include "../session.h"
#include "../server.h"

void handler_ping::run(std::shared_ptr<redisReply> req
    , std::shared_ptr<session> res
    , coroutine_handler& ch) {

    res->write({"+PONG\r\n", 7}, ch);
}
