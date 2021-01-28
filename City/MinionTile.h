#pragma once
#include "TileVisitor.h"
class CMinionTile :
    public CTileVisitor
{
public:

    virtual void VisitTransporter(CTileTransporter* transporter) override;
};

