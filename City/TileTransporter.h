/**
* \file TileBuilding.h
*
* \author Charles B. Owen
*
*  Class that implements a Transporter tile
*/

#pragma once
#include "Tile.h"
#include <vector>

/**
*  A Transporter tile
*/
class CTileTransporter :
    public CTile
{
public:

    CTileTransporter(CCity* city);

    ///  Default constructor (disabled)
    CTileTransporter() = delete;

    ///  Copy constructor (disabled)
    CTileTransporter(const CTileTransporter &) = delete;

    ~CTileTransporter();

    /**  Draw this item
    * \param graphics The graphics context to draw on */
    virtual void Draw(Gdiplus::Graphics* graphics) override;

    /** Accept a visitor
     * \param visitor The visitor we accept */
    virtual bool Accept(CTileVisitor* visitor) override { visitor->VisitTransporter(this); return true; }

    /** Set minion boolean
     * \param b boolean */
    void SetMinion(bool b) { mMinion = b; }

    /// Get minion boolean
    bool GetMinion() { return mMinion; }

    /// Transportation function
    void Transport();

    /// Set Transporter with minion in mMinionTransporter
    void SetMinionTransporter(CTileTransporter* miniontransporter) { mMinionTransporter = miniontransporter;  }

    /// Set a vector list of Transporters without minions
    void SetTransporters(std::vector<CTileTransporter*> transporters) { mTransporters = transporters; }

private:
    /// Bool whteher transporter have minion or not
    bool mMinion = false;

    /// Transporter with minion
    CTileTransporter* mMinionTransporter = NULL;

    /// Transporters without minions
    std::vector<CTileTransporter*> mTransporters;
};

