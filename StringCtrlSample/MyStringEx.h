#include "MyString.h"

class CMyStringEx : public CMyString {
private:

    /* data */

public:

    CMyStringEx() {}

    virtual ~CMyStringEx() {}

    int Find(const char *pszParam);
};
