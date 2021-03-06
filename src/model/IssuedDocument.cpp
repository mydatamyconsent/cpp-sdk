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



#include "MyDataMyConsent/model/IssuedDocument.h"

namespace mydatamyconsent {
namespace models {



IssuedDocument::IssuedDocument()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Identifier = utility::conversions::to_string_t("");
    m_IdentifierIsSet = false;
    m_DocumentType = utility::conversions::to_string_t("");
    m_DocumentTypeIsSet = false;
    m_IssuedTo = utility::conversions::to_string_t("");
    m_IssuedToIsSet = false;
    m_IssuedAtUtc = utility::datetime();
    m_IssuedAtUtcIsSet = false;
    m_ExpiresAtUtc = utility::datetime();
    m_ExpiresAtUtcIsSet = false;
    m_AcceptedAtUtc = utility::datetime();
    m_AcceptedAtUtcIsSet = false;
}

IssuedDocument::~IssuedDocument()
{
}

void IssuedDocument::validate()
{
    // TODO: implement validation
}

web::json::value IssuedDocument::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_IdentifierIsSet)
    {
        val[utility::conversions::to_string_t(U("identifier"))] = ModelBase::toJson(m_Identifier);
    }
    if(m_DocumentTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("documentType"))] = ModelBase::toJson(m_DocumentType);
    }
    if(m_IssuedToIsSet)
    {
        val[utility::conversions::to_string_t(U("issuedTo"))] = ModelBase::toJson(m_IssuedTo);
    }
    if(m_IssuedAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("issuedAtUtc"))] = ModelBase::toJson(m_IssuedAtUtc);
    }
    if(m_ExpiresAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("expiresAtUtc"))] = ModelBase::toJson(m_ExpiresAtUtc);
    }
    if(m_AcceptedAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("acceptedAtUtc"))] = ModelBase::toJson(m_AcceptedAtUtc);
    }

    return val;
}

bool IssuedDocument::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("identifier"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("identifier")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setIdentifier;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIdentifier);
            setIdentifier(refVal_setIdentifier);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("documentType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("documentType")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDocumentType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDocumentType);
            setDocumentType(refVal_setDocumentType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("issuedTo"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("issuedTo")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setIssuedTo;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIssuedTo);
            setIssuedTo(refVal_setIssuedTo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("issuedAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("issuedAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setIssuedAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIssuedAtUtc);
            setIssuedAtUtc(refVal_setIssuedAtUtc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("expiresAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("expiresAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setExpiresAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExpiresAtUtc);
            setExpiresAtUtc(refVal_setExpiresAtUtc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("acceptedAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("acceptedAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setAcceptedAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAcceptedAtUtc);
            setAcceptedAtUtc(refVal_setAcceptedAtUtc);
        }
    }
    return ok;
}

void IssuedDocument::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_IdentifierIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("identifier")), m_Identifier));
    }
    if(m_DocumentTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("documentType")), m_DocumentType));
    }
    if(m_IssuedToIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("issuedTo")), m_IssuedTo));
    }
    if(m_IssuedAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("issuedAtUtc")), m_IssuedAtUtc));
    }
    if(m_ExpiresAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("expiresAtUtc")), m_ExpiresAtUtc));
    }
    if(m_AcceptedAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("acceptedAtUtc")), m_AcceptedAtUtc));
    }
}

