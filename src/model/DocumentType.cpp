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



#include "MyDataMyConsent/model/DocumentType.h"

namespace mydatamyconsent {
namespace models {



DocumentType::DocumentType()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_CategoryTypeIsSet = false;
    m_SubCategoryTypeIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Slug = utility::conversions::to_string_t("");
    m_SlugIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_LogoUrl = utility::conversions::to_string_t("");
    m_LogoUrlIsSet = false;
    m_SearchServiceName = utility::conversions::to_string_t("");
    m_SearchServiceNameIsSet = false;
    m_RepositoryServiceName = utility::conversions::to_string_t("");
    m_RepositoryServiceNameIsSet = false;
    m_SupportedEntityTypesIsSet = false;
    m_AddedBy = utility::conversions::to_string_t("");
    m_AddedByIsSet = false;
    m_PayableAmount = 0.0;
    m_PayableAmountIsSet = false;
    m_PayableAmountCurrency = utility::conversions::to_string_t("");
    m_PayableAmountCurrencyIsSet = false;
    m_ApprovedAtUtc = utility::datetime();
    m_ApprovedAtUtcIsSet = false;
}

DocumentType::~DocumentType()
{
}

void DocumentType::validate()
{
    // TODO: implement validation
}

web::json::value DocumentType::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_CategoryTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("categoryType"))] = ModelBase::toJson(m_CategoryType);
    }
    if(m_SubCategoryTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("subCategoryType"))] = ModelBase::toJson(m_SubCategoryType);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_SlugIsSet)
    {
        val[utility::conversions::to_string_t(U("slug"))] = ModelBase::toJson(m_Slug);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_LogoUrlIsSet)
    {
        val[utility::conversions::to_string_t(U("logoUrl"))] = ModelBase::toJson(m_LogoUrl);
    }
    if(m_SearchServiceNameIsSet)
    {
        val[utility::conversions::to_string_t(U("searchServiceName"))] = ModelBase::toJson(m_SearchServiceName);
    }
    if(m_RepositoryServiceNameIsSet)
    {
        val[utility::conversions::to_string_t(U("repositoryServiceName"))] = ModelBase::toJson(m_RepositoryServiceName);
    }
    if(m_SupportedEntityTypesIsSet)
    {
        val[utility::conversions::to_string_t(U("supportedEntityTypes"))] = ModelBase::toJson(m_SupportedEntityTypes);
    }
    if(m_AddedByIsSet)
    {
        val[utility::conversions::to_string_t(U("addedBy"))] = ModelBase::toJson(m_AddedBy);
    }
    if(m_PayableAmountIsSet)
    {
        val[utility::conversions::to_string_t(U("payableAmount"))] = ModelBase::toJson(m_PayableAmount);
    }
    if(m_PayableAmountCurrencyIsSet)
    {
        val[utility::conversions::to_string_t(U("payableAmountCurrency"))] = ModelBase::toJson(m_PayableAmountCurrency);
    }
    if(m_ApprovedAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("approvedAtUtc"))] = ModelBase::toJson(m_ApprovedAtUtc);
    }

    return val;
}

bool DocumentType::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("categoryType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("categoryType")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DocumentCategoryType> refVal_setCategoryType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCategoryType);
            setCategoryType(refVal_setCategoryType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("subCategoryType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("subCategoryType")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DocumentSubCategoryType> refVal_setSubCategoryType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSubCategoryType);
            setSubCategoryType(refVal_setSubCategoryType);
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
    if(val.has_field(utility::conversions::to_string_t(U("slug"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("slug")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSlug;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSlug);
            setSlug(refVal_setSlug);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("description"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("description")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDescription;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDescription);
            setDescription(refVal_setDescription);
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
    if(val.has_field(utility::conversions::to_string_t(U("searchServiceName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("searchServiceName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSearchServiceName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSearchServiceName);
            setSearchServiceName(refVal_setSearchServiceName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("repositoryServiceName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("repositoryServiceName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setRepositoryServiceName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRepositoryServiceName);
            setRepositoryServiceName(refVal_setRepositoryServiceName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("supportedEntityTypes"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("supportedEntityTypes")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<SupportedEntityType>> refVal_setSupportedEntityTypes;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSupportedEntityTypes);
            setSupportedEntityTypes(refVal_setSupportedEntityTypes);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("addedBy"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("addedBy")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAddedBy;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAddedBy);
            setAddedBy(refVal_setAddedBy);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("payableAmount"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("payableAmount")));
        if(!fieldValue.is_null())
        {
            double refVal_setPayableAmount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPayableAmount);
            setPayableAmount(refVal_setPayableAmount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("payableAmountCurrency"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("payableAmountCurrency")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPayableAmountCurrency;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPayableAmountCurrency);
            setPayableAmountCurrency(refVal_setPayableAmountCurrency);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("approvedAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("approvedAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setApprovedAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_setApprovedAtUtc);
            setApprovedAtUtc(refVal_setApprovedAtUtc);
        }
    }
    return ok;
}

void DocumentType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_CategoryTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("categoryType")), m_CategoryType));
    }
    if(m_SubCategoryTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subCategoryType")), m_SubCategoryType));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_SlugIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("slug")), m_Slug));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_LogoUrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("logoUrl")), m_LogoUrl));
    }
    if(m_SearchServiceNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("searchServiceName")), m_SearchServiceName));
    }
    if(m_RepositoryServiceNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("repositoryServiceName")), m_RepositoryServiceName));
    }
    if(m_SupportedEntityTypesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("supportedEntityTypes")), m_SupportedEntityTypes));
    }
    if(m_AddedByIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("addedBy")), m_AddedBy));
    }
    if(m_PayableAmountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("payableAmount")), m_PayableAmount));
    }
    if(m_PayableAmountCurrencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("payableAmountCurrency")), m_PayableAmountCurrency));
    }
    if(m_ApprovedAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("approvedAtUtc")), m_ApprovedAtUtc));
    }
}

