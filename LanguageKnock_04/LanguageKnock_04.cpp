// LanguageKnock_04.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "formula.h"
#include <map>


int main()
{
	string target = "Hi He Lied Because Boron Could Not Oxidize Fluorine. New Nations Might Also Sign Peace Security Clause. Arthur King Can.";
	vector <string> forModify = makeVector (target, ' ');
	map<int, string> result;
	for(size_t i = 0; i < forModify.size(); i++) {
		//n文字目までを取り出し
		int n = 2;
		if(i == 0 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8 || i == 14 || i == 15 || i == 18) {
			n = 1;
		}
		result[i]=extractNChar(forModify[i],n);
	}

    return 0;
}

