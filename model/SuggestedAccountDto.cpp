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



#include "SuggestedAccountDto.h"

namespace mydatamyconsent {
namespace models {




SuggestedAccountDto::SuggestedAccountDto()
{
    m_IssuerId = utility::conversions::to_string_t("");
    m_IssuerIdIsSet = false;
    m_AccountId = utility::conversions::to_string_t("");
    m_AccountIdIsSet = false;
    m_IssuerName = utility::conversions::to_string_t("");
    m_IssuerNameIsSet = false;
    m_AccountLogoUrl = utility::conversions::to_string_t("");
    m_AccountLogoUrlIsSet = false;
    m_AccountNumber = utility::conversions::to_string_t("");
    m_AccountNumberIsSet = false;
    m_AccountCategory = utility::conversions::to_string_t("");
    m_AccountCategoryIsSet = false;
}

SuggestedAccountDto::~SuggestedAccountDto()
{
}

void SuggestedAccountDto::validate()
{
    // TODO: implement validation
}

web::json::value SuggestedAccountDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IssuerIdIsSet)
    {
        val[utility::conversions::to_string_t(U("issuerId"))] = ModelBase::toJson(m_IssuerId);
    }
    if(m_AccountIdIsSet)
    {
        val[utility::conversions::to_string_t(U("accountId"))] = ModelBase::toJson(m_AccountId);
    }
    if(m_IssuerNameIsSet)
    {
        val[utility::conversions::to_string_t(U("issuerName"))] = ModelBase::toJson(m_IssuerName);
    }
    if(m_AccountLogoUrlIsSet)
    {
        val[utility::conversions::to_string_t(U("accountLogoUrl"))] = ModelBase::toJson(m_AccountLogoUrl);
    }
    if(m_AccountNumberIsSet)
    {
        val[utility::conversions::to_string_t(U("accountNumber"))] = ModelBase::toJson(m_AccountNumber);
    }
    if(m_AccountCategoryIsSet)
    {
        val[utility::conversions::to_string_t(U("accountCategory"))] = ModelBase::toJson(m_AccountCategory);
    }

    return val;
}

bool SuggestedAccountDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("issuerId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("issuerId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_issuerId;
            ok &= ModelBase::fromJson(fieldValue, refVal_issuerId);
            setIssuerId(refVal_issuerId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("accountId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("accountId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_accountId;
            ok &= ModelBase::fromJson(fieldValue, refVal_accountId);
            setAccountId(refVal_accountId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("issuerName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("issuerName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_issuerName;
            ok &= ModelBase::fromJson(fieldValue, refVal_issuerName);
            setIssuerName(refVal_issuerName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("accountLogoUrl"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("accountLogoUrl")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_accountLogoUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_accountLogoUrl);
            setAccountLogoUrl(refVal_accountLogoUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("accountNumber"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("accountNumber")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_accountNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_accountNumber);
            setAccountNumber(refVal_accountNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("accountCategory"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("accountCategory")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_accountCategory;
            ok &= ModelBase::fromJson(fieldValue, refVal_accountCategory);
            setAccountCategory(refVal_accountCategory);
        }
    }
    return ok;
}

void SuggestedAccountDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IssuerIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("issuerId")), m_IssuerId));
    }
    if(m_AccountIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("accountId")), m_AccountId));
    }
    if(m_IssuerNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("issuerName")), m_IssuerName));
    }
    if(m_AccountLogoUrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("accountLogoUrl")), m_AccountLogoUrl));
    }
    if(m_AccountNumberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("accountNumber")), m_AccountNumber));
    }
    if(m_AccountCategoryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("accountCategory")), m_AccountCategory));
    }
}

bool SuggestedAccountDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("issuerId"))))
    {
        utility::string_t refVal_issuerId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("issuerId"))), refVal_issuerId );
        setIssuerId(refVal_issuerId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("accountId"))))
    {
        utility::string_t refVal_accountId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("accountId"))), refVal_accountId );
        setAccountId(refVal_accountId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("issuerName"))))
    {
        utility::string_t refVal_issuerName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("issuerName"))), refVal_issuerName );
        setIssuerName(refVal_issuerName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("accountLogoUrl"))))
    {
        utility::string_t refVal_accountLogoUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("accountLogoUrl"))), refVal_accountLogoUrl );
        setAccountLogoUrl(refVal_accountLogoUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("accountNumber"))))
    {
        utility::string_t refVal_accountNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("accountNumber"))), refVal_accountNumber );
        setAccountNumber(refVal_accountNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("accountCategory"))))
    {
        utility::string_t refVal_accountCategory;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("accountCategory"))), refVal_accountCategory );
        setAccountCategory(refVal_accountCategory);
    }
    return ok;
}

utility::string_t SuggestedAccountDto::getIssuerId() const
{
    return m_IssuerId;
}

void SuggestedAccountDto::setIssuerId(const utility::string_t& value)
{
    m_IssuerId = value;
    m_IssuerIdIsSet = true;
}

bool SuggestedAccountDto::issuerIdIsSet() const
{
    return m_IssuerIdIsSet;
}

void SuggestedAccountDto::unsetIssuerId()
{
    m_IssuerIdIsSet = false;
}
utility::string_t SuggestedAccountDto::getAccountId() const
{
    return m_AccountId;
}

void SuggestedAccountDto::setAccountId(const utility::string_t& value)
{
    m_AccountId = value;
    m_AccountIdIsSet = true;
}

bool SuggestedAccountDto::accountIdIsSet() const
{
    return m_AccountIdIsSet;
}

void SuggestedAccountDto::unsetAccountId()
{
    m_AccountIdIsSet = false;
}
utility::string_t SuggestedAccountDto::getIssuerName() const
{
    return m_IssuerName;
}

void SuggestedAccountDto::setIssuerName(const utility::string_t& value)
{
    m_IssuerName = value;
    m_IssuerNameIsSet = true;
}

bool SuggestedAccountDto::issuerNameIsSet() const
{
    return m_IssuerNameIsSet;
}

void SuggestedAccountDto::unsetIssuerName()
{
    m_IssuerNameIsSet = false;
}
utility::string_t SuggestedAccountDto::getAccountLogoUrl() const
{
    return m_AccountLogoUrl;
}

void SuggestedAccountDto::setAccountLogoUrl(const utility::string_t& value)
{
    m_AccountLogoUrl = value;
    m_AccountLogoUrlIsSet = true;
}

bool SuggestedAccountDto::accountLogoUrlIsSet() const
{
    return m_AccountLogoUrlIsSet;
}

void SuggestedAccountDto::unsetAccountLogoUrl()
{
    m_AccountLogoUrlIsSet = false;
}
utility::string_t SuggestedAccountDto::getAccountNumber() const
{
    return m_AccountNumber;
}

void SuggestedAccountDto::setAccountNumber(const utility::string_t& value)
{
    m_AccountNumber = value;
    m_AccountNumberIsSet = true;
}

bool SuggestedAccountDto::accountNumberIsSet() const
{
    return m_AccountNumberIsSet;
}

void SuggestedAccountDto::unsetAccountNumber()
{
    m_AccountNumberIsSet = false;
}
utility::string_t SuggestedAccountDto::getAccountCategory() const
{
    return m_AccountCategory;
}

void SuggestedAccountDto::setAccountCategory(const utility::string_t& value)
{
    m_AccountCategory = value;
    m_AccountCategoryIsSet = true;
}

bool SuggestedAccountDto::accountCategoryIsSet() const
{
    return m_AccountCategoryIsSet;
}

void SuggestedAccountDto::unsetAccountCategory()
{
    m_AccountCategoryIsSet = false;
}
}
}


