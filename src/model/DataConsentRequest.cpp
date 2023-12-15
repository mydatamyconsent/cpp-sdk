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



#include "MyDataMyConsent/model/DataConsentRequest.h"

namespace mydatamyconsent {
namespace models {



DataConsentRequest::DataConsentRequest()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_TemplateId = utility::conversions::to_string_t("");
    m_TemplateIdIsSet = false;
    m_ConsentId = utility::conversions::to_string_t("");
    m_ConsentIdIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_Purpose = utility::conversions::to_string_t("");
    m_PurposeIsSet = false;
    m_DataLifeIsSet = false;
    m_CollectablesIsSet = false;
    m_ReceiverIsSet = false;
    m_StatusIsSet = false;
    m_CreatedAtUtc = utility::datetime();
    m_CreatedAtUtcIsSet = false;
    m_ExpiresAtUtc = utility::datetime();
    m_ExpiresAtUtcIsSet = false;
    m_ApprovedAtUtc = utility::datetime();
    m_ApprovedAtUtcIsSet = false;
    m_DataAccessExpiresAtUtc = utility::datetime();
    m_DataAccessExpiresAtUtcIsSet = false;
    m_RejectedAtUtc = utility::datetime();
    m_RejectedAtUtcIsSet = false;
    m_RevokedAtUtc = utility::datetime();
    m_RevokedAtUtcIsSet = false;
}

DataConsentRequest::~DataConsentRequest()
{
}

void DataConsentRequest::validate()
{
    // TODO: implement validation
}

web::json::value DataConsentRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_TemplateIdIsSet)
    {
        val[utility::conversions::to_string_t(U("templateId"))] = ModelBase::toJson(m_TemplateId);
    }
    if(m_ConsentIdIsSet)
    {
        val[utility::conversions::to_string_t(U("consentId"))] = ModelBase::toJson(m_ConsentId);
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
    if(m_DataLifeIsSet)
    {
        val[utility::conversions::to_string_t(U("dataLife"))] = ModelBase::toJson(m_DataLife);
    }
    if(m_CollectablesIsSet)
    {
        val[utility::conversions::to_string_t(U("collectables"))] = ModelBase::toJson(m_Collectables);
    }
    if(m_ReceiverIsSet)
    {
        val[utility::conversions::to_string_t(U("receiver"))] = ModelBase::toJson(m_Receiver);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }
    if(m_CreatedAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAtUtc"))] = ModelBase::toJson(m_CreatedAtUtc);
    }
    if(m_ExpiresAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("expiresAtUtc"))] = ModelBase::toJson(m_ExpiresAtUtc);
    }
    if(m_ApprovedAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("approvedAtUtc"))] = ModelBase::toJson(m_ApprovedAtUtc);
    }
    if(m_DataAccessExpiresAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("dataAccessExpiresAtUtc"))] = ModelBase::toJson(m_DataAccessExpiresAtUtc);
    }
    if(m_RejectedAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("rejectedAtUtc"))] = ModelBase::toJson(m_RejectedAtUtc);
    }
    if(m_RevokedAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("revokedAtUtc"))] = ModelBase::toJson(m_RevokedAtUtc);
    }

    return val;
}

bool DataConsentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("consentId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("consentId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setConsentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setConsentId);
            setConsentId(refVal_setConsentId);
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
    if(val.has_field(utility::conversions::to_string_t(U("dataLife"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("dataLife")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Life> refVal_setDataLife;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDataLife);
            setDataLife(refVal_setDataLife);
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
    if(val.has_field(utility::conversions::to_string_t(U("receiver"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("receiver")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ConsentRequestReceiver> refVal_setReceiver;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReceiver);
            setReceiver(refVal_setReceiver);
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
    if(val.has_field(utility::conversions::to_string_t(U("createdAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("createdAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setCreatedAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedAtUtc);
            setCreatedAtUtc(refVal_setCreatedAtUtc);
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
    if(val.has_field(utility::conversions::to_string_t(U("rejectedAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("rejectedAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setRejectedAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRejectedAtUtc);
            setRejectedAtUtc(refVal_setRejectedAtUtc);
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
    return ok;
}

void DataConsentRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_TemplateIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("templateId")), m_TemplateId));
    }
    if(m_ConsentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("consentId")), m_ConsentId));
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
    if(m_DataLifeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("dataLife")), m_DataLife));
    }
    if(m_CollectablesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("collectables")), m_Collectables));
    }
    if(m_ReceiverIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("receiver")), m_Receiver));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
    if(m_CreatedAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAtUtc")), m_CreatedAtUtc));
    }
    if(m_ExpiresAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("expiresAtUtc")), m_ExpiresAtUtc));
    }
    if(m_ApprovedAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("approvedAtUtc")), m_ApprovedAtUtc));
    }
    if(m_DataAccessExpiresAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("dataAccessExpiresAtUtc")), m_DataAccessExpiresAtUtc));
    }
    if(m_RejectedAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("rejectedAtUtc")), m_RejectedAtUtc));
    }
    if(m_RevokedAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("revokedAtUtc")), m_RevokedAtUtc));
    }
}

