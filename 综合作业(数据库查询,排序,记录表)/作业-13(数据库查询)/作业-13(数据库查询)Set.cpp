
// 作业-13(数据库查询)Set.cpp : C作业13数据库查询Set 类的实现
//

#include "stdafx.h"
#include "作业-13(数据库查询).h"
#include "作业-13(数据库查询)Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业13数据库查询Set 实现

// 代码生成在 2020年5月25日, 21:40

IMPLEMENT_DYNAMIC(C作业13数据库查询Set, CRecordset)

C作业13数据库查询Set::C作业13数据库查询Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = L"";
	column2 = 0;
	column3 = 0;
	column4 = 0;
	column5 = L"";
	m_nFields = 6;
	m_nDefaultType = dynaset;
}
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString C作业13数据库查询Set::GetDefaultConnect()
{
	return _T("DSN=zzz;DBQ=E:\\access\\Database4.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString C作业13数据库查询Set::GetDefaultSQL()
{
	return _T("[学生信息表4]");
}

void C作业13数据库查询Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[姓名]"), column1);
	RFX_Long(pFX, _T("[年龄]"), column2);
	RFX_Long(pFX, _T("[工资]"), column3);
	RFX_Long(pFX, _T("[手机号码]"), column4);
	RFX_Text(pFX, _T("[相片]"), column5);

}
/////////////////////////////////////////////////////////////////////////////
// C作业13数据库查询Set 诊断

#ifdef _DEBUG
void C作业13数据库查询Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void C作业13数据库查询Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

