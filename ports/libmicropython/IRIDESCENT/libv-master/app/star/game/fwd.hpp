// Project: libv, File: app/star/game/fwd.hpp

#pragma once


namespace star {

// -------------------------------------------------------------------------------------------------

struct ClientConfigT;
template <typename ConfigT> class Config;
using ClientConfig = Config<ClientConfigT>;

class GameClient;

// -------------------------------------------------------------------------------------------------

} // namespace star
