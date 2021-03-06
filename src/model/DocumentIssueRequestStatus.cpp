/**
 * My Data My Consent - Developer API
 * Unleashing the power of data consent by establishing trust. The Platform Core Developer API defines a set of capabilities that can be used to request, issue, manage and update data, documents and credentials by organizations. The API can be used to request, manage and update Decentralised Identifiers, Financial Data, Health Data issue Documents, Credentials directly or using OpenID Connect flows, and verify Messages signed with DIDs and much more.
 *
 * The version of the OpenAPI document: v1
 * Contact: support@mydatamyconsent.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "MyDataMyConsent/model/DocumentIssueRequestStatus.h"

namespace mydatamyconsent {
namespace models {


namespace
{
using EnumUnderlyingType = utility::string_t;

DocumentIssueRequestStatus::eDocumentIssueRequestStatus toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("Created")))
        return DocumentIssueRequestStatus::eDocumentIssueRequestStatus::DocumentIssueRequestStatus_CREATED;
    if (val == utility::conversions::to_string_t(U("Issued")))
        return DocumentIssueRequestStatus::eDocumentIssueRequestStatus::DocumentIssueRequestStatus_ISSUED;
    if (val == utility::conversions::to_string_t(U("Accepted")))
        return DocumentIssueRequestStatus::eDocumentIssueRequestStatus::DocumentIssueRequestStatus_ACCEPTED;
    if (val == utility::conversions::to_string_t(U("Rejected")))
        return DocumentIssueRequestStatus::eDocumentIssueRequestStatus::DocumentIssueRequestStatus_REJECTED;
    return {};
}

EnumUnderlyingType fromEnum(DocumentIssueRequestStatus::eDocumentIssueRequestStatus e)
{
    switch (e)
    {
    case DocumentIssueRequestStatus::eDocumentIssueRequestStatus::DocumentIssueRequestStatus_CREATED:
        return U("Created");
    case DocumentIssueRequestStatus::eDocumentIssueRequestStatus::DocumentIssueRequestStatus_ISSUED:
        return U("Issued");
    case DocumentIssueRequestStatus::eDocumentIssueRequestStatus::DocumentIssueRequestStatus_ACCEPTED:
        return U("Accepted");
    case DocumentIssueRequestStatus::eDocumentIssueRequestStatus::DocumentIssueRequestStatus_REJECTED:
        return U("Rejected");
    default:
        break;
    }
    return {};
}
}

DocumentIssueRequestStatus::DocumentIssueRequestStatus()
{
}

DocumentIssueRequestStatus::~DocumentIssueRequestStatus()
{
}

void DocumentIssueRequestStatus::validate()
{
    // TODO: implement validation
}

web::json::value DocumentIssueRequestStatus::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool DocumentIssueRequestStatus::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void DocumentIssueRequestStatus::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool DocumentIssueRequestStatus::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

DocumentIssueRequestStatus::eDocumentIssueRequestStatus DocumentIssueRequestStatus::getValue() const
{
   return m_value;
}

void DocumentIssueRequestStatus::setValue(DocumentIssueRequestStatus::eDocumentIssueRequestStatus const value)
{
   m_value = value;
}


}
}


