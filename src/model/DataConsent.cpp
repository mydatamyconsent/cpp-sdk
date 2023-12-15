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



#include "MyDataMyConsent/model/DataConsent.h"

namespace mydatamyconsent {
namespace models {



DataConsent::DataConsent()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_RequestId = utility::conversions::to_string_t("");
    m_RequestIdIsSet = false;
    m_TemplateId = utility::conversions::to_string_t("");
    m_TemplateIdIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_Purpose = utility::conversions::to_string_t("");
    m_PurposeIsSet = false;
    m_StatusIsSet = false;
    m_TransactionId = utility::conversions::to_string_t("");
    m_TransactionIdIsSet = false;
    m_ApprovedAtUtc = utility::datetime();
    m_ApprovedAtUtcIsSet = false;
    m_DataAccessExpiresAtUtc = utility::datetime();
    m_DataAccessExpiresAtUtcIsSet = false;
    m_RevokedAtUtc = utility::datetime();
    m_RevokedAtUtcIsSet = false;
    m_CollectablesIsSet = false;
    m_IdentifiersIsSet = false;
    m_DocumentsIsSet = false;
}

DataConsent::~DataConsent()
{
}

void DataConsent::validate()
{
    // TODO: implement validation
}

web::json::value DataConsent::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_RequestIdIsSet)
    {
        val[utility::conversions::to_string_t(U("requestId"))] = ModelBase::toJson(m_RequestId);
    }
    if(m_TemplateIdIsSet)
    {
        val[utility::conversions::to_string_t(U("templateId"))] = ModelBase::toJson(m_TemplateId);
    }
    if(m_TitleIsSet)
    {
        val[utility::conversions::to_string_t(U("title"))] = ModelBase::toJson(m_Title);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_PurposeIsSet)
    {
        val[utility::conversions::to_string_t(U("purpose"))] = ModelBase::toJson(m_Purpose);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }
    if(m_TransactionIdIsSet)
    {
        val[utility::conversions::to_string_t(U("transactionId"))] = ModelBase::toJson(m_TransactionId);
    }
    if(m_ApprovedAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("approvedAtUtc"))] = ModelBase::toJson(m_ApprovedAtUtc);
    }
    if(m_DataAccessExpiresAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("dataAccessExpiresAtUtc"))] = ModelBase::toJson(m_DataAccessExpiresAtUtc);
    }
    if(m_RevokedAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("revokedAtUtc"))] = ModelBase::toJson(m_RevokedAtUtc);
    }
    if(m_CollectablesIsSet)
    {
        val[utility::conversions::to_string_t(U("collectables"))] = ModelBase::toJson(m_Collectables);
    }
    if(m_IdentifiersIsSet)
    {
        val[utility::conversions::to_string_t(U("identifiers"))] = ModelBase::toJson(m_Identifiers);
    }
    if(m_DocumentsIsSet)
    {
        val[utility::conversions::to_string_t(U("documents"))] = ModelBase::toJson(m_Documents);
    }

    return val;
}

bool DataConsent::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("requestId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("requestId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setRequestId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRequestId);
            setRequestId(refVal_setRequestId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("templateId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("templateId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTemplateId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTemplateId);
            setTemplateId(refVal_setTemplateId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("title"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("title")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTitle;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTitle);
            setTitle(refVal_setTitle);
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
    if(val.has_field(utility::conversions::to_string_t(U("purpose"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("purpose")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPurpose;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPurpose);
            setPurpose(refVal_setPurpose);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DataConsentStatus> refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("transactionId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("transactionId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTransactionId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTransactionId);
            setTransactionId(refVal_setTransactionId);
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
    if(val.has_field(utility::conversions::to_string_t(U("dataAccessExpiresAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("dataAccessExpiresAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setDataAccessExpiresAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDataAccessExpiresAtUtc);
            setDataAccessExpiresAtUtc(refVal_setDataAccessExpiresAtUtc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("revokedAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("revokedAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setRevokedAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRevokedAtUtc);
            setRevokedAtUtc(refVal_setRevokedAtUtc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("collectables"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("collectables")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<CollectibleTypes>> refVal_setCollectables;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCollectables);
            setCollectables(refVal_setCollectables);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("identifiers"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("identifiers")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<AnyType> refVal_setIdentifiers;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIdentifiers);
            setIdentifiers(refVal_setIdentifiers);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("documents"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("documents")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<DataConsentDocument>> refVal_setDocuments;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDocuments);
            setDocuments(refVal_setDocuments);
        }
    }
    return ok;
}

void DataConsent::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_RequestIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("requestId")), m_RequestId));
    }
    if(m_TemplateIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("templateId")), m_TemplateId));
    }
    if(m_TitleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("title")), m_Title));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_PurposeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("purpose")), m_Purpose));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
    if(m_TransactionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("transactionId")), m_TransactionId));
    }
    if(m_ApprovedAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("approvedAtUtc")), m_ApprovedAtUtc));
    }
    if(m_DataAccessExpiresAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("dataAccessExpiresAtUtc")), m_DataAccessExpiresAtUtc));
    }
    if(m_RevokedAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("revokedAtUtc")), m_RevokedAtUtc));
    }
    if(m_CollectablesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("collectables")), m_Collectables));
    }
    if(m_IdentifiersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("identifiers")), m_Identifiers));
    }
    if(m_DocumentsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("documents")), m_Documents));
    }
}

