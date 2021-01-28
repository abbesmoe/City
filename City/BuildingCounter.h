/**
 * \file TileVisitor.h
 *
 * \author
 *
 * Building Counter class derived from Tile Visitor
 */

#pragma once
#include "TileVisitor.h"

 /** Building Counter class derived from Tile Visitor */
class CBuildingCounter :
    public CTileVisitor
{
public:
    /** Get the number of buildings
     * \returns Number of buildings */
    int GetNumBuildings() const { return mNumBuildings; }

    virtual void VisitBuilding(CTileBuilding* building) override;

private:
    /// Buildings counter
    int mNumBuildings = 0;
};

