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



#include "MyDataMyConsent/model/DataProtectionOfficer.h"

namespace mydatamyconsent {
namespace models {



DataProtectionOfficer::DataProtectionOfficer()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Email = utility::conversions::to_string_t("");
    m_EmailIsSet = false;
    m_PhoneNumber = utility::conversions::to_string_t("");
    m_PhoneNumberIsSet = false;
    m_Website = utility::conversions::to_string_t("");
    m_WebsiteIsSet = false;
    m_PostalAddress = utility::conversions::to_string_t("");
    m_PostalAddressIsSet = false;
}

DataProtectionOfficer::~DataProtectionOfficer()
{
}

void DataProtectionOfficer::validate()
{
    // TODO: implement validation
}

web::json::value DataProtectionOfficer::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_EmailIsSet)
    {
        val[utility::conversions::to_string_t(U("email"))] = ModelBase::toJson(m_Email);
    }
    if(m_PhoneNumberIsSet)
    {
        val[utility::conversions::to_string_t(U("phoneNumber"))] = ModelBase::toJson(m_PhoneNumber);
    }
    if(m_WebsiteIsSet)
    {
        val[utility::conversions::to_string_t(U("website"))] = ModelBase::toJson(m_Website);
    }
    if(m_PostalAddressIsSet)
    {
        val[utility::conversions::to_string_t(U("postalAddress"))] = ModelBase::toJson(m_PostalAddress);
    }

    return val;
}

bool DataProtectionOfficer::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t(U("email"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("email")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEmail;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEmail);
            setEmail(refVal_setEmail);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("phoneNumber"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("phoneNumber")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPhoneNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPhoneNumber);
            setPhoneNumber(refVal_setPhoneNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("website"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("website")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setWebsite;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWebsite);
            setWebsite(refVal_setWebsite);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("postalAddress"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("postalAddress")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPostalAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPostalAddress);
            setPostalAddress(refVal_setPostalAddress);
        }
    }
    return ok;
}

void DataProtectionOfficer::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_EmailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("email")), m_Email));
    }
    if(m_PhoneNumberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("phoneNumber")), m_PhoneNumber));
    }
    if(m_WebsiteIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("website")), m_Website));
    }
    if(m_PostalAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("postalAddress")), m_PostalAddress));
    }
}

bool DataProtectionOfficer::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("email"))))
    {
        utility::string_t refVal_setEmail;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("email"))), refVal_setEmail );
        setEmail(refVal_setEmail);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("phoneNumber"))))
    {
        utility::string_t refVal_setPhoneNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("phoneNumber"))), refVal_setPhoneNumber );
        setPhoneNumber(refVal_setPhoneNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("website"))))
    {
        utility::string_t refVal_setWebsite;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("website"))), refVal_setWebsite );
        setWebsite(refVal_setWebsite);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("postalAddress"))))
    {
        utility::string_t refVal_setPostalAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("postalAddress"))), refVal_setPostalAddress );
        setPostalAddress(refVal_setPostalAddress);
    }
    return ok;
}

utility::string_t DataProtectionOfficer::getName() const
{
    return m_Name;
}

void DataProtectionOfficer::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool DataProtectionOfficer::nameIsSet() const
{
    return m_NameIsSet;
}

void DataProtectionOfficer::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t DataProtectionOfficer::getEmail() const
{
    return m_Email;
}

void DataProtectionOfficer::setEmail(const utility::string_t& value)
{
    m_Email = value;
    m_EmailIsSet = true;
}

bool DataProtectionOfficer::emailIsSet() const
{
    return m_EmailIsSet;
}

void DataProtectionOfficer::unsetEmail()
{
    m_EmailIsSet = false;
}
utility::string_t DataProtectionOfficer::getPhoneNumber() const
{
    return m_PhoneNumber;
}

void DataProtectionOfficer::setPhoneNumber(const utility::string_t& value)
{
    m_PhoneNumber = value;
    m_PhoneNumberIsSet = true;
}

bool DataProtectionOfficer::phoneNumberIsSet() const
{
    return m_PhoneNumberIsSet;
}

void DataProtectionOfficer::unsetPhoneNumber()
{
    m_PhoneNumberIsSet = false;
}
utility::string_t DataProtectionOfficer::getWebsite() const
{
    return m_Website;
}

void DataProtectionOfficer::setWebsite(const utility::string_t& value)
{
    m_Website = value;
    m_WebsiteIsSet = true;
}

bool DataProtectionOfficer::websiteIsSet() const
{
    return m_WebsiteIsSet;
}

void DataProtectionOfficer::unsetWebsite()
{
    m_WebsiteIsSet = false;
}
utility::string_t DataProtectionOfficer::getPostalAddress() const
{
    return m_PostalAddress;
}

void DataProtectionOfficer::setPostalAddress(const utility::string_t& value)
{
    m_PostalAddress = value;
    m_PostalAddressIsSet = true;
}

bool DataProtectionOfficer::postalAddressIsSet() const
{
    return m_PostalAddressIsSet;
}

void DataProtectionOfficer::unsetPostalAddress()
{
    m_PostalAddressIsSet = false;
}
}
}


