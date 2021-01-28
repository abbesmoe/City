/**
 * \file TranportTileVisitor.cpp
 *
 * \author Moez Abbes
 */

#include "pch.h"
#include "TransportTilesVisitor.h"
#include "TileTransporter.h"
#include "CheckMinionVisitor.h"

/** \brief Visit a CTileTransport object
* \param transport Transport tile we are visiting */
void CTransportTilesVisitor::VisitTransporter(CTileTransporter* transporter)
{
    // Instantiate the visitor
    CCheckMinionVisitor visitor;

    // Send to all tiles
    mCity.Accept(&visitor);

    /// Grab the transporters without minions and transporter with minion from CheckMinionVisitor
    auto transporters = visitor.GetTransporters();
    auto minionTransporter = visitor.GetMinionTransporter();

    /// Set the grabbed values
    transporter->SetTransporters(transporters);
    transporter->SetMinionTransporter(minionTransporter);

    /// call the transport function to perform transportation
	transporter->Transport();
}