bool DataConsentRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("templateId"))))
    {
        utility::string_t refVal_setTemplateId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("templateId"))), refVal_setTemplateId );
        setTemplateId(refVal_setTemplateId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("consentId"))))
    {
        utility::string_t refVal_setConsentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("consentId"))), refVal_setConsentId );
        setConsentId(refVal_setConsentId);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("dataLife"))))
    {
        std::shared_ptr<Life> refVal_setDataLife;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("dataLife"))), refVal_setDataLife );
        setDataLife(refVal_setDataLife);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("collectables"))))
    {
        std::vector<std::shared_ptr<CollectibleTypes>> refVal_setCollectables;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("collectables"))), refVal_setCollectables );
        setCollectables(refVal_setCollectables);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("receiver"))))
    {
        std::shared_ptr<ConsentRequestReceiver> refVal_setReceiver;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("receiver"))), refVal_setReceiver );
        setReceiver(refVal_setReceiver);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        std::shared_ptr<DataConsentStatus> refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAtUtc"))))
    {
        utility::datetime refVal_setCreatedAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAtUtc"))), refVal_setCreatedAtUtc );
        setCreatedAtUtc(refVal_setCreatedAtUtc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("expiresAtUtc"))))
    {
        utility::datetime refVal_setExpiresAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("expiresAtUtc"))), refVal_setExpiresAtUtc );
        setExpiresAtUtc(refVal_setExpiresAtUtc);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("rejectedAtUtc"))))
    {
        utility::datetime refVal_setRejectedAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("rejectedAtUtc"))), refVal_setRejectedAtUtc );
        setRejectedAtUtc(refVal_setRejectedAtUtc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("revokedAtUtc"))))
    {
        utility::datetime refVal_setRevokedAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("revokedAtUtc"))), refVal_setRevokedAtUtc );
        setRevokedAtUtc(refVal_setRevokedAtUtc);
    }
    return ok;
}

utility::string_t DataConsentRequest::getId() const
{
    return m_Id;
}

void DataConsentRequest::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool DataConsentRequest::idIsSet() const
{
    return m_IdIsSet;
}

void DataConsentRequest::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t DataConsentRequest::getTemplateId() const
{
    return m_TemplateId;
}

void DataConsentRequest::setTemplateId(const utility::string_t& value)
{
    m_TemplateId = value;
    m_TemplateIdIsSet = true;
}

bool DataConsentRequest::templateIdIsSet() const
{
    return m_TemplateIdIsSet;
}

void DataConsentRequest::unsetTemplateId()
{
    m_TemplateIdIsSet = false;
}
utility::string_t DataConsentRequest::getConsentId() const
{
    return m_ConsentId;
}

void DataConsentRequest::setConsentId(const utility::string_t& value)
{
    m_ConsentId = value;
    m_ConsentIdIsSet = true;
}

bool DataConsentRequest::consentIdIsSet() const
{
    return m_ConsentIdIsSet;
}

void DataConsentRequest::unsetConsentId()
{
    m_ConsentIdIsSet = false;
}
utility::string_t DataConsentRequest::getTitle() const
{
    return m_Title;
}

void DataConsentRequest::setTitle(const utility::string_t& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}

bool DataConsentRequest::titleIsSet() const
{
    return m_TitleIsSet;
}

void DataConsentRequest::unsetTitle()
{
    m_TitleIsSet = false;
}
utility::string_t DataConsentRequest::getDescription() const
{
    return m_Description;
}

void DataConsentRequest::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool DataConsentRequest::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void DataConsentRequest::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t DataConsentRequest::getPurpose() const
{
    return m_Purpose;
}

void DataConsentRequest::setPurpose(const utility::string_t& value)
{
    m_Purpose = value;
    m_PurposeIsSet = true;
}

bool DataConsentRequest::purposeIsSet() const
{
    return m_PurposeIsSet;
}

void DataConsentRequest::unsetPurpose()
{
    m_PurposeIsSet = false;
}
std::shared_ptr<Life> DataConsentRequest::getDataLife() const
{
    return m_DataLife;
}

void DataConsentRequest::setDataLife(const std::shared_ptr<Life>& value)
{
    m_DataLife = value;
    m_DataLifeIsSet = true;
}

bool DataConsentRequest::dataLifeIsSet() const
{
    return m_DataLifeIsSet;
}

