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



#include "MyDataMyConsent/model/DataConsentDocument.h"

namespace mydatamyconsent {
namespace models {



DataConsentDocument::DataConsentDocument()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Category = utility::conversions::to_string_t("");
    m_CategoryIsSet = false;
    m_Identifier = utility::conversions::to_string_t("");
    m_IdentifierIsSet = false;
    m_FieldTitle = utility::conversions::to_string_t("");
    m_FieldTitleIsSet = false;
    m_FieldSlug = utility::conversions::to_string_t("");
    m_FieldSlugIsSet = false;
    m_IssuedAtUtc = utility::datetime();
    m_IssuedAtUtcIsSet = false;
    m_ExpiresAtUtc = utility::datetime();
    m_ExpiresAtUtcIsSet = false;
    m_IssuerIsSet = false;
    m_DigitalSignaturesIsSet = false;
}

DataConsentDocument::~DataConsentDocument()
{
}

void DataConsentDocument::validate()
{
    // TODO: implement validation
}

web::json::value DataConsentDocument::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_CategoryIsSet)
    {
        val[utility::conversions::to_string_t(U("category"))] = ModelBase::toJson(m_Category);
    }
    if(m_IdentifierIsSet)
    {
        val[utility::conversions::to_string_t(U("identifier"))] = ModelBase::toJson(m_Identifier);
    }
    if(m_FieldTitleIsSet)
    {
        val[utility::conversions::to_string_t(U("fieldTitle"))] = ModelBase::toJson(m_FieldTitle);
    }
    if(m_FieldSlugIsSet)
    {
        val[utility::conversions::to_string_t(U("fieldSlug"))] = ModelBase::toJson(m_FieldSlug);
    }
    if(m_IssuedAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("issuedAtUtc"))] = ModelBase::toJson(m_IssuedAtUtc);
    }
    if(m_ExpiresAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("expiresAtUtc"))] = ModelBase::toJson(m_ExpiresAtUtc);
    }
    if(m_IssuerIsSet)
    {
        val[utility::conversions::to_string_t(U("issuer"))] = ModelBase::toJson(m_Issuer);
    }
    if(m_DigitalSignaturesIsSet)
    {
        val[utility::conversions::to_string_t(U("digitalSignatures"))] = ModelBase::toJson(m_DigitalSignatures);
    }

    return val;
}

bool DataConsentDocument::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("category"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("category")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCategory;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCategory);
            setCategory(refVal_setCategory);
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
    if(val.has_field(utility::conversions::to_string_t(U("fieldTitle"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("fieldTitle")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFieldTitle;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFieldTitle);
            setFieldTitle(refVal_setFieldTitle);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("fieldSlug"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("fieldSlug")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFieldSlug;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFieldSlug);
            setFieldSlug(refVal_setFieldSlug);
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
    if(val.has_field(utility::conversions::to_string_t(U("issuer"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("issuer")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DataConsentDocumentIssuer> refVal_setIssuer;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIssuer);
            setIssuer(refVal_setIssuer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("digitalSignatures"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("digitalSignatures")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<DocumentDigitalSignature>> refVal_setDigitalSignatures;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDigitalSignatures);
            setDigitalSignatures(refVal_setDigitalSignatures);
        }
    }
    return ok;
}

void DataConsentDocument::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_CategoryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("category")), m_Category));
    }
    if(m_IdentifierIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("identifier")), m_Identifier));
    }
    if(m_FieldTitleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("fieldTitle")), m_FieldTitle));
    }
    if(m_FieldSlugIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("fieldSlug")), m_FieldSlug));
    }
    if(m_IssuedAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("issuedAtUtc")), m_IssuedAtUtc));
    }
    if(m_ExpiresAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("expiresAtUtc")), m_ExpiresAtUtc));
    }
    if(m_IssuerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("issuer")), m_Issuer));
    }
    if(m_DigitalSignaturesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("digitalSignatures")), m_DigitalSignatures));
    }
}

bool DataConsentDocument::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("category"))))
    {
        utility::string_t refVal_setCategory;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("category"))), refVal_setCategory );
        setCategory(refVal_setCategory);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("identifier"))))
    {
        utility::string_t refVal_setIdentifier;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("identifier"))), refVal_setIdentifier );
        setIdentifier(refVal_setIdentifier);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("fieldTitle"))))
    {
        utility::string_t refVal_setFieldTitle;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("fieldTitle"))), refVal_setFieldTitle );
        setFieldTitle(refVal_setFieldTitle);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("fieldSlug"))))
    {
        utility::string_t refVal_setFieldSlug;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("fieldSlug"))), refVal_setFieldSlug );
        setFieldSlug(refVal_setFieldSlug);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("issuer"))))
    {
        std::shared_ptr<DataConsentDocumentIssuer> refVal_setIssuer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("issuer"))), refVal_setIssuer );
        setIssuer(refVal_setIssuer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("digitalSignatures"))))
    {
        std::vector<std::shared_ptr<DocumentDigitalSignature>> refVal_setDigitalSignatures;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("digitalSignatures"))), refVal_setDigitalSignatures );
        setDigitalSignatures(refVal_setDigitalSignatures);
    }
    return ok;
}