bool DataConsent::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("requestId"))))
    {
        utility::string_t refVal_setRequestId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("requestId"))), refVal_setRequestId );
        setRequestId(refVal_setRequestId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("templateId"))))
    {
        utility::string_t refVal_setTemplateId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("templateId"))), refVal_setTemplateId );
        setTemplateId(refVal_setTemplateId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("title"))))
    {
        utility::string_t refVal_setTitle;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("title"))), refVal_setTitle );
        setTitle(refVal_setTitle);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_setDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_setDescription );
        setDescription(refVal_setDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("purpose"))))
    {
        utility::string_t refVal_setPurpose;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("purpose"))), refVal_setPurpose );
        setPurpose(refVal_setPurpose);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        std::shared_ptr<DataConsentStatus> refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("transactionId"))))
    {
        utility::string_t refVal_setTransactionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("transactionId"))), refVal_setTransactionId );
        setTransactionId(refVal_setTransactionId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("approvedAtUtc"))))
    {
        utility::datetime refVal_setApprovedAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("approvedAtUtc"))), refVal_setApprovedAtUtc );
        setApprovedAtUtc(refVal_setApprovedAtUtc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("dataAccessExpiresAtUtc"))))
    {
        utility::datetime refVal_setDataAccessExpiresAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("dataAccessExpiresAtUtc"))), refVal_setDataAccessExpiresAtUtc );
        setDataAccessExpiresAtUtc(refVal_setDataAccessExpiresAtUtc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("revokedAtUtc"))))
    {
        utility::datetime refVal_setRevokedAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("revokedAtUtc"))), refVal_setRevokedAtUtc );
        setRevokedAtUtc(refVal_setRevokedAtUtc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("collectables"))))
    {
        std::vector<std::shared_ptr<CollectibleTypes>> refVal_setCollectables;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("collectables"))), refVal_setCollectables );
        setCollectables(refVal_setCollectables);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("identifiers"))))
    {
        std::shared_ptr<AnyType> refVal_setIdentifiers;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("identifiers"))), refVal_setIdentifiers );
        setIdentifiers(refVal_setIdentifiers);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("documents"))))
    {
        std::vector<std::shared_ptr<DataConsentDocument>> refVal_setDocuments;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("documents"))), refVal_setDocuments );
        setDocuments(refVal_setDocuments);
    }
    return ok;
}

utility::string_t DataConsent::getId() const
{
    return m_Id;
}

void DataConsent::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool DataConsent::idIsSet() const
{
    return m_IdIsSet;
}

void DataConsent::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t DataConsent::getRequestId() const
{
    return m_RequestId;
}

void DataConsent::setRequestId(const utility::string_t& value)
{
    m_RequestId = value;
    m_RequestIdIsSet = true;
}

bool DataConsent::requestIdIsSet() const
{
    return m_RequestIdIsSet;
}

void DataConsent::unsetRequestId()
{
    m_RequestIdIsSet = false;
}
utility::string_t DataConsent::getTemplateId() const
{
    return m_TemplateId;
}

void DataConsent::setTemplateId(const utility::string_t& value)
{
    m_TemplateId = value;
    m_TemplateIdIsSet = true;
}

bool DataConsent::templateIdIsSet() const
{
    return m_TemplateIdIsSet;
}

void DataConsent::unsetTemplateId()
{
    m_TemplateIdIsSet = false;
}
utility::string_t DataConsent::getTitle() const
{
    return m_Title;
}

void DataConsent::setTitle(const utility::string_t& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}

bool DataConsent::titleIsSet() const
{
    return m_TitleIsSet;
}

