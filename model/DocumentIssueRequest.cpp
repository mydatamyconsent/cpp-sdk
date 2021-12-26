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



#include "DocumentIssueRequest.h"

namespace mydatamyconsent {
namespace models {




DocumentIssueRequest::DocumentIssueRequest()
{
    m_DocumentTypeId = utility::conversions::to_string_t("");
    m_DocumentTypeIdIsSet = false;
    m_Identifier = utility::conversions::to_string_t("");
    m_IdentifierIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_ReceiverIsSet = false;
    m_ExpiresAtUtc = utility::conversions::to_string_t("");
    m_ExpiresAtUtcIsSet = false;
    m_Base64PDFDocument = utility::conversions::to_string_t("");
    m_Base64PDFDocumentIsSet = false;
    m_MetadataIsSet = false;
}

DocumentIssueRequest::~DocumentIssueRequest()
{
}

void DocumentIssueRequest::validate()
{
    // TODO: implement validation
}

web::json::value DocumentIssueRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DocumentTypeIdIsSet)
    {
        val[utility::conversions::to_string_t(U("documentTypeId"))] = ModelBase::toJson(m_DocumentTypeId);
    }
    if(m_IdentifierIsSet)
    {
        val[utility::conversions::to_string_t(U("identifier"))] = ModelBase::toJson(m_Identifier);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_ReceiverIsSet)
    {
        val[utility::conversions::to_string_t(U("receiver"))] = ModelBase::toJson(m_Receiver);
    }
    if(m_ExpiresAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("expiresAtUtc"))] = ModelBase::toJson(m_ExpiresAtUtc);
    }
    if(m_Base64PDFDocumentIsSet)
    {
        val[utility::conversions::to_string_t(U("base64PDFDocument"))] = ModelBase::toJson(m_Base64PDFDocument);
    }
    if(m_MetadataIsSet)
    {
        val[utility::conversions::to_string_t(U("metadata"))] = ModelBase::toJson(m_Metadata);
    }

    return val;
}

bool DocumentIssueRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("documentTypeId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("documentTypeId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_documentTypeId;
            ok &= ModelBase::fromJson(fieldValue, refVal_documentTypeId);
            setDocumentTypeId(refVal_documentTypeId);
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
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("description"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("description")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_description;
            ok &= ModelBase::fromJson(fieldValue, refVal_description);
            setDescription(refVal_description);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("receiver"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("receiver")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Receiver> refVal_receiver;
            ok &= ModelBase::fromJson(fieldValue, refVal_receiver);
            setReceiver(refVal_receiver);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("expiresAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("expiresAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_expiresAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_expiresAtUtc);
            setExpiresAtUtc(refVal_expiresAtUtc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("base64PDFDocument"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("base64PDFDocument")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_base64PDFDocument;
            ok &= ModelBase::fromJson(fieldValue, refVal_base64PDFDocument);
            setBase64PDFDocument(refVal_base64PDFDocument);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("metadata"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("metadata")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<AnyType> refVal_metadata;
            ok &= ModelBase::fromJson(fieldValue, refVal_metadata);
            setMetadata(refVal_metadata);
        }
    }
    return ok;
}

void DocumentIssueRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_DocumentTypeIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("documentTypeId")), m_DocumentTypeId));
    }
    if(m_IdentifierIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("identifier")), m_Identifier));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_ReceiverIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("receiver")), m_Receiver));
    }
    if(m_ExpiresAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("expiresAtUtc")), m_ExpiresAtUtc));
    }
    if(m_Base64PDFDocumentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("base64PDFDocument")), m_Base64PDFDocument));
    }
    if(m_MetadataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("metadata")), m_Metadata));
    }
}

