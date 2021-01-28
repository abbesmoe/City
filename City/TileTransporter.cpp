/**
 * \file TileTranporter.cpp
 *
 * \author Moez Abbes
 */

#include "pch.h"
#include "TileTransporter.h"
#include <stdlib.h>

using namespace std;
using namespace Gdiplus;

/** Constructor
* \param city The city this is a member of
*/
CTileTransporter::CTileTransporter(CCity* city) : CTile(city)
{
}

/**
*  Destructor
*/
CTileTransporter::~CTileTransporter()
{
}


void CTileTransporter::Draw(Gdiplus::Graphics* graphics)
{
    CTile::Draw(graphics);
    if (mMinion == true) {
        wstring filename = L"images/transporter-minion.png";
        std::unique_ptr<Gdiplus::Bitmap> mItemImage = unique_ptr<Bitmap>(Bitmap::FromFile(filename.c_str()));
        int wid = mItemImage->GetWidth();
        int hit = mItemImage->GetHeight();

        graphics->DrawImage(mItemImage.get(), CTile::GetX() - OffsetLeft, CTile::GetY() + OffsetDown - hit, wid, hit);
    }
}

void CTileTransporter::Transport()
{
    if (mMinion == false) {
        mMinion = true;
        mMinionTransporter->SetMinion(false);
    }
    else {
        mMinion = false;
        CTileTransporter* RandomTransporter = mTransporters[rand() % mTransporters.size()];
        RandomTransporter->SetMinion(true);
    }
}