utility::string_t DataConsentDocument::getId() const
{
    return m_Id;
}

void DataConsentDocument::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool DataConsentDocument::idIsSet() const
{
    return m_IdIsSet;
}

void DataConsentDocument::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t DataConsentDocument::getName() const
{
    return m_Name;
}

void DataConsentDocument::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool DataConsentDocument::nameIsSet() const
{
    return m_NameIsSet;
}

void DataConsentDocument::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t DataConsentDocument::getCategory() const
{
    return m_Category;
}

void DataConsentDocument::setCategory(const utility::string_t& value)
{
    m_Category = value;
    m_CategoryIsSet = true;
}

bool DataConsentDocument::categoryIsSet() const
{
    return m_CategoryIsSet;
}

void DataConsentDocument::unsetCategory()
{
    m_CategoryIsSet = false;
}
utility::string_t DataConsentDocument::getIdentifier() const
{
    return m_Identifier;
}

void DataConsentDocument::setIdentifier(const utility::string_t& value)
{
    m_Identifier = value;
    m_IdentifierIsSet = true;
}

bool DataConsentDocument::identifierIsSet() const
{
    return m_IdentifierIsSet;
}

void DataConsentDocument::unsetIdentifier()
{
    m_IdentifierIsSet = false;
}
utility::string_t DataConsentDocument::getFieldTitle() const
{
    return m_FieldTitle;
}

void DataConsentDocument::setFieldTitle(const utility::string_t& value)
{
    m_FieldTitle = value;
    m_FieldTitleIsSet = true;
}

bool DataConsentDocument::fieldTitleIsSet() const
{
    return m_FieldTitleIsSet;
}

void DataConsentDocument::unsetFieldTitle()
{
    m_FieldTitleIsSet = false;
}
utility::string_t DataConsentDocument::getFieldSlug() const
{
    return m_FieldSlug;
}

void DataConsentDocument::setFieldSlug(const utility::string_t& value)
{
    m_FieldSlug = value;
    m_FieldSlugIsSet = true;
}

bool DataConsentDocument::fieldSlugIsSet() const
{
    return m_FieldSlugIsSet;
}

void DataConsentDocument::unsetFieldSlug()
{
    m_FieldSlugIsSet = false;
}
utility::datetime DataConsentDocument::getIssuedAtUtc() const
{
    return m_IssuedAtUtc;
}

void DataConsentDocument::setIssuedAtUtc(const utility::datetime& value)
{
    m_IssuedAtUtc = value;
    m_IssuedAtUtcIsSet = true;
}

bool DataConsentDocument::issuedAtUtcIsSet() const
{
    return m_IssuedAtUtcIsSet;
}

void DataConsentDocument::unsetIssuedAtUtc()
{
    m_IssuedAtUtcIsSet = false;
}
utility::datetime DataConsentDocument::getExpiresAtUtc() const
{
    return m_ExpiresAtUtc;
}

void DataConsentDocument::setExpiresAtUtc(const utility::datetime& value)
{
    m_ExpiresAtUtc = value;
    m_ExpiresAtUtcIsSet = true;
}

bool DataConsentDocument::expiresAtUtcIsSet() const
{
    return m_ExpiresAtUtcIsSet;
}

void DataConsentDocument::unsetExpiresAtUtc()
{
    m_ExpiresAtUtcIsSet = false;
}
std::shared_ptr<DataConsentDocumentIssuer> DataConsentDocument::getIssuer() const
{
    return m_Issuer;
}

void DataConsentDocument::setIssuer(const std::shared_ptr<DataConsentDocumentIssuer>& value)
{
    m_Issuer = value;
    m_IssuerIsSet = true;
}

bool DataConsentDocument::issuerIsSet() const
{
    return m_IssuerIsSet;
}

void DataConsentDocument::unsetIssuer()
{
    m_IssuerIsSet = false;
}
std::vector<std::shared_ptr<DocumentDigitalSignature>>& DataConsentDocument::getDigitalSignatures()
{
    return m_DigitalSignatures;
}

void DataConsentDocument::setDigitalSignatures(const std::vector<std::shared_ptr<DocumentDigitalSignature>>& value)
{
    m_DigitalSignatures = value;
    m_DigitalSignaturesIsSet = true;
}

bool DataConsentDocument::digitalSignaturesIsSet() const
{
    return m_DigitalSignaturesIsSet;
}

void DataConsentDocument::unsetDigitalSignatures()
{
    m_DigitalSignaturesIsSet = false;
}
}
}


