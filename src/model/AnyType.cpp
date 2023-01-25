//
// Created by Balamurali Pandranki on 26/12/21.
//

#include "MyDataMyConsent/model/AnyType.h"

namespace mydatamyconsent {
namespace models {
AnyType::AnyType()
{
}

AnyType::~AnyType()
{
}

void AnyType::validate()
{
    // TODO: implement validation
}

web::json::value AnyType::toJson() const
{
    web::json::value val = web::json::value::object();
    return val;
}

bool AnyType::fromJson(const web::json::value& val)
{
    bool ok = true;
    return ok;
}

}
}