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



#include "IndividualDataConsentRequestDetails.h"

namespace mydatamyconsent {
namespace models {




IndividualDataConsentRequestDetails::IndividualDataConsentRequestDetails()
{
    m_Receiver = utility::conversions::to_string_t("");
    m_ReceiverIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
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
    m_CreatedAtUtc = utility::datetime();
    m_CreatedAtUtcIsSet = false;
}

IndividualDataConsentRequestDetails::~IndividualDataConsentRequestDetails()
{
}

void IndividualDataConsentRequestDetails::validate()
{
    // TODO: implement validation
}

web::json::value IndividualDataConsentRequestDetails::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ReceiverIsSet)
    {
        val[utility::conversions::to_string_t(U("receiver"))] = ModelBase::toJson(m_Receiver);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
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
    if(m_CreatedAtUtcIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAtUtc"))] = ModelBase::toJson(m_CreatedAtUtc);
    }

    return val;
}

bool IndividualDataConsentRequestDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("receiver"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("receiver")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_receiver;
            ok &= ModelBase::fromJson(fieldValue, refVal_receiver);
            setReceiver(refVal_receiver);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("templateId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("templateId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_templateId;
            ok &= ModelBase::fromJson(fieldValue, refVal_templateId);
            setTemplateId(refVal_templateId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("title"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("title")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_title;
            ok &= ModelBase::fromJson(fieldValue, refVal_title);
            setTitle(refVal_title);
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
    if(val.has_field(utility::conversions::to_string_t(U("purpose"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("purpose")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_purpose;
            ok &= ModelBase::fromJson(fieldValue, refVal_purpose);
            setPurpose(refVal_purpose);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DataConsentStatus> refVal_status;
            ok &= ModelBase::fromJson(fieldValue, refVal_status);
            setStatus(refVal_status);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("transactionId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("transactionId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_transactionId;
            ok &= ModelBase::fromJson(fieldValue, refVal_transactionId);
            setTransactionId(refVal_transactionId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("createdAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("createdAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_createdAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_createdAtUtc);
            setCreatedAtUtc(refVal_createdAtUtc);
        }
    }
    return ok;
}

void IndividualDataConsentRequestDetails::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ReceiverIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("receiver")), m_Receiver));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
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
    if(m_CreatedAtUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAtUtc")), m_CreatedAtUtc));
    }
}

bool IndividualDataConsentRequestDetails::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("receiver"))))
    {
        utility::string_t refVal_receiver;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("receiver"))), refVal_receiver );
        setReceiver(refVal_receiver);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("templateId"))))
    {
        utility::string_t refVal_templateId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("templateId"))), refVal_templateId );
        setTemplateId(refVal_templateId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("title"))))
    {
        utility::string_t refVal_title;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("title"))), refVal_title );
        setTitle(refVal_title);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_description;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_description );
        setDescription(refVal_description);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("purpose"))))
    {
        utility::string_t refVal_purpose;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("purpose"))), refVal_purpose );
        setPurpose(refVal_purpose);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        std::shared_ptr<DataConsentStatus> refVal_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_status );
        setStatus(refVal_status);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("transactionId"))))
    {
        utility::string_t refVal_transactionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("transactionId"))), refVal_transactionId );
        setTransactionId(refVal_transactionId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAtUtc"))))
    {
        utility::datetime refVal_createdAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAtUtc"))), refVal_createdAtUtc );
        setCreatedAtUtc(refVal_createdAtUtc);
    }
    return ok;
}

utility::string_t IndividualDataConsentRequestDetails::getReceiver() const
{
    return m_Receiver;
}

void IndividualDataConsentRequestDetails::setReceiver(const utility::string_t& value)
{
    m_Receiver = value;
    m_ReceiverIsSet = true;
}

bool IndividualDataConsentRequestDetails::receiverIsSet() const
{
    return m_ReceiverIsSet;
}

void IndividualDataConsentRequestDetails::unsetReceiver()
{
    m_ReceiverIsSet = false;
}
utility::string_t IndividualDataConsentRequestDetails::getId() const
{
    return m_Id;
}

void IndividualDataConsentRequestDetails::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool IndividualDataConsentRequestDetails::idIsSet() const
{
    return m_IdIsSet;
}

void IndividualDataConsentRequestDetails::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t IndividualDataConsentRequestDetails::getTemplateId() const
{
    return m_TemplateId;
}

void IndividualDataConsentRequestDetails::setTemplateId(const utility::string_t& value)
{
    m_TemplateId = value;
    m_TemplateIdIsSet = true;
}

bool IndividualDataConsentRequestDetails::templateIdIsSet() const
{
    return m_TemplateIdIsSet;
}

void IndividualDataConsentRequestDetails::unsetTemplateId()
{
    m_TemplateIdIsSet = false;
}
utility::string_t IndividualDataConsentRequestDetails::getTitle() const
{
    return m_Title;
}

void IndividualDataConsentRequestDetails::setTitle(const utility::string_t& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}

bool IndividualDataConsentRequestDetails::titleIsSet() const
{
    return m_TitleIsSet;
}

void IndividualDataConsentRequestDetails::unsetTitle()
{
    m_TitleIsSet = false;
}
utility::string_t IndividualDataConsentRequestDetails::getDescription() const
{
    return m_Description;
}

void IndividualDataConsentRequestDetails::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool IndividualDataConsentRequestDetails::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void IndividualDataConsentRequestDetails::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t IndividualDataConsentRequestDetails::getPurpose() const
{
    return m_Purpose;
}

void IndividualDataConsentRequestDetails::setPurpose(const utility::string_t& value)
{
    m_Purpose = value;
    m_PurposeIsSet = true;
}

bool IndividualDataConsentRequestDetails::purposeIsSet() const
{
    return m_PurposeIsSet;
}

void IndividualDataConsentRequestDetails::unsetPurpose()
{
    m_PurposeIsSet = false;
}
std::shared_ptr<DataConsentStatus> IndividualDataConsentRequestDetails::getStatus() const
{
    return m_Status;
}

void IndividualDataConsentRequestDetails::setStatus(const std::shared_ptr<DataConsentStatus>& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool IndividualDataConsentRequestDetails::statusIsSet() const
{
    return m_StatusIsSet;
}

void IndividualDataConsentRequestDetails::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::string_t IndividualDataConsentRequestDetails::getTransactionId() const
{
    return m_TransactionId;
}

void IndividualDataConsentRequestDetails::setTransactionId(const utility::string_t& value)
{
    m_TransactionId = value;
    m_TransactionIdIsSet = true;
}

bool IndividualDataConsentRequestDetails::transactionIdIsSet() const
{
    return m_TransactionIdIsSet;
}

void IndividualDataConsentRequestDetails::unsetTransactionId()
{
    m_TransactionIdIsSet = false;
}
utility::datetime IndividualDataConsentRequestDetails::getCreatedAtUtc() const
{
    return m_CreatedAtUtc;
}

void IndividualDataConsentRequestDetails::setCreatedAtUtc(const utility::datetime& value)
{
    m_CreatedAtUtc = value;
    m_CreatedAtUtcIsSet = true;
}

bool IndividualDataConsentRequestDetails::createdAtUtcIsSet() const
{
    return m_CreatedAtUtcIsSet;
}

void IndividualDataConsentRequestDetails::unsetCreatedAtUtc()
{
    m_CreatedAtUtcIsSet = false;
}
}
}


