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



#include "SupportedIdentifier.h"

namespace mydatamyconsent {
namespace models {




SupportedIdentifier::SupportedIdentifier()
{
    m_Key = utility::conversions::to_string_t("");
    m_KeyIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_ExampleValue = utility::conversions::to_string_t("");
    m_ExampleValueIsSet = false;
}

SupportedIdentifier::~SupportedIdentifier()
{
}

void SupportedIdentifier::validate()
{
    // TODO: implement validation
}

web::json::value SupportedIdentifier::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_KeyIsSet)
    {
        val[utility::conversions::to_string_t(U("key"))] = ModelBase::toJson(m_Key);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_ExampleValueIsSet)
    {
        val[utility::conversions::to_string_t(U("exampleValue"))] = ModelBase::toJson(m_ExampleValue);
    }

    return val;
}

bool SupportedIdentifier::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("key"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("key")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_key;
            ok &= ModelBase::fromJson(fieldValue, refVal_key);
            setKey(refVal_key);
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
    if(val.has_field(utility::conversions::to_string_t(U("exampleValue"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("exampleValue")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_exampleValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_exampleValue);
            setExampleValue(refVal_exampleValue);
        }
    }
    return ok;
}

void SupportedIdentifier::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_KeyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("key")), m_Key));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_ExampleValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("exampleValue")), m_ExampleValue));
    }
}

bool SupportedIdentifier::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("key"))))
    {
        utility::string_t refVal_key;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("key"))), refVal_key );
        setKey(refVal_key);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("exampleValue"))))
    {
        utility::string_t refVal_exampleValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("exampleValue"))), refVal_exampleValue );
        setExampleValue(refVal_exampleValue);
    }
    return ok;
}

utility::string_t SupportedIdentifier::getKey() const
{
    return m_Key;
}

void SupportedIdentifier::setKey(const utility::string_t& value)
{
    m_Key = value;
    m_KeyIsSet = true;
}

bool SupportedIdentifier::keyIsSet() const
{
    return m_KeyIsSet;
}

void SupportedIdentifier::unsetKey()
{
    m_KeyIsSet = false;
}
utility::string_t SupportedIdentifier::getName() const
{
    return m_Name;
}

void SupportedIdentifier::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool SupportedIdentifier::nameIsSet() const
{
    return m_NameIsSet;
}

void SupportedIdentifier::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t SupportedIdentifier::getDescription() const
{
    return m_Description;
}

void SupportedIdentifier::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool SupportedIdentifier::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void SupportedIdentifier::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t SupportedIdentifier::getExampleValue() const
{
    return m_ExampleValue;
}

void SupportedIdentifier::setExampleValue(const utility::string_t& value)
{
    m_ExampleValue = value;
    m_ExampleValueIsSet = true;
}

bool SupportedIdentifier::exampleValueIsSet() const
{
    return m_ExampleValueIsSet;
}

void SupportedIdentifier::unsetExampleValue()
{
    m_ExampleValueIsSet = false;
}
}
}


