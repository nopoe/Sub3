#pragma once

#include "network/Message.hpp"
#include "simulation/VesselID.hpp"

//Despawns a vessel.
class DespawnMessage : public Message
{
    //Serialization boilerplate
    friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Message>(*this);
        ar & mVesselID;
    }

public:
    DespawnMessage();
    DespwanMessage(VesselID vesselID);

    void execute();

private:
    VesselID mVesselID;
}
