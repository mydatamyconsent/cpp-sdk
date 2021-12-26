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



#include "DataConsentRequestedFaDto.h"

namespace mydatamyconsent {
namespace models {




DataConsentRequestedFaDto::DataConsentRequestedFaDto()
{
    m_Drn = utility::conversions::to_string_t("");
    m_DrnIsSet = false;
    m_FromDatetime = utility::datetime();
    m_FromDatetimeIsSet = false;
    m_ToDatetime = utility::datetime();
    m_ToDatetimeIsSet = false;
    m_ProviderId = utility::conversions::to_string_t("");
    m_ProviderIdIsSet = false;
    m_AccountTypeIsSet = false;
    m_AccountIdentifier = utility::conversions::to_string_t("");
    m_AccountIdentifierIsSet = false;
    m_FiltersIsSet = false;
}

DataConsentRequestedFaDto::~DataConsentRequestedFaDto()
{
}

void DataConsentRequestedFaDto::validate()
{
    // TODO: implement validation
}

web::json::value DataConsentRequestedFaDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DrnIsSet)
    {
        val[utility::conversions::to_string_t(U("drn"))] = ModelBase::toJson(m_Drn);
    }
    if(m_FromDatetimeIsSet)
    {
        val[utility::conversions::to_string_t(U("fromDatetime"))] = ModelBase::toJson(m_FromDatetime);
    }
    if(m_ToDatetimeIsSet)
    {
        val[utility::conversions::to_string_t(U("toDatetime"))] = ModelBase::toJson(m_ToDatetime);
    }
    if(m_ProviderIdIsSet)
    {
        val[utility::conversions::to_string_t(U("providerId"))] = ModelBase::toJson(m_ProviderId);
    }
    if(m_AccountTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("accountType"))] = ModelBase::toJson(m_AccountType);
    }
    if(m_AccountIdentifierIsSet)
    {
        val[utility::conversions::to_string_t(U("accountIdentifier"))] = ModelBase::toJson(m_AccountIdentifier);
    }
    if(m_FiltersIsSet)
    {
        val[utility::conversions::to_string_t(U("filters"))] = ModelBase::toJson(m_Filters);
    }

    return val;
}

bool DataConsentRequestedFaDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("drn"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("drn")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_drn;
            ok &= ModelBase::fromJson(fieldValue, refVal_drn);
            setDrn(refVal_drn);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("fromDatetime"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("fromDatetime")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_fromDatetime;
            ok &= ModelBase::fromJson(fieldValue, refVal_fromDatetime);
            setFromDatetime(refVal_fromDatetime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("toDatetime"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("toDatetime")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_toDatetime;
            ok &= ModelBase::fromJson(fieldValue, refVal_toDatetime);
            setToDatetime(refVal_toDatetime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("providerId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("providerId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_providerId;
            ok &= ModelBase::fromJson(fieldValue, refVal_providerId);
            setProviderId(refVal_providerId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("accountType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("accountType")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<FinancialAccountTypes> refVal_accountType;
            ok &= ModelBase::fromJson(fieldValue, refVal_accountType);
            setAccountType(refVal_accountType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("accountIdentifier"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("accountIdentifier")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_accountIdentifier;
            ok &= ModelBase::fromJson(fieldValue, refVal_accountIdentifier);
            setAccountIdentifier(refVal_accountIdentifier);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("filters"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("filters")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<DataConsentRfaFilterDto>> refVal_filters;
            ok &= ModelBase::fromJson(fieldValue, refVal_filters);
            setFilters(refVal_filters);
        }
    }
    return ok;
}

void DataConsentRequestedFaDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_DrnIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("drn")), m_Drn));
    }
    if(m_FromDatetimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("fromDatetime")), m_FromDatetime));
    }
    if(m_ToDatetimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("toDatetime")), m_ToDatetime));
    }
    if(m_ProviderIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("providerId")), m_ProviderId));
    }
    if(m_AccountTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("accountType")), m_AccountType));
    }
    if(m_AccountIdentifierIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("accountIdentifier")), m_AccountIdentifier));
    }
    if(m_FiltersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("filters")), m_Filters));
    }
}

