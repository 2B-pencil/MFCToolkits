#pragma once

//------------------------------------------------------------------------
// Author:  Rolf Kristensen	
// Source:  http://www.codeproject.com/KB/list/CGridListCtrlEx.aspx
// License: Free to use for all (New BSD License)
//------------------------------------------------------------------------

#include "CGridRowTrait.h"

#if defined (_TAOCOMMONLIB_)
#define TAO_DLLIMPEXP __declspec(dllexport)
#else
#define TAO_DLLIMPEXP 
#endif

//------------------------------------------------------------------------
//! CGridRowTraitText provides customization text and background at
//! row-level
//------------------------------------------------------------------------
class TAO_DLLIMPEXP CGridRowTraitText : public CGridRowTrait
{
public:
	CGridRowTraitText();
	virtual void OnCustomDraw(CGridListCtrlEx& owner, NMLVCUSTOMDRAW* pLVCD, LRESULT* pResult);

	void SetRowColor(COLORREF textColor, COLORREF backColor);
	void SetAltRowColor(COLORREF textColor, COLORREF backColor);

	void SetInvertCellSelection(bool bValue);
	bool GetInvertCellSelection() const;

protected:
	COLORREF m_TextColor;	//!< Text color to use for this row
	COLORREF m_BackColor;	//!< Background color to use for this row

	COLORREF m_AltTextColor;//!< Alternate text color to use for every second row
	COLORREF m_AltBackColor;//!< Alternate background color to use for every second row

	bool m_InvertCellSelection;//!< When cell has focus in column, then the selection color is removed

	virtual bool UpdateTextColor(int nRow, COLORREF& textColor);
	virtual bool UpdateBackColor(int nRow, COLORREF& backColor);
	virtual void Accept(CGridRowTraitVisitor& visitor);
};
