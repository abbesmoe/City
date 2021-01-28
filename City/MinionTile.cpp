#include "pch.h"
#include "MinionTile.h"
#include "TileTransporter.h"

/** \brief Visit a CTileTransporter object
* \param transporter Transporter tile we are visiting */
void CMinionTile::VisitTransporter(CTileTransporter* transporter)
{
	transporter->SetMinion();
}