bool DataConsentRequestedFaDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("drn"))))
    {
        utility::string_t refVal_drn;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("drn"))), refVal_drn );
        setDrn(refVal_drn);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("fromDatetime"))))
    {
        utility::datetime refVal_fromDatetime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("fromDatetime"))), refVal_fromDatetime );
        setFromDatetime(refVal_fromDatetime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("toDatetime"))))
    {
        utility::datetime refVal_toDatetime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("toDatetime"))), refVal_toDatetime );
        setToDatetime(refVal_toDatetime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("providerId"))))
    {
        utility::string_t refVal_providerId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("providerId"))), refVal_providerId );
        setProviderId(refVal_providerId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("accountType"))))
    {
        std::shared_ptr<FinancialAccountTypes> refVal_accountType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("accountType"))), refVal_accountType );
        setAccountType(refVal_accountType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("accountIdentifier"))))
    {
        utility::string_t refVal_accountIdentifier;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("accountIdentifier"))), refVal_accountIdentifier );
        setAccountIdentifier(refVal_accountIdentifier);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("filters"))))
    {
        std::vector<std::shared_ptr<DataConsentRfaFilterDto>> refVal_filters;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("filters"))), refVal_filters );
        setFilters(refVal_filters);
    }
    return ok;
}

utility::string_t DataConsentRequestedFaDto::getDrn() const
{
    return m_Drn;
}

void DataConsentRequestedFaDto::setDrn(const utility::string_t& value)
{
    m_Drn = value;
    m_DrnIsSet = true;
}

bool DataConsentRequestedFaDto::drnIsSet() const
{
    return m_DrnIsSet;
}

void DataConsentRequestedFaDto::unsetDrn()
{
    m_DrnIsSet = false;
}
utility::datetime DataConsentRequestedFaDto::getFromDatetime() const
{
    return m_FromDatetime;
}

void DataConsentRequestedFaDto::setFromDatetime(const utility::datetime& value)
{
    m_FromDatetime = value;
    m_FromDatetimeIsSet = true;
}

bool DataConsentRequestedFaDto::fromDatetimeIsSet() const
{
    return m_FromDatetimeIsSet;
}

void DataConsentRequestedFaDto::unsetFromDatetime()
{
    m_FromDatetimeIsSet = false;
}
utility::datetime DataConsentRequestedFaDto::getToDatetime() const
{
    return m_ToDatetime;
}

void DataConsentRequestedFaDto::setToDatetime(const utility::datetime& value)
{
    m_ToDatetime = value;
    m_ToDatetimeIsSet = true;
}

bool DataConsentRequestedFaDto::toDatetimeIsSet() const
{
    return m_ToDatetimeIsSet;
}

void DataConsentRequestedFaDto::unsetToDatetime()
{
    m_ToDatetimeIsSet = false;
}
utility::string_t DataConsentRequestedFaDto::getProviderId() const
{
    return m_ProviderId;
}

void DataConsentRequestedFaDto::setProviderId(const utility::string_t& value)
{
    m_ProviderId = value;
    m_ProviderIdIsSet = true;
}

bool DataConsentRequestedFaDto::providerIdIsSet() const
{
    return m_ProviderIdIsSet;
}

void DataConsentRequestedFaDto::unsetProviderId()
{
    m_ProviderIdIsSet = false;
}
std::shared_ptr<FinancialAccountTypes> DataConsentRequestedFaDto::getAccountType() const
{
    return m_AccountType;
}

void DataConsentRequestedFaDto::setAccountType(const std::shared_ptr<FinancialAccountTypes>& value)
{
    m_AccountType = value;
    m_AccountTypeIsSet = true;
}

bool DataConsentRequestedFaDto::accountTypeIsSet() const
{
    return m_AccountTypeIsSet;
}

void DataConsentRequestedFaDto::unsetAccountType()
{
    m_AccountTypeIsSet = false;
}
utility::string_t DataConsentRequestedFaDto::getAccountIdentifier() const
{
    return m_AccountIdentifier;
}

void DataConsentRequestedFaDto::setAccountIdentifier(const utility::string_t& value)
{
    m_AccountIdentifier = value;
    m_AccountIdentifierIsSet = true;
}

bool DataConsentRequestedFaDto::accountIdentifierIsSet() const
{
    return m_AccountIdentifierIsSet;
}

void DataConsentRequestedFaDto::unsetAccountIdentifier()
{
    m_AccountIdentifierIsSet = false;
}
std::vector<std::shared_ptr<DataConsentRfaFilterDto>>& DataConsentRequestedFaDto::getFilters()
{
    return m_Filters;
}

void DataConsentRequestedFaDto::setFilters(const std::vector<std::shared_ptr<DataConsentRfaFilterDto>>& value)
{
    m_Filters = value;
    m_FiltersIsSet = true;
}

bool DataConsentRequestedFaDto::filtersIsSet() const
{
    return m_FiltersIsSet;
}

void DataConsentRequestedFaDto::unsetFilters()
{
    m_FiltersIsSet = false;
}
}
}

