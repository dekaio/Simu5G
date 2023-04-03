/*
 * qosHandlers.cc
 *
 *  Created on: Mar 21, 2023
 *      Author: devika
 */

#include <iostream>
#include "stack/sdap/qosHandlers.h"


using namespace std;

using namespace omnetpp;
using namespace inet;
QosHandler::QosHandler(){
    // get reference to the binder
     binder_ = getBinder();
}

void QosHandler::convertPcpToQfi(){


}
void QosHandler::convertQfiToPcp(){

}
TrafficFlowTemplateId QosHandler::qosHandlerUpf(const inet::Ipv4Address &destAddr){
    std::vector<inet::Ipv4Address> UeEthDevice = binder_->getUeConnectedEthernetDevices();
    for (int i=0;i<UeEthDevice.size();++i){
            if (destAddr.str() == UeEthDevice[i].str()){
                EV<<"UeEthernetDeviceFound!!!!!"<<endl;
                TrafficFlowTemplateId tftId = 1;
                return tftId;
            }
        }
}
TrafficFlowTemplateId QosHandler::qosHandlergnb(const inet::Ipv4Address &destAddr){
    std::vector<inet::Ipv4Address> UeEthDevice = binder_->getUeConnectedEthernetDevices();
            for (int i=0;i<UeEthDevice.size();++i){
                if (destAddr.str() == UeEthDevice[i].str()){
                    EV<<"UeEthernetDeviceFound!!!!!"<<endl;
                    TrafficFlowTemplateId tftId = 1;
                    return tftId;
                }
            }
}
TrafficFlowTemplateId QosHandler::qosHandlerUe(const inet::Ipv4Address &destAddr){

}