bool DocumentIssueRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("documentTypeId"))))
    {
        utility::string_t refVal_documentTypeId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("documentTypeId"))), refVal_documentTypeId );
        setDocumentTypeId(refVal_documentTypeId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("identifier"))))
    {
        utility::string_t refVal_identifier;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("identifier"))), refVal_identifier );
        setIdentifier(refVal_identifier);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_description;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_description );
        setDescription(refVal_description);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("receiver"))))
    {
        std::shared_ptr<Receiver> refVal_receiver;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("receiver"))), refVal_receiver );
        setReceiver(refVal_receiver);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("expiresAtUtc"))))
    {
        utility::string_t refVal_expiresAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("expiresAtUtc"))), refVal_expiresAtUtc );
        setExpiresAtUtc(refVal_expiresAtUtc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("base64PDFDocument"))))
    {
        utility::string_t refVal_base64PDFDocument;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("base64PDFDocument"))), refVal_base64PDFDocument );
        setBase64PDFDocument(refVal_base64PDFDocument);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("metadata"))))
    {
        std::shared_ptr<AnyType> refVal_metadata;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("metadata"))), refVal_metadata );
        setMetadata(refVal_metadata);
    }
    return ok;
}

utility::string_t DocumentIssueRequest::getDocumentTypeId() const
{
    return m_DocumentTypeId;
}

void DocumentIssueRequest::setDocumentTypeId(const utility::string_t& value)
{
    m_DocumentTypeId = value;
    m_DocumentTypeIdIsSet = true;
}

bool DocumentIssueRequest::documentTypeIdIsSet() const
{
    return m_DocumentTypeIdIsSet;
}

void DocumentIssueRequest::unsetDocumentTypeId()
{
    m_DocumentTypeIdIsSet = false;
}
utility::string_t DocumentIssueRequest::getIdentifier() const
{
    return m_Identifier;
}

void DocumentIssueRequest::setIdentifier(const utility::string_t& value)
{
    m_Identifier = value;
    m_IdentifierIsSet = true;
}

bool DocumentIssueRequest::identifierIsSet() const
{
    return m_IdentifierIsSet;
}

void DocumentIssueRequest::unsetIdentifier()
{
    m_IdentifierIsSet = false;
}
utility::string_t DocumentIssueRequest::getName() const
{
    return m_Name;
}

void DocumentIssueRequest::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool DocumentIssueRequest::nameIsSet() const
{
    return m_NameIsSet;
}

void DocumentIssueRequest::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t DocumentIssueRequest::getDescription() const
{
    return m_Description;
}

void DocumentIssueRequest::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool DocumentIssueRequest::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void DocumentIssueRequest::unsetDescription()
{
    m_DescriptionIsSet = false;
}
std::shared_ptr<Receiver> DocumentIssueRequest::getReceiver() const
{
    return m_Receiver;
}

void DocumentIssueRequest::setReceiver(const std::shared_ptr<Receiver>& value)
{
    m_Receiver = value;
    m_ReceiverIsSet = true;
}

bool DocumentIssueRequest::receiverIsSet() const
{
    return m_ReceiverIsSet;
}

void DocumentIssueRequest::unsetReceiver()
{
    m_ReceiverIsSet = false;
}
utility::string_t DocumentIssueRequest::getExpiresAtUtc() const
{
    return m_ExpiresAtUtc;
}

void DocumentIssueRequest::setExpiresAtUtc(const utility::string_t& value)
{
    m_ExpiresAtUtc = value;
    m_ExpiresAtUtcIsSet = true;
}

bool DocumentIssueRequest::expiresAtUtcIsSet() const
{
    return m_ExpiresAtUtcIsSet;
}

void DocumentIssueRequest::unsetExpiresAtUtc()
{
    m_ExpiresAtUtcIsSet = false;
}
utility::string_t DocumentIssueRequest::getBase64PDFDocument() const
{
    return m_Base64PDFDocument;
}

void DocumentIssueRequest::setBase64PDFDocument(const utility::string_t& value)
{
    m_Base64PDFDocument = value;
    m_Base64PDFDocumentIsSet = true;
}

bool DocumentIssueRequest::base64PDFDocumentIsSet() const
{
    return m_Base64PDFDocumentIsSet;
}

void DocumentIssueRequest::unsetBase64PDFDocument()
{
    m_Base64PDFDocumentIsSet = false;
}
std::shared_ptr<AnyType> DocumentIssueRequest::getMetadata() const
{
    return m_Metadata;
}

void DocumentIssueRequest::setMetadata(const std::shared_ptr<AnyType>& value)
{
    m_Metadata = value;
    m_MetadataIsSet = true;
}

bool DocumentIssueRequest::metadataIsSet() const
{
    return m_MetadataIsSet;
}

void DocumentIssueRequest::unsetMetadata()
{
    m_MetadataIsSet = false;
}
}
}


