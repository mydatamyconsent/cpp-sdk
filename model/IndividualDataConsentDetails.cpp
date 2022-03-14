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



#include "IndividualDataConsentDetails.h"

namespace mydatamyconsent {
namespace models {




IndividualDataConsentDetails::IndividualDataConsentDetails()
{
    m_Approver = utility::conversions::to_string_t("");
    m_ApproverIsSet = false;
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
    m_ApprovedAtUtc = utility::datetime();
    m_ApprovedAtUtcIsSet = false;
    m_DataAccessExpiresAtUtc = utility::datetime();
    m_DataAccessExpiresAtUtcIsSet = false;
    m_RevokedAtUtc = utility::datetime();
    m_RevokedAtUtcIsSet = false;
}

IndividualDataConsentDetails::~IndividualDataConsentDetails()
{
}

void IndividualDataConsentDetails::validate()
{
    // TODO: implement validation
}

web::json::value IndividualDataConsentDetails::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ApproverIsSet)
    {
        val[utility::conversions::to_string_t(U("approver"))] = ModelBase::toJson(m_Approver);
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

    return val;
}

bool IndividualDataConsentDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("approver"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("approver")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_approver;
            ok &= ModelBase::fromJson(fieldValue, refVal_approver);
            setApprover(refVal_approver);
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
    if(val.has_field(utility::conversions::to_string_t(U("approvedAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("approvedAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_approvedAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_approvedAtUtc);
            setApprovedAtUtc(refVal_approvedAtUtc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("dataAccessExpiresAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("dataAccessExpiresAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_dataAccessExpiresAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_dataAccessExpiresAtUtc);
            setDataAccessExpiresAtUtc(refVal_dataAccessExpiresAtUtc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("revokedAtUtc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("revokedAtUtc")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_revokedAtUtc;
            ok &= ModelBase::fromJson(fieldValue, refVal_revokedAtUtc);
            setRevokedAtUtc(refVal_revokedAtUtc);
        }
    }
    return ok;
}

void IndividualDataConsentDetails::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ApproverIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("approver")), m_Approver));
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
}

bool IndividualDataConsentDetails::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("approver"))))
    {
        utility::string_t refVal_approver;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("approver"))), refVal_approver );
        setApprover(refVal_approver);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("approvedAtUtc"))))
    {
        utility::datetime refVal_approvedAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("approvedAtUtc"))), refVal_approvedAtUtc );
        setApprovedAtUtc(refVal_approvedAtUtc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("dataAccessExpiresAtUtc"))))
    {
        utility::datetime refVal_dataAccessExpiresAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("dataAccessExpiresAtUtc"))), refVal_dataAccessExpiresAtUtc );
        setDataAccessExpiresAtUtc(refVal_dataAccessExpiresAtUtc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("revokedAtUtc"))))
    {
        utility::datetime refVal_revokedAtUtc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("revokedAtUtc"))), refVal_revokedAtUtc );
        setRevokedAtUtc(refVal_revokedAtUtc);
    }
    return ok;
}

utility::string_t IndividualDataConsentDetails::getApprover() const
{
    return m_Approver;
}

void IndividualDataConsentDetails::setApprover(const utility::string_t& value)
{
    m_Approver = value;
    m_ApproverIsSet = true;
}

bool IndividualDataConsentDetails::approverIsSet() const
{
    return m_ApproverIsSet;
}

void IndividualDataConsentDetails::unsetApprover()
{
    m_ApproverIsSet = false;
}
utility::string_t IndividualDataConsentDetails::getId() const
{
    return m_Id;
}

void IndividualDataConsentDetails::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool IndividualDataConsentDetails::idIsSet() const
{
    return m_IdIsSet;
}

void IndividualDataConsentDetails::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t IndividualDataConsentDetails::getTemplateId() const
{
    return m_TemplateId;
}

void IndividualDataConsentDetails::setTemplateId(const utility::string_t& value)
{
    m_TemplateId = value;
    m_TemplateIdIsSet = true;
}

