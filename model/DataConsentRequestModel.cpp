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



#include "DataConsentRequestModel.h"

namespace mydatamyconsent {
namespace models {




DataConsentRequestModel::DataConsentRequestModel()
{
    m_ConsentTemplateId = utility::conversions::to_string_t("");
    m_ConsentTemplateIdIsSet = false;
    m_ReceiverIsSet = false;
}

DataConsentRequestModel::~DataConsentRequestModel()
{
}

void DataConsentRequestModel::validate()
{
    // TODO: implement validation
}

web::json::value DataConsentRequestModel::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ConsentTemplateIdIsSet)
    {
        val[utility::conversions::to_string_t(U("consentTemplateId"))] = ModelBase::toJson(m_ConsentTemplateId);
    }
    if(m_ReceiverIsSet)
    {
        val[utility::conversions::to_string_t(U("receiver"))] = ModelBase::toJson(m_Receiver);
    }

    return val;
}

bool DataConsentRequestModel::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("consentTemplateId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("consentTemplateId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_consentTemplateId;
            ok &= ModelBase::fromJson(fieldValue, refVal_consentTemplateId);
            setConsentTemplateId(refVal_consentTemplateId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("receiver"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("receiver")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Receiver> refVal_receiver;
            ok &= ModelBase::fromJson(fieldValue, refVal_receiver);
            setReceiver(refVal_receiver);
        }
    }
    return ok;
}

void DataConsentRequestModel::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ConsentTemplateIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("consentTemplateId")), m_ConsentTemplateId));
    }
    if(m_ReceiverIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("receiver")), m_Receiver));
    }
}

bool DataConsentRequestModel::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("consentTemplateId"))))
    {
        utility::string_t refVal_consentTemplateId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("consentTemplateId"))), refVal_consentTemplateId );
        setConsentTemplateId(refVal_consentTemplateId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("receiver"))))
    {
        std::shared_ptr<Receiver> refVal_receiver;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("receiver"))), refVal_receiver );
        setReceiver(refVal_receiver);
    }
    return ok;
}

utility::string_t DataConsentRequestModel::getConsentTemplateId() const
{
    return m_ConsentTemplateId;
}

void DataConsentRequestModel::setConsentTemplateId(const utility::string_t& value)
{
    m_ConsentTemplateId = value;
    m_ConsentTemplateIdIsSet = true;
}

bool DataConsentRequestModel::consentTemplateIdIsSet() const
{
    return m_ConsentTemplateIdIsSet;
}

void DataConsentRequestModel::unsetConsentTemplateId()
{
    m_ConsentTemplateIdIsSet = false;
}
std::shared_ptr<Receiver> DataConsentRequestModel::getReceiver() const
{
    return m_Receiver;
}

void DataConsentRequestModel::setReceiver(const std::shared_ptr<Receiver>& value)
{
    m_Receiver = value;
    m_ReceiverIsSet = true;
}

bool DataConsentRequestModel::receiverIsSet() const
{
    return m_ReceiverIsSet;
}

void DataConsentRequestModel::unsetReceiver()
{
    m_ReceiverIsSet = false;
}
}
}


