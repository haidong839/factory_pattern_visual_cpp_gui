#include "StdAfx.h"
#include ".\Factory.h"
#using <mscorlib.dll>
#include "TV.h"
#include "Mobile.h"

using namespace System;


Factory::Factory(void)
{
}

Factory::~Factory(void)
{
}

Product* Factory::createProduct(System::String^  productName)
{
	if(!String::Compare(productName,"TV"))
		return new TV();
	else 
		return new Mobile();
}
