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

class CGridRowTrait;
class CGridRowTraitText;
class CGridRowTraitXP;

//------------------------------------------------------------------------
//! CGridRowTraitVisitor enables the use of the visitor-pattern to
//! add extra behavior to the CGridRowTrait classes
//------------------------------------------------------------------------
class TAO_DLLIMPEXP CGridRowTraitVisitor
{
public:
	void Visit(CGridRowTrait&) {}
	void Visit(CGridRowTraitText&) {}
	void Visit(CGridRowTraitXP&) {}
};
