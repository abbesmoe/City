/**
 * \file TileVisitor.h
 *
 * \author
 *
 * Transport Tile visitor class.
 */

#pragma once
#include "TileVisitor.h"
#include "City.h"


 /** Transport Tile visitor class */
class CTransportTilesVisitor :
    public CTileVisitor
{
public:
    /** Constructor
     * \param city The city */
    CTransportTilesVisitor(CCity city) { mCity = city; }

    /** visits a Transporter tile
     * \param transporter Transporter tile */
    virtual void VisitTransporter(CTileTransporter* transporter) override;

private:
    /// The city
    CCity mCity;
};