void DataConsentRequest::unsetDataLife()
{
    m_DataLifeIsSet = false;
}
std::vector<std::shared_ptr<CollectibleTypes>>& DataConsentRequest::getCollectables()
{
    return m_Collectables;
}

void DataConsentRequest::setCollectables(const std::vector<std::shared_ptr<CollectibleTypes>>& value)
{
    m_Collectables = value;
    m_CollectablesIsSet = true;
}

bool DataConsentRequest::collectablesIsSet() const
{
    return m_CollectablesIsSet;
}

void DataConsentRequest::unsetCollectables()
{
    m_CollectablesIsSet = false;
}
std::shared_ptr<ConsentRequestReceiver> DataConsentRequest::getReceiver() const
{
    return m_Receiver;
}

void DataConsentRequest::setReceiver(const std::shared_ptr<ConsentRequestReceiver>& value)
{
    m_Receiver = value;
    m_ReceiverIsSet = true;
}

bool DataConsentRequest::receiverIsSet() const
{
    return m_ReceiverIsSet;
}

void DataConsentRequest::unsetReceiver()
{
    m_ReceiverIsSet = false;
}
std::shared_ptr<DataConsentStatus> DataConsentRequest::getStatus() const
{
    return m_Status;
}

void DataConsentRequest::setStatus(const std::shared_ptr<DataConsentStatus>& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool DataConsentRequest::statusIsSet() const
{
    return m_StatusIsSet;
}

void DataConsentRequest::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::datetime DataConsentRequest::getCreatedAtUtc() const
{
    return m_CreatedAtUtc;
}

void DataConsentRequest::setCreatedAtUtc(const utility::datetime& value)
{
    m_CreatedAtUtc = value;
    m_CreatedAtUtcIsSet = true;
}

bool DataConsentRequest::createdAtUtcIsSet() const
{
    return m_CreatedAtUtcIsSet;
}

void DataConsentRequest::unsetCreatedAtUtc()
{
    m_CreatedAtUtcIsSet = false;
}
utility::datetime DataConsentRequest::getExpiresAtUtc() const
{
    return m_ExpiresAtUtc;
}

void DataConsentRequest::setExpiresAtUtc(const utility::datetime& value)
{
    m_ExpiresAtUtc = value;
    m_ExpiresAtUtcIsSet = true;
}

bool DataConsentRequest::expiresAtUtcIsSet() const
{
    return m_ExpiresAtUtcIsSet;
}

void DataConsentRequest::unsetExpiresAtUtc()
{
    m_ExpiresAtUtcIsSet = false;
}
utility::datetime DataConsentRequest::getApprovedAtUtc() const
{
    return m_ApprovedAtUtc;
}

void DataConsentRequest::setApprovedAtUtc(const utility::datetime& value)
{
    m_ApprovedAtUtc = value;
    m_ApprovedAtUtcIsSet = true;
}

bool DataConsentRequest::approvedAtUtcIsSet() const
{
    return m_ApprovedAtUtcIsSet;
}

void DataConsentRequest::unsetApprovedAtUtc()
{
    m_ApprovedAtUtcIsSet = false;
}
utility::datetime DataConsentRequest::getDataAccessExpiresAtUtc() const
{
    return m_DataAccessExpiresAtUtc;
}

void DataConsentRequest::setDataAccessExpiresAtUtc(const utility::datetime& value)
{
    m_DataAccessExpiresAtUtc = value;
    m_DataAccessExpiresAtUtcIsSet = true;
}

bool DataConsentRequest::dataAccessExpiresAtUtcIsSet() const
{
    return m_DataAccessExpiresAtUtcIsSet;
}

void DataConsentRequest::unsetDataAccessExpiresAtUtc()
{
    m_DataAccessExpiresAtUtcIsSet = false;
}
utility::datetime DataConsentRequest::getRejectedAtUtc() const
{
    return m_RejectedAtUtc;
}

void DataConsentRequest::setRejectedAtUtc(const utility::datetime& value)
{
    m_RejectedAtUtc = value;
    m_RejectedAtUtcIsSet = true;
}

bool DataConsentRequest::rejectedAtUtcIsSet() const
{
    return m_RejectedAtUtcIsSet;
}

void DataConsentRequest::unsetRejectedAtUtc()
{
    m_RejectedAtUtcIsSet = false;
}
utility::datetime DataConsentRequest::getRevokedAtUtc() const
{
    return m_RevokedAtUtc;
}

void DataConsentRequest::setRevokedAtUtc(const utility::datetime& value)
{
    m_RevokedAtUtc = value;
    m_RevokedAtUtcIsSet = true;
}

bool DataConsentRequest::revokedAtUtcIsSet() const
{
    return m_RevokedAtUtcIsSet;
}

void DataConsentRequest::unsetRevokedAtUtc()
{
    m_RevokedAtUtcIsSet = false;
}
}
}

