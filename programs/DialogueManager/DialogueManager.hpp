// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-

#ifndef __FM_DIALOGUE_MANAGER_HPP__
#define __FM_DIALOGUE_MANAGER_HPP__

#include <yarp/os/all.h>
#include <stdlib.h>

#include "StateMachine.hpp"

#define DEFAULT_LANGUAGE "english"

namespace teo
{

/**
 * @ingroup DialogueManager_programs
 *
 * @brief Dialogue Manager.
 */
class DialogueManager : public yarp::os::RFModule {
  private:
    StateMachine stateMachine;
    yarp::os::RpcClient outTtsPort; // tts port

    bool interruptModule();
    double getPeriod();
    bool updateModule();

  public:
    bool configure(yarp::os::ResourceFinder &rf);
};

}  // namespace teo

#endif  // __FM_DIALOGUE_MANAGER_HPP__
