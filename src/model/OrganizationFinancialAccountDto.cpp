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



#include "MyDataMyConsent/model/OrganizationFinancialAccountDto.h"

namespace mydatamyconsent {
namespace models {



OrganizationFinancialAccountDto::OrganizationFinancialAccountDto()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_OrganizationId = utility::conversions::to_string_t("");
    m_OrganizationIdIsSet = false;
    m_OrganizationName = utility::conversions::to_string_t("");
    m_OrganizationNameIsSet = false;
    m_BeneficiaryName = utility::conversions::to_string_t("");
    m_BeneficiaryNameIsSet = false;
    m_AccountNumber = utility::conversions::to_string_t("");
    m_AccountNumberIsSet = false;
    m_RoutingNumber = utility::conversions::to_string_t("");
    m_RoutingNumberIsSet = false;
    m_IsPrimary = false;
    m_IsPrimaryIsSet = false;
    m_IsVerified = false;
    m_IsVerifiedIsSet = false;
    m_LogoUrl = utility::conversions::to_string_t("");
    m_LogoUrlIsSet = false;
    m_BankName = utility::conversions::to_string_t("");
    m_BankNameIsSet = false;
    m_BankAccountTypeIsSet = false;
    m_BankAccountProofUrl = utility::conversions::to_string_t("");
    m_BankAccountProofUrlIsSet = false;
}

OrganizationFinancialAccountDto::~OrganizationFinancialAccountDto()
{
}

void OrganizationFinancialAccountDto::validate()
{
    // TODO: implement validation
}

web::json::value OrganizationFinancialAccountDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_OrganizationIdIsSet)
    {
        val[utility::conversions::to_string_t(U("organizationId"))] = ModelBase::toJson(m_OrganizationId);
    }
    if(m_OrganizationNameIsSet)
    {
        val[utility::conversions::to_string_t(U("organizationName"))] = ModelBase::toJson(m_OrganizationName);
    }
    if(m_BeneficiaryNameIsSet)
    {
        val[utility::conversions::to_string_t(U("beneficiaryName"))] = ModelBase::toJson(m_BeneficiaryName);
    }
    if(m_AccountNumberIsSet)
    {
        val[utility::conversions::to_string_t(U("accountNumber"))] = ModelBase::toJson(m_AccountNumber);
    }
    if(m_RoutingNumberIsSet)
    {
        val[utility::conversions::to_string_t(U("routingNumber"))] = ModelBase::toJson(m_RoutingNumber);
    }
    if(m_IsPrimaryIsSet)
    {
        val[utility::conversions::to_string_t(U("isPrimary"))] = ModelBase::toJson(m_IsPrimary);
    }
    if(m_IsVerifiedIsSet)
    {
        val[utility::conversions::to_string_t(U("isVerified"))] = ModelBase::toJson(m_IsVerified);
    }
    if(m_LogoUrlIsSet)
    {
        val[utility::conversions::to_string_t(U("logoUrl"))] = ModelBase::toJson(m_LogoUrl);
    }
    if(m_BankNameIsSet)
    {
        val[utility::conversions::to_string_t(U("bankName"))] = ModelBase::toJson(m_BankName);
    }
    if(m_BankAccountTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("bankAccountType"))] = ModelBase::toJson(m_BankAccountType);
    }
    if(m_BankAccountProofUrlIsSet)
    {
        val[utility::conversions::to_string_t(U("bankAccountProofUrl"))] = ModelBase::toJson(m_BankAccountProofUrl);
    }

    return val;
}

bool OrganizationFinancialAccountDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("organizationId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("organizationId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setOrganizationId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOrganizationId);
            setOrganizationId(refVal_setOrganizationId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("organizationName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("organizationName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setOrganizationName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOrganizationName);
            setOrganizationName(refVal_setOrganizationName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("beneficiaryName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("beneficiaryName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBeneficiaryName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBeneficiaryName);
            setBeneficiaryName(refVal_setBeneficiaryName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("accountNumber"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("accountNumber")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAccountNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccountNumber);
            setAccountNumber(refVal_setAccountNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("routingNumber"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("routingNumber")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setRoutingNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRoutingNumber);
            setRoutingNumber(refVal_setRoutingNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("isPrimary"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("isPrimary")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsPrimary;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsPrimary);
            setIsPrimary(refVal_setIsPrimary);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("isVerified"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("isVerified")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsVerified;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsVerified);
            setIsVerified(refVal_setIsVerified);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("logoUrl"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("logoUrl")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setLogoUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLogoUrl);
            setLogoUrl(refVal_setLogoUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bankName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bankName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBankName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBankName);
            setBankName(refVal_setBankName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bankAccountType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bankAccountType")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BankAccountType> refVal_setBankAccountType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBankAccountType);
            setBankAccountType(refVal_setBankAccountType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bankAccountProofUrl"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bankAccountProofUrl")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBankAccountProofUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBankAccountProofUrl);
            setBankAccountProofUrl(refVal_setBankAccountProofUrl);
        }
    }
    return ok;
}

void OrganizationFinancialAccountDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_OrganizationIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("organizationId")), m_OrganizationId));
    }
    if(m_OrganizationNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("organizationName")), m_OrganizationName));
    }
    if(m_BeneficiaryNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("beneficiaryName")), m_BeneficiaryName));
    }
    if(m_AccountNumberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("accountNumber")), m_AccountNumber));
    }
    if(m_RoutingNumberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("routingNumber")), m_RoutingNumber));
    }
    if(m_IsPrimaryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("isPrimary")), m_IsPrimary));
    }
    if(m_IsVerifiedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("isVerified")), m_IsVerified));
    }
    if(m_LogoUrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("logoUrl")), m_LogoUrl));
    }
    if(m_BankNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bankName")), m_BankName));
    }
    if(m_BankAccountTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bankAccountType")), m_BankAccountType));
    }
    if(m_BankAccountProofUrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bankAccountProofUrl")), m_BankAccountProofUrl));
    }
}

bool OrganizationFinancialAccountDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("organizationId"))))
    {
        utility::string_t refVal_setOrganizationId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("organizationId"))), refVal_setOrganizationId );
        setOrganizationId(refVal_setOrganizationId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("organizationName"))))
    {
        utility::string_t refVal_setOrganizationName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("organizationName"))), refVal_setOrganizationName );
        setOrganizationName(refVal_setOrganizationName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("beneficiaryName"))))
    {
        utility::string_t refVal_setBeneficiaryName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("beneficiaryName"))), refVal_setBeneficiaryName );
        setBeneficiaryName(refVal_setBeneficiaryName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("accountNumber"))))
    {
        utility::string_t refVal_setAccountNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("accountNumber"))), refVal_setAccountNumber );
        setAccountNumber(refVal_setAccountNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("routingNumber"))))
    {
        utility::string_t refVal_setRoutingNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("routingNumber"))), refVal_setRoutingNumber );
        setRoutingNumber(refVal_setRoutingNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("isPrimary"))))
    {
        bool refVal_setIsPrimary;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("isPrimary"))), refVal_setIsPrimary );
        setIsPrimary(refVal_setIsPrimary);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("isVerified"))))
    {
        bool refVal_setIsVerified;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("isVerified"))), refVal_setIsVerified );
        setIsVerified(refVal_setIsVerified);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("logoUrl"))))
    {
        utility::string_t refVal_setLogoUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("logoUrl"))), refVal_setLogoUrl );
        setLogoUrl(refVal_setLogoUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bankName"))))
    {
        utility::string_t refVal_setBankName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bankName"))), refVal_setBankName );
        setBankName(refVal_setBankName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bankAccountType"))))
    {
        std::shared_ptr<BankAccountType> refVal_setBankAccountType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bankAccountType"))), refVal_setBankAccountType );
        setBankAccountType(refVal_setBankAccountType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bankAccountProofUrl"))))
    {
        utility::string_t refVal_setBankAccountProofUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bankAccountProofUrl"))), refVal_setBankAccountProofUrl );
        setBankAccountProofUrl(refVal_setBankAccountProofUrl);
    }
    return ok;
}

utility::string_t OrganizationFinancialAccountDto::getId() const
{
    return m_Id;
}

void OrganizationFinancialAccountDto::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool OrganizationFinancialAccountDto::idIsSet() const
{
    return m_IdIsSet;
}

void OrganizationFinancialAccountDto::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t OrganizationFinancialAccountDto::getOrganizationId() const
{
    return m_OrganizationId;
}

void OrganizationFinancialAccountDto::setOrganizationId(const utility::string_t& value)
{
    m_OrganizationId = value;
    m_OrganizationIdIsSet = true;
}

bool OrganizationFinancialAccountDto::organizationIdIsSet() const
{
    return m_OrganizationIdIsSet;
}

void OrganizationFinancialAccountDto::unsetOrganizationId()
{
    m_OrganizationIdIsSet = false;
}
utility::string_t OrganizationFinancialAccountDto::getOrganizationName() const
{
    return m_OrganizationName;
}

void OrganizationFinancialAccountDto::setOrganizationName(const utility::string_t& value)
{
    m_OrganizationName = value;
    m_OrganizationNameIsSet = true;
}

bool OrganizationFinancialAccountDto::organizationNameIsSet() const
{
    return m_OrganizationNameIsSet;
}

void OrganizationFinancialAccountDto::unsetOrganizationName()
{
    m_OrganizationNameIsSet = false;
}
utility::string_t OrganizationFinancialAccountDto::getBeneficiaryName() const
{
    return m_BeneficiaryName;
}

void OrganizationFinancialAccountDto::setBeneficiaryName(const utility::string_t& value)
{
    m_BeneficiaryName = value;
    m_BeneficiaryNameIsSet = true;
}

bool OrganizationFinancialAccountDto::beneficiaryNameIsSet() const
{
    return m_BeneficiaryNameIsSet;
}

void OrganizationFinancialAccountDto::unsetBeneficiaryName()
{
    m_BeneficiaryNameIsSet = false;
}
utility::string_t OrganizationFinancialAccountDto::getAccountNumber() const
{
    return m_AccountNumber;
}

void OrganizationFinancialAccountDto::setAccountNumber(const utility::string_t& value)
{
    m_AccountNumber = value;
    m_AccountNumberIsSet = true;
}

bool OrganizationFinancialAccountDto::accountNumberIsSet() const
{
    return m_AccountNumberIsSet;
}

void OrganizationFinancialAccountDto::unsetAccountNumber()
{
    m_AccountNumberIsSet = false;
}
utility::string_t OrganizationFinancialAccountDto::getRoutingNumber() const
{
    return m_RoutingNumber;
}

void OrganizationFinancialAccountDto::setRoutingNumber(const utility::string_t& value)
{
    m_RoutingNumber = value;
    m_RoutingNumberIsSet = true;
}

bool OrganizationFinancialAccountDto::routingNumberIsSet() const
{
    return m_RoutingNumberIsSet;
}

void OrganizationFinancialAccountDto::unsetRoutingNumber()
{
    m_RoutingNumberIsSet = false;
}
bool OrganizationFinancialAccountDto::isIsPrimary() const
{
    return m_IsPrimary;
}

void OrganizationFinancialAccountDto::setIsPrimary(bool value)
{
    m_IsPrimary = value;
    m_IsPrimaryIsSet = true;
}

bool OrganizationFinancialAccountDto::isPrimaryIsSet() const
{
    return m_IsPrimaryIsSet;
}

void OrganizationFinancialAccountDto::unsetIsPrimary()
{
    m_IsPrimaryIsSet = false;
}
bool OrganizationFinancialAccountDto::isIsVerified() const
{
    return m_IsVerified;
}

void OrganizationFinancialAccountDto::setIsVerified(bool value)
{
    m_IsVerified = value;
    m_IsVerifiedIsSet = true;
}

bool OrganizationFinancialAccountDto::isVerifiedIsSet() const
{
    return m_IsVerifiedIsSet;
}

void OrganizationFinancialAccountDto::unsetIsVerified()
{
    m_IsVerifiedIsSet = false;
}
utility::string_t OrganizationFinancialAccountDto::getLogoUrl() const
{
    return m_LogoUrl;
}

void OrganizationFinancialAccountDto::setLogoUrl(const utility::string_t& value)
{
    m_LogoUrl = value;
    m_LogoUrlIsSet = true;
}

bool OrganizationFinancialAccountDto::logoUrlIsSet() const
{
    return m_LogoUrlIsSet;
}

void OrganizationFinancialAccountDto::unsetLogoUrl()
{
    m_LogoUrlIsSet = false;
}
utility::string_t OrganizationFinancialAccountDto::getBankName() const
{
    return m_BankName;
}

void OrganizationFinancialAccountDto::setBankName(const utility::string_t& value)
{
    m_BankName = value;
    m_BankNameIsSet = true;
}

bool OrganizationFinancialAccountDto::bankNameIsSet() const
{
    return m_BankNameIsSet;
}

void OrganizationFinancialAccountDto::unsetBankName()
{
    m_BankNameIsSet = false;
}
std::shared_ptr<BankAccountType> OrganizationFinancialAccountDto::getBankAccountType() const
{
    return m_BankAccountType;
}

void OrganizationFinancialAccountDto::setBankAccountType(const std::shared_ptr<BankAccountType>& value)
{
    m_BankAccountType = value;
    m_BankAccountTypeIsSet = true;
}

bool OrganizationFinancialAccountDto::bankAccountTypeIsSet() const
{
    return m_BankAccountTypeIsSet;
}

void OrganizationFinancialAccountDto::unsetBankAccountType()
{
    m_BankAccountTypeIsSet = false;
}
utility::string_t OrganizationFinancialAccountDto::getBankAccountProofUrl() const
{
    return m_BankAccountProofUrl;
}

void OrganizationFinancialAccountDto::setBankAccountProofUrl(const utility::string_t& value)
{
    m_BankAccountProofUrl = value;
    m_BankAccountProofUrlIsSet = true;
}

bool OrganizationFinancialAccountDto::bankAccountProofUrlIsSet() const
{
    return m_BankAccountProofUrlIsSet;
}

void OrganizationFinancialAccountDto::unsetBankAccountProofUrl()
{
    m_BankAccountProofUrlIsSet = false;
}
}
}


