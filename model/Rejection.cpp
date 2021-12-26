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



#include "Rejection.h"

namespace mydatamyconsent {
namespace models {




Rejection::Rejection()
{
    m_Reason = utility::conversions::to_string_t("");
    m_ReasonIsSet = false;
    m_RejectedBy = utility::conversions::to_string_t("");
    m_RejectedByIsSet = false;
    m_RejectedAtUtc = utility::datetime();
    m_RejectedAtUtcIsSet = false;
}

Rejection::~Rejection()
{
}

void Rejection::validate()
{
    // TODO: implement validation
}

web::json::value Rejection::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ReasonIsSet)
    {
        val[utility::conversions::to_string_t(U("reason"))] = ModelBase::toJson(m_Reason);
    }
    if(m_RejectedByIsSet)
    {
        val[utility::conversions::to_string_t(U("rejectedBy"))] = ModelBase::toJson(m_RejectedBy);
    }
    if(m_RejectedAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("rejectedAtUtc"))] = ModelBase::toJson(m_RejectedAtUtc);
    }

    return val;
}

bool Rejection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("reason"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("reason")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_reason;
            ok &= ModelBase::fromJson(fieldValue, refVal_reason);
            setReason(refVal_reason);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("rejectedBy"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("rejectedBy")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_rejectedBy;
            ok &= ModelBase::fromJson(fieldValue, refVal_rejectedBy);
            setRejectedBy(refVal_rejectedBy);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("rejectedAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("rejectedAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_rejectedAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_rejectedAtUtc);
            setRejectedAtUtc(refVal_rejectedAtUtc);
        }
    }
    return ok;
}

void Rejection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ReasonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("reason")), m_Reason));
    }
    if(m_RejectedByIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("rejectedBy")), m_RejectedBy));
    }
    if(m_RejectedAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("rejectedAtUtc")), m_RejectedAtUtc));
    }
}

bool Rejection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("reason"))))
    {
        utility::string_t refVal_reason;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("reason"))), refVal_reason );
        setReason(refVal_reason);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("rejectedBy"))))
    {
        utility::string_t refVal_rejectedBy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("rejectedBy"))), refVal_rejectedBy );
        setRejectedBy(refVal_rejectedBy);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("rejectedAtUtc"))))
    {
        utility::datetime refVal_rejectedAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("rejectedAtUtc"))), refVal_rejectedAtUtc );
        setRejectedAtUtc(refVal_rejectedAtUtc);
    }
    return ok;
}

utility::string_t Rejection::getReason() const
{
    return m_Reason;
}

void Rejection::setReason(const utility::string_t& value)
{
    m_Reason = value;
    m_ReasonIsSet = true;
}

bool Rejection::reasonIsSet() const
{
    return m_ReasonIsSet;
}

void Rejection::unsetReason()
{
    m_ReasonIsSet = false;
}
utility::string_t Rejection::getRejectedBy() const
{
    return m_RejectedBy;
}

void Rejection::setRejectedBy(const utility::string_t& value)
{
    m_RejectedBy = value;
    m_RejectedByIsSet = true;
}

bool Rejection::rejectedByIsSet() const
{
    return m_RejectedByIsSet;
}

void Rejection::unsetRejectedBy()
{
    m_RejectedByIsSet = false;
}
utility::datetime Rejection::getRejectedAtUtc() const
{
    return m_RejectedAtUtc;
}

void Rejection::setRejectedAtUtc(const utility::datetime& value)
{
    m_RejectedAtUtc = value;
    m_RejectedAtUtcIsSet = true;
}

bool Rejection::rejectedAtUtcIsSet() const
{
    return m_RejectedAtUtcIsSet;
}

void Rejection::unsetRejectedAtUtc()
{
    m_RejectedAtUtcIsSet = false;
}
}
}


