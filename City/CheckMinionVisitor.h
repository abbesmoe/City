/**
* \file CheckMinionVisitor.h
*
* \author Charles B. Owen
*
*  Check Minion visitor class.
*/

#pragma once
#include "TileVisitor.h"
#include <vector>

/**
*  CheckMinionVisitor Class
*/
class CCheckMinionVisitor :
    public CTileVisitor
{
public:
    /** visits a Transporter tile
     * \param transporter Transporter tile */
    virtual void VisitTransporter(CTileTransporter* transporter) override;

    /// Getter for vector with transporsters without minions
    std::vector<CTileTransporter*> GetTransporters() { return mTransporters;  }

    /// Getter for transporter with minion
    CTileTransporter* GetMinionTransporter() { return mMinionTransporter;}

private:
    /// Transporter with minion
    CTileTransporter* mMinionTransporter = NULL;

    /// Transporters without minions
    std::vector<CTileTransporter*> mTransporters;
};

