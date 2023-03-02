/*
 * networking.cc
 *
 *  Created on: 02-Mar-2023
 *      Author: home-laptop
 */

#include <omnetpp.h>
using namespace omnetpp;
class Node : public cSimpleModule
{
protected:
    void initialize() override;
    void handleMessage(cMessage *msg) override;

};

Define_Module(Node); // Register with OMNET ++
void Node::initialize(){
    if(strcmp("computer1",getName())==0){
        cMessage *msg = new cMessage("Testing!");
        send(msg,"output_gate");
    }
}

void Node::handleMessage(cMessage *msg){
    send(msg,"output_gate");
}


