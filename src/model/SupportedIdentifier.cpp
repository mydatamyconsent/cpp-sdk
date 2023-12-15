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



#include "MyDataMyConsent/model/SupportedIdentifier.h"

namespace mydatamyconsent {
namespace models {



SupportedIdentifier::SupportedIdentifier()
{
    m_Iso2 = utility::conversions::to_string_t("");
    m_Iso2IsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_IndividualIdentifiersIsSet = false;
    m_OrganizationIdentifiersIsSet = false;
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
    
    if(m_Iso2IsSet)
    {
        val[utility::conversions::to_string_t(U("iso2"))] = ModelBase::toJson(m_Iso2);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_IndividualIdentifiersIsSet)
    {
        val[utility::conversions::to_string_t(U("individualIdentifiers"))] = ModelBase::toJson(m_IndividualIdentifiers);
    }
    if(m_OrganizationIdentifiersIsSet)
    {
        val[utility::conversions::to_string_t(U("organizationIdentifiers"))] = ModelBase::toJson(m_OrganizationIdentifiers);
    }

    return val;
}

bool SupportedIdentifier::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("iso2"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("iso2")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setIso2;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIso2);
            setIso2(refVal_setIso2);
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
    if(val.has_field(utility::conversions::to_string_t(U("individualIdentifiers"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("individualIdentifiers")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Identifier>> refVal_setIndividualIdentifiers;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIndividualIdentifiers);
            setIndividualIdentifiers(refVal_setIndividualIdentifiers);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("organizationIdentifiers"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("organizationIdentifiers")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Identifier>> refVal_setOrganizationIdentifiers;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOrganizationIdentifiers);
            setOrganizationIdentifiers(refVal_setOrganizationIdentifiers);
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
    if(m_Iso2IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("iso2")), m_Iso2));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_IndividualIdentifiersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("individualIdentifiers")), m_IndividualIdentifiers));
    }
    if(m_OrganizationIdentifiersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("organizationIdentifiers")), m_OrganizationIdentifiers));
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

    if(multipart->hasContent(utility::conversions::to_string_t(U("iso2"))))
    {
        utility::string_t refVal_setIso2;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("iso2"))), refVal_setIso2 );
        setIso2(refVal_setIso2);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("individualIdentifiers"))))
    {
        std::vector<std::shared_ptr<Identifier>> refVal_setIndividualIdentifiers;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("individualIdentifiers"))), refVal_setIndividualIdentifiers );
        setIndividualIdentifiers(refVal_setIndividualIdentifiers);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("organizationIdentifiers"))))
    {
        std::vector<std::shared_ptr<Identifier>> refVal_setOrganizationIdentifiers;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("organizationIdentifiers"))), refVal_setOrganizationIdentifiers );
        setOrganizationIdentifiers(refVal_setOrganizationIdentifiers);
    }
    return ok;
}

utility::string_t SupportedIdentifier::getIso2() const
{
    return m_Iso2;
}

void SupportedIdentifier::setIso2(const utility::string_t& value)
{
    m_Iso2 = value;
    m_Iso2IsSet = true;
}

bool SupportedIdentifier::iso2IsSet() const
{
    return m_Iso2IsSet;
}

void SupportedIdentifier::unsetIso2()
{
    m_Iso2IsSet = false;
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
std::vector<std::shared_ptr<Identifier>>& SupportedIdentifier::getIndividualIdentifiers()
{
    return m_IndividualIdentifiers;
}

void SupportedIdentifier::setIndividualIdentifiers(const std::vector<std::shared_ptr<Identifier>>& value)
{
    m_IndividualIdentifiers = value;
    m_IndividualIdentifiersIsSet = true;
}

bool SupportedIdentifier::individualIdentifiersIsSet() const
{
    return m_IndividualIdentifiersIsSet;
}

void SupportedIdentifier::unsetIndividualIdentifiers()
{
    m_IndividualIdentifiersIsSet = false;
}
std::vector<std::shared_ptr<Identifier>>& SupportedIdentifier::getOrganizationIdentifiers()
{
    return m_OrganizationIdentifiers;
}

void SupportedIdentifier::setOrganizationIdentifiers(const std::vector<std::shared_ptr<Identifier>>& value)
{
    m_OrganizationIdentifiers = value;
    m_OrganizationIdentifiersIsSet = true;
}

bool SupportedIdentifier::organizationIdentifiersIsSet() const
{
    return m_OrganizationIdentifiersIsSet;
}

void SupportedIdentifier::unsetOrganizationIdentifiers()
{
    m_OrganizationIdentifiersIsSet = false;
}
}
}