bool IssuedDocument::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("identifier"))))
    {
        utility::string_t refVal_setIdentifier;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("identifier"))), refVal_setIdentifier );
        setIdentifier(refVal_setIdentifier);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("documentType"))))
    {
        utility::string_t refVal_setDocumentType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("documentType"))), refVal_setDocumentType );
        setDocumentType(refVal_setDocumentType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("issuedTo"))))
    {
        utility::string_t refVal_setIssuedTo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("issuedTo"))), refVal_setIssuedTo );
        setIssuedTo(refVal_setIssuedTo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("issuedAtUtc"))))
    {
        utility::datetime refVal_setIssuedAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("issuedAtUtc"))), refVal_setIssuedAtUtc );
        setIssuedAtUtc(refVal_setIssuedAtUtc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("expiresAtUtc"))))
    {
        utility::datetime refVal_setExpiresAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("expiresAtUtc"))), refVal_setExpiresAtUtc );
        setExpiresAtUtc(refVal_setExpiresAtUtc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("acceptedAtUtc"))))
    {
        utility::datetime refVal_setAcceptedAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("acceptedAtUtc"))), refVal_setAcceptedAtUtc );
        setAcceptedAtUtc(refVal_setAcceptedAtUtc);
    }
    return ok;
}

utility::string_t IssuedDocument::getId() const
{
    return m_Id;
}

void IssuedDocument::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool IssuedDocument::idIsSet() const
{
    return m_IdIsSet;
}

void IssuedDocument::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t IssuedDocument::getIdentifier() const
{
    return m_Identifier;
}

void IssuedDocument::setIdentifier(const utility::string_t& value)
{
    m_Identifier = value;
    m_IdentifierIsSet = true;
}

bool IssuedDocument::identifierIsSet() const
{
    return m_IdentifierIsSet;
}

void IssuedDocument::unsetIdentifier()
{
    m_IdentifierIsSet = false;
}
utility::string_t IssuedDocument::getDocumentType() const
{
    return m_DocumentType;
}

void IssuedDocument::setDocumentType(const utility::string_t& value)
{
    m_DocumentType = value;
    m_DocumentTypeIsSet = true;
}

bool IssuedDocument::documentTypeIsSet() const
{
    return m_DocumentTypeIsSet;
}

void IssuedDocument::unsetDocumentType()
{
    m_DocumentTypeIsSet = false;
}
utility::string_t IssuedDocument::getIssuedTo() const
{
    return m_IssuedTo;
}

void IssuedDocument::setIssuedTo(const utility::string_t& value)
{
    m_IssuedTo = value;
    m_IssuedToIsSet = true;
}

bool IssuedDocument::issuedToIsSet() const
{
    return m_IssuedToIsSet;
}

void IssuedDocument::unsetIssuedTo()
{
    m_IssuedToIsSet = false;
}
utility::datetime IssuedDocument::getIssuedAtUtc() const
{
    return m_IssuedAtUtc;
}

void IssuedDocument::setIssuedAtUtc(const utility::datetime& value)
{
    m_IssuedAtUtc = value;
    m_IssuedAtUtcIsSet = true;
}

bool IssuedDocument::issuedAtUtcIsSet() const
{
    return m_IssuedAtUtcIsSet;
}

void IssuedDocument::unsetIssuedAtUtc()
{
    m_IssuedAtUtcIsSet = false;
}
utility::datetime IssuedDocument::getExpiresAtUtc() const
{
    return m_ExpiresAtUtc;
}

void IssuedDocument::setExpiresAtUtc(const utility::datetime& value)
{
    m_ExpiresAtUtc = value;
    m_ExpiresAtUtcIsSet = true;
}

bool IssuedDocument::expiresAtUtcIsSet() const
{
    return m_ExpiresAtUtcIsSet;
}

void IssuedDocument::unsetExpiresAtUtc()
{
    m_ExpiresAtUtcIsSet = false;
}
utility::datetime IssuedDocument::getAcceptedAtUtc() const
{
    return m_AcceptedAtUtc;
}

void IssuedDocument::setAcceptedAtUtc(const utility::datetime& value)
{
    m_AcceptedAtUtc = value;
    m_AcceptedAtUtcIsSet = true;
}

bool IssuedDocument::acceptedAtUtcIsSet() const
{
    return m_AcceptedAtUtcIsSet;
}

void IssuedDocument::unsetAcceptedAtUtc()
{
    m_AcceptedAtUtcIsSet = false;
}
}
}


