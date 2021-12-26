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



#include "DataConsentRequesterDto.h"

namespace mydatamyconsent {
namespace models {




DataConsentRequesterDto::DataConsentRequesterDto()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_LogoUrl = utility::conversions::to_string_t("");
    m_LogoUrlIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_Website = utility::conversions::to_string_t("");
    m_WebsiteIsSet = false;
    m_SupportEmail = utility::conversions::to_string_t("");
    m_SupportEmailIsSet = false;
    m_HelpLineNumber = utility::conversions::to_string_t("");
    m_HelpLineNumberIsSet = false;
}

DataConsentRequesterDto::~DataConsentRequesterDto()
{
}

void DataConsentRequesterDto::validate()
{
    // TODO: implement validation
}

web::json::value DataConsentRequesterDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_LogoUrlIsSet)
    {
        val[utility::conversions::to_string_t(U("logoUrl"))] = ModelBase::toJson(m_LogoUrl);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_WebsiteIsSet)
    {
        val[utility::conversions::to_string_t(U("website"))] = ModelBase::toJson(m_Website);
    }
    if(m_SupportEmailIsSet)
    {
        val[utility::conversions::to_string_t(U("supportEmail"))] = ModelBase::toJson(m_SupportEmail);
    }
    if(m_HelpLineNumberIsSet)
    {
        val[utility::conversions::to_string_t(U("helpLineNumber"))] = ModelBase::toJson(m_HelpLineNumber);
    }

    return val;
}

bool DataConsentRequesterDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t(U("logoUrl"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("logoUrl")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_logoUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_logoUrl);
            setLogoUrl(refVal_logoUrl);
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
    if(val.has_field(utility::conversions::to_string_t(U("website"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("website")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_website;
            ok &= ModelBase::fromJson(fieldValue, refVal_website);
            setWebsite(refVal_website);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("supportEmail"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("supportEmail")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_supportEmail;
            ok &= ModelBase::fromJson(fieldValue, refVal_supportEmail);
            setSupportEmail(refVal_supportEmail);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("helpLineNumber"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("helpLineNumber")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_helpLineNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_helpLineNumber);
            setHelpLineNumber(refVal_helpLineNumber);
        }
    }
    return ok;
}

void DataConsentRequesterDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_LogoUrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("logoUrl")), m_LogoUrl));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_WebsiteIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("website")), m_Website));
    }
    if(m_SupportEmailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("supportEmail")), m_SupportEmail));
    }
    if(m_HelpLineNumberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("helpLineNumber")), m_HelpLineNumber));
    }
}

bool DataConsentRequesterDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("logoUrl"))))
    {
        utility::string_t refVal_logoUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("logoUrl"))), refVal_logoUrl );
        setLogoUrl(refVal_logoUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_description;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_description );
        setDescription(refVal_description);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("website"))))
    {
        utility::string_t refVal_website;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("website"))), refVal_website );
        setWebsite(refVal_website);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("supportEmail"))))
    {
        utility::string_t refVal_supportEmail;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("supportEmail"))), refVal_supportEmail );
        setSupportEmail(refVal_supportEmail);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("helpLineNumber"))))
    {
        utility::string_t refVal_helpLineNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("helpLineNumber"))), refVal_helpLineNumber );
        setHelpLineNumber(refVal_helpLineNumber);
    }
    return ok;
}

utility::string_t DataConsentRequesterDto::getName() const
{
    return m_Name;
}

void DataConsentRequesterDto::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool DataConsentRequesterDto::nameIsSet() const
{
    return m_NameIsSet;
}

void DataConsentRequesterDto::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t DataConsentRequesterDto::getLogoUrl() const
{
    return m_LogoUrl;
}

void DataConsentRequesterDto::setLogoUrl(const utility::string_t& value)
{
    m_LogoUrl = value;
    m_LogoUrlIsSet = true;
}

bool DataConsentRequesterDto::logoUrlIsSet() const
{
    return m_LogoUrlIsSet;
}

void DataConsentRequesterDto::unsetLogoUrl()
{
    m_LogoUrlIsSet = false;
}
utility::string_t DataConsentRequesterDto::getDescription() const
{
    return m_Description;
}

void DataConsentRequesterDto::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool DataConsentRequesterDto::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void DataConsentRequesterDto::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t DataConsentRequesterDto::getWebsite() const
{
    return m_Website;
}

void DataConsentRequesterDto::setWebsite(const utility::string_t& value)
{
    m_Website = value;
    m_WebsiteIsSet = true;
}

bool DataConsentRequesterDto::websiteIsSet() const
{
    return m_WebsiteIsSet;
}

void DataConsentRequesterDto::unsetWebsite()
{
    m_WebsiteIsSet = false;
}
utility::string_t DataConsentRequesterDto::getSupportEmail() const
{
    return m_SupportEmail;
}

void DataConsentRequesterDto::setSupportEmail(const utility::string_t& value)
{
    m_SupportEmail = value;
    m_SupportEmailIsSet = true;
}

bool DataConsentRequesterDto::supportEmailIsSet() const
{
    return m_SupportEmailIsSet;
}

void DataConsentRequesterDto::unsetSupportEmail()
{
    m_SupportEmailIsSet = false;
}
utility::string_t DataConsentRequesterDto::getHelpLineNumber() const
{
    return m_HelpLineNumber;
}

void DataConsentRequesterDto::setHelpLineNumber(const utility::string_t& value)
{
    m_HelpLineNumber = value;
    m_HelpLineNumberIsSet = true;
}

bool DataConsentRequesterDto::helpLineNumberIsSet() const
{
    return m_HelpLineNumberIsSet;
}

void DataConsentRequesterDto::unsetHelpLineNumber()
{
    m_HelpLineNumberIsSet = false;
}
}
}


