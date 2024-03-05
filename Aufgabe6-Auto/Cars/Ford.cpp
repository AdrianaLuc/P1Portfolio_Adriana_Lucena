//
// Created by adria on 05.03.2024.
//

#include "Ford.h"

Ford::Ford() {
    this->p_engine = std::make_shared<car::component::EngineDragonV2>();
}
