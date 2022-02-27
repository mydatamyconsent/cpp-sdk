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



#include "DocumentCategoryType.h"

namespace mydatamyconsent {
namespace models {



namespace
{
using EnumUnderlyingType = utility::string_t;

DocumentCategoryType::eDocumentCategoryType toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("Personal")))
        return DocumentCategoryType::eDocumentCategoryType::DocumentCategoryType_PERSONAL;
    if (val == utility::conversions::to_string_t(U("Education")))
        return DocumentCategoryType::eDocumentCategoryType::DocumentCategoryType_EDUCATION;
    if (val == utility::conversions::to_string_t(U("Health")))
        return DocumentCategoryType::eDocumentCategoryType::DocumentCategoryType_HEALTH;
    if (val == utility::conversions::to_string_t(U("Finance")))
        return DocumentCategoryType::eDocumentCategoryType::DocumentCategoryType_FINANCE;
    if (val == utility::conversions::to_string_t(U("WorkAndAwards")))
        return DocumentCategoryType::eDocumentCategoryType::DocumentCategoryType_WORKANDAWARDS;
    if (val == utility::conversions::to_string_t(U("LicencesAndCertificates")))
        return DocumentCategoryType::eDocumentCategoryType::DocumentCategoryType_LICENCESANDCERTIFICATES;
    if (val == utility::conversions::to_string_t(U("Others")))
        return DocumentCategoryType::eDocumentCategoryType::DocumentCategoryType_OTHERS;
    return {};
}

EnumUnderlyingType fromEnum(DocumentCategoryType::eDocumentCategoryType e)
{
    switch (e)
    {
    case DocumentCategoryType::eDocumentCategoryType::DocumentCategoryType_PERSONAL:
        return U("Personal");
    case DocumentCategoryType::eDocumentCategoryType::DocumentCategoryType_EDUCATION:
        return U("Education");
    case DocumentCategoryType::eDocumentCategoryType::DocumentCategoryType_HEALTH:
        return U("Health");
    case DocumentCategoryType::eDocumentCategoryType::DocumentCategoryType_FINANCE:
        return U("Finance");
    case DocumentCategoryType::eDocumentCategoryType::DocumentCategoryType_WORKANDAWARDS:
        return U("WorkAndAwards");
    case DocumentCategoryType::eDocumentCategoryType::DocumentCategoryType_LICENCESANDCERTIFICATES:
        return U("LicencesAndCertificates");
    case DocumentCategoryType::eDocumentCategoryType::DocumentCategoryType_OTHERS:
        return U("Others");
    default:
        break;
    }
    return {};
}
}

DocumentCategoryType::DocumentCategoryType()
{
}

DocumentCategoryType::~DocumentCategoryType()
{
}

void DocumentCategoryType::validate()
{
    // TODO: implement validation
}

web::json::value DocumentCategoryType::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool DocumentCategoryType::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void DocumentCategoryType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool DocumentCategoryType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

DocumentCategoryType::eDocumentCategoryType DocumentCategoryType::getValue() const
{
   return m_value;
}

void DocumentCategoryType::setValue(DocumentCategoryType::eDocumentCategoryType const value)
{
   m_value = value;
}


}
}