bool DocumentType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("categoryType"))))
    {
        std::shared_ptr<DocumentCategoryType> refVal_setCategoryType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("categoryType"))), refVal_setCategoryType );
        setCategoryType(refVal_setCategoryType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subCategoryType"))))
    {
        std::shared_ptr<DocumentSubCategoryType> refVal_setSubCategoryType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subCategoryType"))), refVal_setSubCategoryType );
        setSubCategoryType(refVal_setSubCategoryType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("slug"))))
    {
        utility::string_t refVal_setSlug;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("slug"))), refVal_setSlug );
        setSlug(refVal_setSlug);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_setDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_setDescription );
        setDescription(refVal_setDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("logoUrl"))))
    {
        utility::string_t refVal_setLogoUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("logoUrl"))), refVal_setLogoUrl );
        setLogoUrl(refVal_setLogoUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("searchServiceName"))))
    {
        utility::string_t refVal_setSearchServiceName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("searchServiceName"))), refVal_setSearchServiceName );
        setSearchServiceName(refVal_setSearchServiceName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("repositoryServiceName"))))
    {
        utility::string_t refVal_setRepositoryServiceName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("repositoryServiceName"))), refVal_setRepositoryServiceName );
        setRepositoryServiceName(refVal_setRepositoryServiceName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("supportedEntityTypes"))))
    {
        std::vector<std::shared_ptr<SupportedEntityType>> refVal_setSupportedEntityTypes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("supportedEntityTypes"))), refVal_setSupportedEntityTypes );
        setSupportedEntityTypes(refVal_setSupportedEntityTypes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("addedBy"))))
    {
        utility::string_t refVal_setAddedBy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("addedBy"))), refVal_setAddedBy );
        setAddedBy(refVal_setAddedBy);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("payableAmount"))))
    {
        double refVal_setPayableAmount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("payableAmount"))), refVal_setPayableAmount );
        setPayableAmount(refVal_setPayableAmount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("payableAmountCurrency"))))
    {
        utility::string_t refVal_setPayableAmountCurrency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("payableAmountCurrency"))), refVal_setPayableAmountCurrency );
        setPayableAmountCurrency(refVal_setPayableAmountCurrency);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("approvedAtUtc"))))
    {
        utility::datetime refVal_setApprovedAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("approvedAtUtc"))), refVal_setApprovedAtUtc );
        setApprovedAtUtc(refVal_setApprovedAtUtc);
    }
    return ok;
}

utility::string_t DocumentType::getId() const
{
    return m_Id;
}

void DocumentType::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool DocumentType::idIsSet() const
{
    return m_IdIsSet;
}

void DocumentType::unsetId()
{
    m_IdIsSet = false;
}
std::shared_ptr<DocumentCategoryType> DocumentType::getCategoryType() const
{
    return m_CategoryType;
}

void DocumentType::setCategoryType(const std::shared_ptr<DocumentCategoryType>& value)
{
    m_CategoryType = value;
    m_CategoryTypeIsSet = true;
}

bool DocumentType::categoryTypeIsSet() const
{
    return m_CategoryTypeIsSet;
}

void DocumentType::unsetCategoryType()
{
    m_CategoryTypeIsSet = false;
}
std::shared_ptr<DocumentSubCategoryType> DocumentType::getSubCategoryType() const
{
    return m_SubCategoryType;
}

void DocumentType::setSubCategoryType(const std::shared_ptr<DocumentSubCategoryType>& value)
{
    m_SubCategoryType = value;
    m_SubCategoryTypeIsSet = true;
}

bool DocumentType::subCategoryTypeIsSet() const
{
    return m_SubCategoryTypeIsSet;
}

