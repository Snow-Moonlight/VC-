
// MFC_0413_3Doc.h : CMFC_0413_3Doc ��Ľӿ�
//


#pragma once


class CMFC_0413_3Doc : public CDocument
{
protected: // �������л�����
	CMFC_0413_3Doc();
	DECLARE_DYNCREATE(CMFC_0413_3Doc)

// ����
public:

// ����
public:
	CRect cr;
// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMFC_0413_3Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
