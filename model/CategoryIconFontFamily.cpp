/**
 * My Data My Consent - Developer API
 * Unleashing the power of data consent by establishing trust. The Platform Core Developer API defines a set of capabilities that can be used to request, issue, manage and update data, documents and credentials by organizations. The API can be used to request, manage and update Decentralised Identifiers, Financial Data, Health Data issue Documents, Credentials directly or using OpenID Connect flows, and verify Messages signed with DIDs and much more.
 *
 * The version of the OpenAPI document: v1
 * Contact: support@mydatamyconsent.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CategoryIconFontFamily.h"

namespace mydatamyconsent {
namespace models {



namespace
{
using EnumUnderlyingType = utility::string_t;

CategoryIconFontFamily::eCategoryIconFontFamily toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("MaterialIcons")))
        return CategoryIconFontFamily::eCategoryIconFontFamily::CategoryIconFontFamily_MATERIALICONS;
    if (val == utility::conversions::to_string_t(U("FontAwesomeRegular")))
        return CategoryIconFontFamily::eCategoryIconFontFamily::CategoryIconFontFamily_FONTAWESOMEREGULAR;
    return {};
}

EnumUnderlyingType fromEnum(CategoryIconFontFamily::eCategoryIconFontFamily e)
{
    switch (e)
    {
    case CategoryIconFontFamily::eCategoryIconFontFamily::CategoryIconFontFamily_MATERIALICONS:
        return U("MaterialIcons");
    case CategoryIconFontFamily::eCategoryIconFontFamily::CategoryIconFontFamily_FONTAWESOMEREGULAR:
        return U("FontAwesomeRegular");
    default:
        break;
    }
    return {};
}
}

CategoryIconFontFamily::CategoryIconFontFamily()
{
}

CategoryIconFontFamily::~CategoryIconFontFamily()
{
}

void CategoryIconFontFamily::validate()
{
    // TODO: implement validation
}

web::json::value CategoryIconFontFamily::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool CategoryIconFontFamily::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void CategoryIconFontFamily::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool CategoryIconFontFamily::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }
    {
        EnumUnderlyingType e;
        ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), e);
        if (ok)
        {
            auto v = toEnum(e);
            setValue(v);
        }
    }
    return ok;
}

CategoryIconFontFamily::eCategoryIconFontFamily CategoryIconFontFamily::getValue() const
{
   return m_value;
}

void CategoryIconFontFamily::setValue(CategoryIconFontFamily::eCategoryIconFontFamily const value)
{
   m_value = value;
}


}
}


