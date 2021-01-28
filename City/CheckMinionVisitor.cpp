/**
 * \file CheckMinionVisitor.cpp
 *
 * \author Moez Abbes
 */

#include "pch.h"
#include "CheckMinionVisitor.h"
#include "TileTransporter.h"

 /** \brief Visit a CTileTransport object
 * \param transport Transport tile we are visiting */
void CCheckMinionVisitor::VisitTransporter(CTileTransporter* transporter)
{
	if (transporter->GetMinion() == true) {
		mMinionTransporter = transporter;
	}
	else {
		mTransporters.push_back(transporter);
	}
}
