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



#include "IssuedDocumentDetails.h"

namespace mydatamyconsent {
namespace models {




IssuedDocumentDetails::IssuedDocumentDetails()
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
    m_ReceiverIsSet = false;
    m_MetadataIsSet = false;
    m_DigitalSignaturesIsSet = false;
}

IssuedDocumentDetails::~IssuedDocumentDetails()
{
}

void IssuedDocumentDetails::validate()
{
    // TODO: implement validation
}

web::json::value IssuedDocumentDetails::toJson() const
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
    if(m_ReceiverIsSet)
    {
        val[utility::conversions::to_string_t(U("receiver"))] = ModelBase::toJson(m_Receiver);
    }
    if(m_MetadataIsSet)
    {
        val[utility::conversions::to_string_t(U("metadata"))] = ModelBase::toJson(m_Metadata);
    }
    if(m_DigitalSignaturesIsSet)
    {
        val[utility::conversions::to_string_t(U("digitalSignatures"))] = ModelBase::toJson(m_DigitalSignatures);
    }

    return val;
}

bool IssuedDocumentDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("identifier"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("identifier")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_identifier;
            ok &= ModelBase::fromJson(fieldValue, refVal_identifier);
            setIdentifier(refVal_identifier);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("documentType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("documentType")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_documentType;
            ok &= ModelBase::fromJson(fieldValue, refVal_documentType);
            setDocumentType(refVal_documentType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("issuedTo"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("issuedTo")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_issuedTo;
            ok &= ModelBase::fromJson(fieldValue, refVal_issuedTo);
            setIssuedTo(refVal_issuedTo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("issuedAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("issuedAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_issuedAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_issuedAtUtc);
            setIssuedAtUtc(refVal_issuedAtUtc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("expiresAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("expiresAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_expiresAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_expiresAtUtc);
            setExpiresAtUtc(refVal_expiresAtUtc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("acceptedAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("acceptedAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_acceptedAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_acceptedAtUtc);
            setAcceptedAtUtc(refVal_acceptedAtUtc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("receiver"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("receiver")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DocumentReceiver> refVal_receiver;
            ok &= ModelBase::fromJson(fieldValue, refVal_receiver);
            setReceiver(refVal_receiver);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("metadata"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("metadata")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_metadata;
            ok &= ModelBase::fromJson(fieldValue, refVal_metadata);
            setMetadata(refVal_metadata);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("digitalSignatures"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("digitalSignatures")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<DocumentDigitalSignature>> refVal_digitalSignatures;
            ok &= ModelBase::fromJson(fieldValue, refVal_digitalSignatures);
            setDigitalSignatures(refVal_digitalSignatures);
        }
    }
    return ok;
}

void IssuedDocumentDetails::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ReceiverIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("receiver")), m_Receiver));
    }
    if(m_MetadataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("metadata")), m_Metadata));
    }
    if(m_DigitalSignaturesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("digitalSignatures")), m_DigitalSignatures));
    }
}

bool IssuedDocumentDetails::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("identifier"))))
    {
        utility::string_t refVal_identifier;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("identifier"))), refVal_identifier );
        setIdentifier(refVal_identifier);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("documentType"))))
    {
        utility::string_t refVal_documentType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("documentType"))), refVal_documentType );
        setDocumentType(refVal_documentType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("issuedTo"))))
    {
        utility::string_t refVal_issuedTo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("issuedTo"))), refVal_issuedTo );
        setIssuedTo(refVal_issuedTo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("issuedAtUtc"))))
    {
        utility::datetime refVal_issuedAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("issuedAtUtc"))), refVal_issuedAtUtc );
        setIssuedAtUtc(refVal_issuedAtUtc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("expiresAtUtc"))))
    {
        utility::datetime refVal_expiresAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("expiresAtUtc"))), refVal_expiresAtUtc );
        setExpiresAtUtc(refVal_expiresAtUtc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("acceptedAtUtc"))))
    {
        utility::datetime refVal_acceptedAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("acceptedAtUtc"))), refVal_acceptedAtUtc );
        setAcceptedAtUtc(refVal_acceptedAtUtc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("receiver"))))
    {
        std::shared_ptr<DocumentReceiver> refVal_receiver;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("receiver"))), refVal_receiver );
        setReceiver(refVal_receiver);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("metadata"))))
    {
        std::map<utility::string_t, utility::string_t> refVal_metadata;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("metadata"))), refVal_metadata );
        setMetadata(refVal_metadata);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("digitalSignatures"))))
    {
        std::vector<std::shared_ptr<DocumentDigitalSignature>> refVal_digitalSignatures;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("digitalSignatures"))), refVal_digitalSignatures );
        setDigitalSignatures(refVal_digitalSignatures);
    }
    return ok;
}

utility::string_t IssuedDocumentDetails::getId() const
{
    return m_Id;
}

void IssuedDocumentDetails::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool IssuedDocumentDetails::idIsSet() const
{
    return m_IdIsSet;
}

