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



#include "DigitalSignature.h"

namespace mydatamyconsent {
namespace models {




DigitalSignature::DigitalSignature()
{
    m_SignedBy = utility::conversions::to_string_t("");
    m_SignedByIsSet = false;
    m_CertIssuedBy = utility::conversions::to_string_t("");
    m_CertIssuedByIsSet = false;
    m_ValidFrom = utility::datetime();
    m_ValidFromIsSet = false;
    m_ValidTill = utility::datetime();
    m_ValidTillIsSet = false;
    m_Reason = utility::conversions::to_string_t("");
    m_ReasonIsSet = false;
    m_Location = utility::conversions::to_string_t("");
    m_LocationIsSet = false;
    m_Sha1Digest = utility::conversions::to_string_t("");
    m_Sha1DigestIsSet = false;
}

DigitalSignature::~DigitalSignature()
{
}

void DigitalSignature::validate()
{
    // TODO: implement validation
}

web::json::value DigitalSignature::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SignedByIsSet)
    {
        val[utility::conversions::to_string_t(U("signedBy"))] = ModelBase::toJson(m_SignedBy);
    }
    if(m_CertIssuedByIsSet)
    {
        val[utility::conversions::to_string_t(U("certIssuedBy"))] = ModelBase::toJson(m_CertIssuedBy);
    }
    if(m_ValidFromIsSet)
    {
        val[utility::conversions::to_string_t(U("validFrom"))] = ModelBase::toJson(m_ValidFrom);
    }
    if(m_ValidTillIsSet)
    {
        val[utility::conversions::to_string_t(U("validTill"))] = ModelBase::toJson(m_ValidTill);
    }
    if(m_ReasonIsSet)
    {
        val[utility::conversions::to_string_t(U("reason"))] = ModelBase::toJson(m_Reason);
    }
    if(m_LocationIsSet)
    {
        val[utility::conversions::to_string_t(U("location"))] = ModelBase::toJson(m_Location);
    }
    if(m_Sha1DigestIsSet)
    {
        val[utility::conversions::to_string_t(U("sha1Digest"))] = ModelBase::toJson(m_Sha1Digest);
    }

    return val;
}

bool DigitalSignature::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("signedBy"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("signedBy")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_signedBy;
            ok &= ModelBase::fromJson(fieldValue, refVal_signedBy);
            setSignedBy(refVal_signedBy);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("certIssuedBy"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("certIssuedBy")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_certIssuedBy;
            ok &= ModelBase::fromJson(fieldValue, refVal_certIssuedBy);
            setCertIssuedBy(refVal_certIssuedBy);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("validFrom"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("validFrom")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_validFrom;
            ok &= ModelBase::fromJson(fieldValue, refVal_validFrom);
            setValidFrom(refVal_validFrom);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("validTill"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("validTill")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_validTill;
            ok &= ModelBase::fromJson(fieldValue, refVal_validTill);
            setValidTill(refVal_validTill);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t(U("location"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("location")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_location;
            ok &= ModelBase::fromJson(fieldValue, refVal_location);
            setLocation(refVal_location);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("sha1Digest"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("sha1Digest")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sha1Digest;
            ok &= ModelBase::fromJson(fieldValue, refVal_sha1Digest);
            setSha1Digest(refVal_sha1Digest);
        }
    }
    return ok;
}

void DigitalSignature::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_SignedByIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("signedBy")), m_SignedBy));
    }
    if(m_CertIssuedByIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("certIssuedBy")), m_CertIssuedBy));
    }
    if(m_ValidFromIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("validFrom")), m_ValidFrom));
    }
    if(m_ValidTillIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("validTill")), m_ValidTill));
    }
    if(m_ReasonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("reason")), m_Reason));
    }
    if(m_LocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("location")), m_Location));
    }
    if(m_Sha1DigestIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sha1Digest")), m_Sha1Digest));
    }
}