void DataConsent::unsetTitle()
{
    m_TitleIsSet = false;
}
utility::string_t DataConsent::getDescription() const
{
    return m_Description;
}

void DataConsent::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool DataConsent::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void DataConsent::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t DataConsent::getPurpose() const
{
    return m_Purpose;
}

void DataConsent::setPurpose(const utility::string_t& value)
{
    m_Purpose = value;
    m_PurposeIsSet = true;
}

bool DataConsent::purposeIsSet() const
{
    return m_PurposeIsSet;
}

void DataConsent::unsetPurpose()
{
    m_PurposeIsSet = false;
}
std::shared_ptr<DataConsentStatus> DataConsent::getStatus() const
{
    return m_Status;
}

void DataConsent::setStatus(const std::shared_ptr<DataConsentStatus>& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool DataConsent::statusIsSet() const
{
    return m_StatusIsSet;
}

void DataConsent::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::string_t DataConsent::getTransactionId() const
{
    return m_TransactionId;
}

void DataConsent::setTransactionId(const utility::string_t& value)
{
    m_TransactionId = value;
    m_TransactionIdIsSet = true;
}

bool DataConsent::transactionIdIsSet() const
{
    return m_TransactionIdIsSet;
}

void DataConsent::unsetTransactionId()
{
    m_TransactionIdIsSet = false;
}
utility::datetime DataConsent::getApprovedAtUtc() const
{
    return m_ApprovedAtUtc;
}

void DataConsent::setApprovedAtUtc(const utility::datetime& value)
{
    m_ApprovedAtUtc = value;
    m_ApprovedAtUtcIsSet = true;
}

bool DataConsent::approvedAtUtcIsSet() const
{
    return m_ApprovedAtUtcIsSet;
}

void DataConsent::unsetApprovedAtUtc()
{
    m_ApprovedAtUtcIsSet = false;
}
utility::datetime DataConsent::getDataAccessExpiresAtUtc() const
{
    return m_DataAccessExpiresAtUtc;
}

void DataConsent::setDataAccessExpiresAtUtc(const utility::datetime& value)
{
    m_DataAccessExpiresAtUtc = value;
    m_DataAccessExpiresAtUtcIsSet = true;
}

bool DataConsent::dataAccessExpiresAtUtcIsSet() const
{
    return m_DataAccessExpiresAtUtcIsSet;
}

void DataConsent::unsetDataAccessExpiresAtUtc()
{
    m_DataAccessExpiresAtUtcIsSet = false;
}
utility::datetime DataConsent::getRevokedAtUtc() const
{
    return m_RevokedAtUtc;
}

void DataConsent::setRevokedAtUtc(const utility::datetime& value)
{
    m_RevokedAtUtc = value;
    m_RevokedAtUtcIsSet = true;
}

bool DataConsent::revokedAtUtcIsSet() const
{
    return m_RevokedAtUtcIsSet;
}

void DataConsent::unsetRevokedAtUtc()
{
    m_RevokedAtUtcIsSet = false;
}
std::vector<std::shared_ptr<CollectibleTypes>>& DataConsent::getCollectables()
{
    return m_Collectables;
}

void DataConsent::setCollectables(const std::vector<std::shared_ptr<CollectibleTypes>>& value)
{
    m_Collectables = value;
    m_CollectablesIsSet = true;
}

bool DataConsent::collectablesIsSet() const
{
    return m_CollectablesIsSet;
}

void DataConsent::unsetCollectables()
{
    m_CollectablesIsSet = false;
}
std::shared_ptr<AnyType> DataConsent::getIdentifiers() const
{
    return m_Identifiers;
}

void DataConsent::setIdentifiers(const std::shared_ptr<AnyType>& value)
{
    m_Identifiers = value;
    m_IdentifiersIsSet = true;
}

bool DataConsent::identifiersIsSet() const
{
    return m_IdentifiersIsSet;
}

void DataConsent::unsetIdentifiers()
{
    m_IdentifiersIsSet = false;
}
std::vector<std::shared_ptr<DataConsentDocument>>& DataConsent::getDocuments()
{
    return m_Documents;
}

void DataConsent::setDocuments(const std::vector<std::shared_ptr<DataConsentDocument>>& value)
{
    m_Documents = value;
    m_DocumentsIsSet = true;
}

bool DataConsent::documentsIsSet() const
{
    return m_DocumentsIsSet;
}

void DataConsent::unsetDocuments()
{
    m_DocumentsIsSet = false;
}
}
}