void IssuedDocumentDetails::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t IssuedDocumentDetails::getIdentifier() const
{
    return m_Identifier;
}

void IssuedDocumentDetails::setIdentifier(const utility::string_t& value)
{
    m_Identifier = value;
    m_IdentifierIsSet = true;
}

bool IssuedDocumentDetails::identifierIsSet() const
{
    return m_IdentifierIsSet;
}

void IssuedDocumentDetails::unsetIdentifier()
{
    m_IdentifierIsSet = false;
}
utility::string_t IssuedDocumentDetails::getDocumentType() const
{
    return m_DocumentType;
}

void IssuedDocumentDetails::setDocumentType(const utility::string_t& value)
{
    m_DocumentType = value;
    m_DocumentTypeIsSet = true;
}

bool IssuedDocumentDetails::documentTypeIsSet() const
{
    return m_DocumentTypeIsSet;
}

void IssuedDocumentDetails::unsetDocumentType()
{
    m_DocumentTypeIsSet = false;
}
utility::string_t IssuedDocumentDetails::getIssuedTo() const
{
    return m_IssuedTo;
}

void IssuedDocumentDetails::setIssuedTo(const utility::string_t& value)
{
    m_IssuedTo = value;
    m_IssuedToIsSet = true;
}

bool IssuedDocumentDetails::issuedToIsSet() const
{
    return m_IssuedToIsSet;
}

void IssuedDocumentDetails::unsetIssuedTo()
{
    m_IssuedToIsSet = false;
}
utility::datetime IssuedDocumentDetails::getIssuedAtUtc() const
{
    return m_IssuedAtUtc;
}

void IssuedDocumentDetails::setIssuedAtUtc(const utility::datetime& value)
{
    m_IssuedAtUtc = value;
    m_IssuedAtUtcIsSet = true;
}

bool IssuedDocumentDetails::issuedAtUtcIsSet() const
{
    return m_IssuedAtUtcIsSet;
}

void IssuedDocumentDetails::unsetIssuedAtUtc()
{
    m_IssuedAtUtcIsSet = false;
}
utility::datetime IssuedDocumentDetails::getExpiresAtUtc() const
{
    return m_ExpiresAtUtc;
}

void IssuedDocumentDetails::setExpiresAtUtc(const utility::datetime& value)
{
    m_ExpiresAtUtc = value;
    m_ExpiresAtUtcIsSet = true;
}

bool IssuedDocumentDetails::expiresAtUtcIsSet() const
{
    return m_ExpiresAtUtcIsSet;
}

void IssuedDocumentDetails::unsetExpiresAtUtc()
{
    m_ExpiresAtUtcIsSet = false;
}
utility::datetime IssuedDocumentDetails::getAcceptedAtUtc() const
{
    return m_AcceptedAtUtc;
}

void IssuedDocumentDetails::setAcceptedAtUtc(const utility::datetime& value)
{
    m_AcceptedAtUtc = value;
    m_AcceptedAtUtcIsSet = true;
}

bool IssuedDocumentDetails::acceptedAtUtcIsSet() const
{
    return m_AcceptedAtUtcIsSet;
}

void IssuedDocumentDetails::unsetAcceptedAtUtc()
{
    m_AcceptedAtUtcIsSet = false;
}
std::shared_ptr<DocumentReceiver> IssuedDocumentDetails::getReceiver() const
{
    return m_Receiver;
}

void IssuedDocumentDetails::setReceiver(const std::shared_ptr<DocumentReceiver>& value)
{
    m_Receiver = value;
    m_ReceiverIsSet = true;
}

bool IssuedDocumentDetails::receiverIsSet() const
{
    return m_ReceiverIsSet;
}

void IssuedDocumentDetails::unsetReceiver()
{
    m_ReceiverIsSet = false;
}
std::map<utility::string_t, utility::string_t>& IssuedDocumentDetails::getMetadata()
{
    return m_Metadata;
}

void IssuedDocumentDetails::setMetadata(const std::map<utility::string_t, utility::string_t>& value)
{
    m_Metadata = value;
    m_MetadataIsSet = true;
}

bool IssuedDocumentDetails::metadataIsSet() const
{
    return m_MetadataIsSet;
}

void IssuedDocumentDetails::unsetMetadata()
{
    m_MetadataIsSet = false;
}
std::vector<std::shared_ptr<DocumentDigitalSignature>>& IssuedDocumentDetails::getDigitalSignatures()
{
    return m_DigitalSignatures;
}

void IssuedDocumentDetails::setDigitalSignatures(const std::vector<std::shared_ptr<DocumentDigitalSignature>>& value)
{
    m_DigitalSignatures = value;
    m_DigitalSignaturesIsSet = true;
}

bool IssuedDocumentDetails::digitalSignaturesIsSet() const
{
    return m_DigitalSignaturesIsSet;
}

void IssuedDocumentDetails::unsetDigitalSignatures()
{
    m_DigitalSignaturesIsSet = false;
}
}
}