bool DigitalSignature::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("signedBy"))))
    {
        utility::string_t refVal_signedBy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("signedBy"))), refVal_signedBy );
        setSignedBy(refVal_signedBy);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("certIssuedBy"))))
    {
        utility::string_t refVal_certIssuedBy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("certIssuedBy"))), refVal_certIssuedBy );
        setCertIssuedBy(refVal_certIssuedBy);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("validFrom"))))
    {
        utility::datetime refVal_validFrom;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("validFrom"))), refVal_validFrom );
        setValidFrom(refVal_validFrom);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("validTill"))))
    {
        utility::datetime refVal_validTill;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("validTill"))), refVal_validTill );
        setValidTill(refVal_validTill);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("reason"))))
    {
        utility::string_t refVal_reason;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("reason"))), refVal_reason );
        setReason(refVal_reason);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("location"))))
    {
        utility::string_t refVal_location;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("location"))), refVal_location );
        setLocation(refVal_location);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("sha1Digest"))))
    {
        utility::string_t refVal_sha1Digest;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sha1Digest"))), refVal_sha1Digest );
        setSha1Digest(refVal_sha1Digest);
    }
    return ok;
}

utility::string_t DigitalSignature::getSignedBy() const
{
    return m_SignedBy;
}

void DigitalSignature::setSignedBy(const utility::string_t& value)
{
    m_SignedBy = value;
    m_SignedByIsSet = true;
}

bool DigitalSignature::signedByIsSet() const
{
    return m_SignedByIsSet;
}

void DigitalSignature::unsetSignedBy()
{
    m_SignedByIsSet = false;
}
utility::string_t DigitalSignature::getCertIssuedBy() const
{
    return m_CertIssuedBy;
}

void DigitalSignature::setCertIssuedBy(const utility::string_t& value)
{
    m_CertIssuedBy = value;
    m_CertIssuedByIsSet = true;
}

bool DigitalSignature::certIssuedByIsSet() const
{
    return m_CertIssuedByIsSet;
}

void DigitalSignature::unsetCertIssuedBy()
{
    m_CertIssuedByIsSet = false;
}
utility::datetime DigitalSignature::getValidFrom() const
{
    return m_ValidFrom;
}

void DigitalSignature::setValidFrom(const utility::datetime& value)
{
    m_ValidFrom = value;
    m_ValidFromIsSet = true;
}

bool DigitalSignature::validFromIsSet() const
{
    return m_ValidFromIsSet;
}

void DigitalSignature::unsetValidFrom()
{
    m_ValidFromIsSet = false;
}
utility::datetime DigitalSignature::getValidTill() const
{
    return m_ValidTill;
}

void DigitalSignature::setValidTill(const utility::datetime& value)
{
    m_ValidTill = value;
    m_ValidTillIsSet = true;
}

bool DigitalSignature::validTillIsSet() const
{
    return m_ValidTillIsSet;
}

void DigitalSignature::unsetValidTill()
{
    m_ValidTillIsSet = false;
}
utility::string_t DigitalSignature::getReason() const
{
    return m_Reason;
}

void DigitalSignature::setReason(const utility::string_t& value)
{
    m_Reason = value;
    m_ReasonIsSet = true;
}

bool DigitalSignature::reasonIsSet() const
{
    return m_ReasonIsSet;
}

void DigitalSignature::unsetReason()
{
    m_ReasonIsSet = false;
}
utility::string_t DigitalSignature::getLocation() const
{
    return m_Location;
}

void DigitalSignature::setLocation(const utility::string_t& value)
{
    m_Location = value;
    m_LocationIsSet = true;
}

bool DigitalSignature::locationIsSet() const
{
    return m_LocationIsSet;
}

void DigitalSignature::unsetLocation()
{
    m_LocationIsSet = false;
}
utility::string_t DigitalSignature::getSha1Digest() const
{
    return m_Sha1Digest;
}

void DigitalSignature::setSha1Digest(const utility::string_t& value)
{
    m_Sha1Digest = value;
    m_Sha1DigestIsSet = true;
}

bool DigitalSignature::sha1DigestIsSet() const
{
    return m_Sha1DigestIsSet;
}

void DigitalSignature::unsetSha1Digest()
{
    m_Sha1DigestIsSet = false;
}
}
}