bool IndividualDataConsentDetails::templateIdIsSet() const
{
    return m_TemplateIdIsSet;
}

void IndividualDataConsentDetails::unsetTemplateId()
{
    m_TemplateIdIsSet = false;
}
utility::string_t IndividualDataConsentDetails::getTitle() const
{
    return m_Title;
}

void IndividualDataConsentDetails::setTitle(const utility::string_t& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}

bool IndividualDataConsentDetails::titleIsSet() const
{
    return m_TitleIsSet;
}

void IndividualDataConsentDetails::unsetTitle()
{
    m_TitleIsSet = false;
}
utility::string_t IndividualDataConsentDetails::getDescription() const
{
    return m_Description;
}

void IndividualDataConsentDetails::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool IndividualDataConsentDetails::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void IndividualDataConsentDetails::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t IndividualDataConsentDetails::getPurpose() const
{
    return m_Purpose;
}

void IndividualDataConsentDetails::setPurpose(const utility::string_t& value)
{
    m_Purpose = value;
    m_PurposeIsSet = true;
}

bool IndividualDataConsentDetails::purposeIsSet() const
{
    return m_PurposeIsSet;
}

void IndividualDataConsentDetails::unsetPurpose()
{
    m_PurposeIsSet = false;
}
std::shared_ptr<DataConsentStatus> IndividualDataConsentDetails::getStatus() const
{
    return m_Status;
}

void IndividualDataConsentDetails::setStatus(const std::shared_ptr<DataConsentStatus>& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool IndividualDataConsentDetails::statusIsSet() const
{
    return m_StatusIsSet;
}

void IndividualDataConsentDetails::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::string_t IndividualDataConsentDetails::getTransactionId() const
{
    return m_TransactionId;
}

void IndividualDataConsentDetails::setTransactionId(const utility::string_t& value)
{
    m_TransactionId = value;
    m_TransactionIdIsSet = true;
}

bool IndividualDataConsentDetails::transactionIdIsSet() const
{
    return m_TransactionIdIsSet;
}

void IndividualDataConsentDetails::unsetTransactionId()
{
    m_TransactionIdIsSet = false;
}
utility::datetime IndividualDataConsentDetails::getApprovedAtUtc() const
{
    return m_ApprovedAtUtc;
}

void IndividualDataConsentDetails::setApprovedAtUtc(const utility::datetime& value)
{
    m_ApprovedAtUtc = value;
    m_ApprovedAtUtcIsSet = true;
}

bool IndividualDataConsentDetails::approvedAtUtcIsSet() const
{
    return m_ApprovedAtUtcIsSet;
}

void IndividualDataConsentDetails::unsetApprovedAtUtc()
{
    m_ApprovedAtUtcIsSet = false;
}
utility::datetime IndividualDataConsentDetails::getDataAccessExpiresAtUtc() const
{
    return m_DataAccessExpiresAtUtc;
}

void IndividualDataConsentDetails::setDataAccessExpiresAtUtc(const utility::datetime& value)
{
    m_DataAccessExpiresAtUtc = value;
    m_DataAccessExpiresAtUtcIsSet = true;
}

bool IndividualDataConsentDetails::dataAccessExpiresAtUtcIsSet() const
{
    return m_DataAccessExpiresAtUtcIsSet;
}

void IndividualDataConsentDetails::unsetDataAccessExpiresAtUtc()
{
    m_DataAccessExpiresAtUtcIsSet = false;
}
utility::datetime IndividualDataConsentDetails::getRevokedAtUtc() const
{
    return m_RevokedAtUtc;
}

void IndividualDataConsentDetails::setRevokedAtUtc(const utility::datetime& value)
{
    m_RevokedAtUtc = value;
    m_RevokedAtUtcIsSet = true;
}

bool IndividualDataConsentDetails::revokedAtUtcIsSet() const
{
    return m_RevokedAtUtcIsSet;
}

void IndividualDataConsentDetails::unsetRevokedAtUtc()
{
    m_RevokedAtUtcIsSet = false;
}
}
}


