#pragma once
using namespace std;
#include "Product.h"

public class Factory 
{
private:

public:
	Factory(void);
	virtual ~Factory(void);
public:
	Product *createProduct(System::String^  productName);
};
