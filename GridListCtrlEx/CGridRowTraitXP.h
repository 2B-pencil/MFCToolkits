#pragma once

//------------------------------------------------------------------------
// Author:  Rolf Kristensen	
// Source:  http://www.codeproject.com/KB/list/CGridListCtrlEx.aspx
// License: Free to use for all (New BSD License)
//------------------------------------------------------------------------

#include "CGridRowTraitText.h"

#if defined (_TAOCOMMONLIB_)
#define TAO_DLLIMPEXP __declspec(dllexport)
#else
#define TAO_DLLIMPEXP 
#endif

//------------------------------------------------------------------------
//! CGridRowTraitXP fixes drawing of rows when the application is using
//! classic- or XP-style.
//------------------------------------------------------------------------
class TAO_DLLIMPEXP CGridRowTraitXP : public  CGridRowTraitText
{
public:
	virtual void OnCustomDraw(CGridListCtrlEx& owner, NMLVCUSTOMDRAW* pLVCD, LRESULT* pResult);

protected:
	virtual void Accept(CGridRowTraitVisitor& visitor);
};