void DocumentType::unsetSubCategoryType()
{
    m_SubCategoryTypeIsSet = false;
}
utility::string_t DocumentType::getName() const
{
    return m_Name;
}

void DocumentType::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool DocumentType::nameIsSet() const
{
    return m_NameIsSet;
}

void DocumentType::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t DocumentType::getSlug() const
{
    return m_Slug;
}

void DocumentType::setSlug(const utility::string_t& value)
{
    m_Slug = value;
    m_SlugIsSet = true;
}

bool DocumentType::slugIsSet() const
{
    return m_SlugIsSet;
}

void DocumentType::unsetSlug()
{
    m_SlugIsSet = false;
}
utility::string_t DocumentType::getDescription() const
{
    return m_Description;
}

void DocumentType::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool DocumentType::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void DocumentType::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t DocumentType::getLogoUrl() const
{
    return m_LogoUrl;
}

void DocumentType::setLogoUrl(const utility::string_t& value)
{
    m_LogoUrl = value;
    m_LogoUrlIsSet = true;
}

bool DocumentType::logoUrlIsSet() const
{
    return m_LogoUrlIsSet;
}

void DocumentType::unsetLogoUrl()
{
    m_LogoUrlIsSet = false;
}
utility::string_t DocumentType::getSearchServiceName() const
{
    return m_SearchServiceName;
}

void DocumentType::setSearchServiceName(const utility::string_t& value)
{
    m_SearchServiceName = value;
    m_SearchServiceNameIsSet = true;
}

bool DocumentType::searchServiceNameIsSet() const
{
    return m_SearchServiceNameIsSet;
}

void DocumentType::unsetSearchServiceName()
{
    m_SearchServiceNameIsSet = false;
}
utility::string_t DocumentType::getRepositoryServiceName() const
{
    return m_RepositoryServiceName;
}

void DocumentType::setRepositoryServiceName(const utility::string_t& value)
{
    m_RepositoryServiceName = value;
    m_RepositoryServiceNameIsSet = true;
}

bool DocumentType::repositoryServiceNameIsSet() const
{
    return m_RepositoryServiceNameIsSet;
}

void DocumentType::unsetRepositoryServiceName()
{
    m_RepositoryServiceNameIsSet = false;
}
std::vector<std::shared_ptr<SupportedEntityType>>& DocumentType::getSupportedEntityTypes()
{
    return m_SupportedEntityTypes;
}

void DocumentType::setSupportedEntityTypes(const std::vector<std::shared_ptr<SupportedEntityType>>& value)
{
    m_SupportedEntityTypes = value;
    m_SupportedEntityTypesIsSet = true;
}

bool DocumentType::supportedEntityTypesIsSet() const
{
    return m_SupportedEntityTypesIsSet;
}

void DocumentType::unsetSupportedEntityTypes()
{
    m_SupportedEntityTypesIsSet = false;
}
utility::string_t DocumentType::getAddedBy() const
{
    return m_AddedBy;
}

void DocumentType::setAddedBy(const utility::string_t& value)
{
    m_AddedBy = value;
    m_AddedByIsSet = true;
}

bool DocumentType::addedByIsSet() const
{
    return m_AddedByIsSet;
}

void DocumentType::unsetAddedBy()
{
    m_AddedByIsSet = false;
}
double DocumentType::getPayableAmount() const
{
    return m_PayableAmount;
}

void DocumentType::setPayableAmount(double value)
{
    m_PayableAmount = value;
    m_PayableAmountIsSet = true;
}

bool DocumentType::payableAmountIsSet() const
{
    return m_PayableAmountIsSet;
}

void DocumentType::unsetPayableAmount()
{
    m_PayableAmountIsSet = false;
}
utility::string_t DocumentType::getPayableAmountCurrency() const
{
    return m_PayableAmountCurrency;
}

void DocumentType::setPayableAmountCurrency(const utility::string_t& value)
{
    m_PayableAmountCurrency = value;
    m_PayableAmountCurrencyIsSet = true;
}

bool DocumentType::payableAmountCurrencyIsSet() const
{
    return m_PayableAmountCurrencyIsSet;
}

void DocumentType::unsetPayableAmountCurrency()
{
    m_PayableAmountCurrencyIsSet = false;
}
utility::datetime DocumentType::getApprovedAtUtc() const
{
    return m_ApprovedAtUtc;
}

void DocumentType::setApprovedAtUtc(const utility::datetime& value)
{
    m_ApprovedAtUtc = value;
    m_ApprovedAtUtcIsSet = true;
}

bool DocumentType::approvedAtUtcIsSet() const
{
    return m_ApprovedAtUtcIsSet;
}

void DocumentType::unsetApprovedAtUtc()
{
    m_ApprovedAtUtcIsSet = false;
}
}
}

