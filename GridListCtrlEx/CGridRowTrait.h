#pragma once

//------------------------------------------------------------------------
// Author:  Rolf Kristensen	
// Source:  http://www.codeproject.com/KB/list/CGridListCtrlEx.aspx
// License: Free to use for all (New BSD License)
//------------------------------------------------------------------------

#if defined (_TAOCOMMONLIB_)
#define TAO_DLLIMPEXP __declspec(dllexport)
#else
#define TAO_DLLIMPEXP 
#endif

class CGridRowTraitVisitor;
class CGridListCtrlEx;

#pragma warning(push)
#pragma warning(disable:4100)	// unreferenced formal parameter

//------------------------------------------------------------------------
//! CGridRowTrait specifies an interface for handling custom drawing at
//! row-level
//------------------------------------------------------------------------
class TAO_DLLIMPEXP CGridRowTrait
{
public:
	virtual ~CGridRowTrait() {}

	//! Override OnCustomDraw() to provide your own special row-drawing
	virtual void OnCustomDraw(CGridListCtrlEx& owner, NMLVCUSTOMDRAW* pLVCD, LRESULT* pResult) {}

	//! Override Accept() and update CGridColumnTraitVisitor for new column-trait classes
	//!   - Will enable the use of the visitor-pattern ex. for serialization of column-traits
	virtual void Accept(CGridRowTraitVisitor& visitor) {}
};

#pragma warning(pop)
