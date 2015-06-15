
// AccountDlg.h : header file
//

#pragma once


// CAccountDlg dialog
class CAccountDlg : public CDialogEx
{
// Construction
public:
	CAccountDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_ACCOUNT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	void LoadControl();	

	int m_buttonCount;
	CRect m_rcPanel;

	CButton m_hMainButton_1;
	CButton m_hLanZhouXiButton;
	CButton m_hLanXiDButton;
	CButton m_hChenButton;
	CButton m_hMinButton;
	CButton m_hMainButton_2;
	int widthRect,heightRectL,heightRectS,topRect;
	int lineY_1,lineY_2;

public:
	afx_msg void OnButtonClickedLZX();
	afx_msg void OnButtonClickedLXD();
	afx_msg void OnButtonClickedC();
	afx_msg void OnButtonClickedM();
	afx_msg void OnButtonClickedMain();

};
