#include "stdafx.h"

#include "conversion.h"

int main()
{
	auto precheck{ Currency<4,20>::value }; //validate

	//auto precheck2 { Currency<-4,20>::value}; //Currency will not accept negative dollars nor negative cents

	auto check{ Conversion<Currency<4,20>, CountryCode::kUS>::USD }; //standard

	auto check2{ Conversion<Currency<4,20>, CountryCode::kAU>::USD }; //to standard

	auto check3{ Conversion<Conversion<Currency<4,20>, CountryCode::kUS>, CountryCode::kAU>::value }; //from unique to unique

	auto check4{ Conversion<Conversion<Currency<4,20>, CountryCode::kYP>, CountryCode::kYP>::value }; //from itself to itself

	return 0;
}

