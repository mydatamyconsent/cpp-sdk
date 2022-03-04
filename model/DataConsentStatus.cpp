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



#include "DataConsentStatus.h"

namespace mydatamyconsent {
namespace models {



namespace
{
using EnumUnderlyingType = utility::string_t;

DataConsentStatus::eDataConsentStatus toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("Pending")))
        return DataConsentStatus::eDataConsentStatus::DataConsentStatus_PENDING;
    if (val == utility::conversions::to_string_t(U("Approved")))
        return DataConsentStatus::eDataConsentStatus::DataConsentStatus_APPROVED;
    if (val == utility::conversions::to_string_t(U("Rejected")))
        return DataConsentStatus::eDataConsentStatus::DataConsentStatus_REJECTED;
    if (val == utility::conversions::to_string_t(U("Revoked")))
        return DataConsentStatus::eDataConsentStatus::DataConsentStatus_REVOKED;
    if (val == utility::conversions::to_string_t(U("Expired")))
        return DataConsentStatus::eDataConsentStatus::DataConsentStatus_EXPIRED;
    if (val == utility::conversions::to_string_t(U("Timeout")))
        return DataConsentStatus::eDataConsentStatus::DataConsentStatus_TIMEOUT;
    if (val == utility::conversions::to_string_t(U("Canceled")))
        return DataConsentStatus::eDataConsentStatus::DataConsentStatus_CANCELED;
    return {};
}

EnumUnderlyingType fromEnum(DataConsentStatus::eDataConsentStatus e)
{
    switch (e)
    {
    case DataConsentStatus::eDataConsentStatus::DataConsentStatus_PENDING:
        return U("Pending");
    case DataConsentStatus::eDataConsentStatus::DataConsentStatus_APPROVED:
        return U("Approved");
    case DataConsentStatus::eDataConsentStatus::DataConsentStatus_REJECTED:
        return U("Rejected");
    case DataConsentStatus::eDataConsentStatus::DataConsentStatus_REVOKED:
        return U("Revoked");
    case DataConsentStatus::eDataConsentStatus::DataConsentStatus_EXPIRED:
        return U("Expired");
    case DataConsentStatus::eDataConsentStatus::DataConsentStatus_TIMEOUT:
        return U("Timeout");
    case DataConsentStatus::eDataConsentStatus::DataConsentStatus_CANCELED:
        return U("Canceled");
    default:
        break;
    }
    return {};
}
}

DataConsentStatus::DataConsentStatus()
{
}

DataConsentStatus::~DataConsentStatus()
{
}

void DataConsentStatus::validate()
{
    // TODO: implement validation
}

web::json::value DataConsentStatus::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool DataConsentStatus::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void DataConsentStatus::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool DataConsentStatus::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

DataConsentStatus::eDataConsentStatus DataConsentStatus::getValue() const
{
   return m_value;
}

void DataConsentStatus::setValue(DataConsentStatus::eDataConsentStatus const value)
{
   m_value = value;
}


}
}


