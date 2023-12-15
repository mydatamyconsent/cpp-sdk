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



#include "MyDataMyConsent/model/PushUriResponse.h"

namespace mydatamyconsent {
namespace models {



PushUriResponse::PushUriResponse()
{
    m_ResponseStatus = utility::conversions::to_string_t("");
    m_ResponseStatusIsSet = false;
    m_ResponseMessage = utility::conversions::to_string_t("");
    m_ResponseMessageIsSet = false;
    m_Ns2 = utility::conversions::to_string_t("");
    m_Ns2IsSet = false;
    m_Ver = utility::conversions::to_string_t("");
    m_VerIsSet = false;
    m_Ts = utility::conversions::to_string_t("");
    m_TsIsSet = false;
    m_Txn = utility::conversions::to_string_t("");
    m_TxnIsSet = false;
    m_OrgId = utility::conversions::to_string_t("");
    m_OrgIdIsSet = false;
}

PushUriResponse::~PushUriResponse()
{
}

void PushUriResponse::validate()
{
    // TODO: implement validation
}

web::json::value PushUriResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ResponseStatusIsSet)
    {
        val[utility::conversions::to_string_t(U("responseStatus"))] = ModelBase::toJson(m_ResponseStatus);
    }
    if(m_ResponseMessageIsSet)
    {
        val[utility::conversions::to_string_t(U("responseMessage"))] = ModelBase::toJson(m_ResponseMessage);
    }
    if(m_Ns2IsSet)
    {
        val[utility::conversions::to_string_t(U("ns2"))] = ModelBase::toJson(m_Ns2);
    }
    if(m_VerIsSet)
    {
        val[utility::conversions::to_string_t(U("ver"))] = ModelBase::toJson(m_Ver);
    }
    if(m_TsIsSet)
    {
        val[utility::conversions::to_string_t(U("ts"))] = ModelBase::toJson(m_Ts);
    }
    if(m_TxnIsSet)
    {
        val[utility::conversions::to_string_t(U("txn"))] = ModelBase::toJson(m_Txn);
    }
    if(m_OrgIdIsSet)
    {
        val[utility::conversions::to_string_t(U("orgId"))] = ModelBase::toJson(m_OrgId);
    }

    return val;
}

bool PushUriResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("responseStatus"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("responseStatus")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setResponseStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setResponseStatus);
            setResponseStatus(refVal_setResponseStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("responseMessage"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("responseMessage")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setResponseMessage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setResponseMessage);
            setResponseMessage(refVal_setResponseMessage);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ns2"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ns2")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setNs2;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNs2);
            setNs2(refVal_setNs2);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ver"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ver")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setVer;
            ok &= ModelBase::fromJson(fieldValue, refVal_setVer);
            setVer(refVal_setVer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ts"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ts")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTs;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTs);
            setTs(refVal_setTs);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("txn"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("txn")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTxn;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTxn);
            setTxn(refVal_setTxn);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("orgId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("orgId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setOrgId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOrgId);
            setOrgId(refVal_setOrgId);
        }
    }
    return ok;
}

void PushUriResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ResponseStatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("responseStatus")), m_ResponseStatus));
    }
    if(m_ResponseMessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("responseMessage")), m_ResponseMessage));
    }
    if(m_Ns2IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ns2")), m_Ns2));
    }
    if(m_VerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ver")), m_Ver));
    }
    if(m_TsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ts")), m_Ts));
    }
    if(m_TxnIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("txn")), m_Txn));
    }
    if(m_OrgIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("orgId")), m_OrgId));
    }
}

bool PushUriResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("responseStatus"))))
    {
        utility::string_t refVal_setResponseStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("responseStatus"))), refVal_setResponseStatus );
        setResponseStatus(refVal_setResponseStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("responseMessage"))))
    {
        utility::string_t refVal_setResponseMessage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("responseMessage"))), refVal_setResponseMessage );
        setResponseMessage(refVal_setResponseMessage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ns2"))))
    {
        utility::string_t refVal_setNs2;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ns2"))), refVal_setNs2 );
        setNs2(refVal_setNs2);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ver"))))
    {
        utility::string_t refVal_setVer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ver"))), refVal_setVer );
        setVer(refVal_setVer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ts"))))
    {
        utility::string_t refVal_setTs;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ts"))), refVal_setTs );
        setTs(refVal_setTs);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("txn"))))
    {
        utility::string_t refVal_setTxn;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("txn"))), refVal_setTxn );
        setTxn(refVal_setTxn);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("orgId"))))
    {
        utility::string_t refVal_setOrgId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("orgId"))), refVal_setOrgId );
        setOrgId(refVal_setOrgId);
    }
    return ok;
}

utility::string_t PushUriResponse::getResponseStatus() const
{
    return m_ResponseStatus;
}

void PushUriResponse::setResponseStatus(const utility::string_t& value)
{
    m_ResponseStatus = value;
    m_ResponseStatusIsSet = true;
}

bool PushUriResponse::responseStatusIsSet() const
{
    return m_ResponseStatusIsSet;
}

void PushUriResponse::unsetResponseStatus()
{
    m_ResponseStatusIsSet = false;
}
utility::string_t PushUriResponse::getResponseMessage() const
{
    return m_ResponseMessage;
}

void PushUriResponse::setResponseMessage(const utility::string_t& value)
{
    m_ResponseMessage = value;
    m_ResponseMessageIsSet = true;
}

bool PushUriResponse::responseMessageIsSet() const
{
    return m_ResponseMessageIsSet;
}

void PushUriResponse::unsetResponseMessage()
{
    m_ResponseMessageIsSet = false;
}
utility::string_t PushUriResponse::getNs2() const
{
    return m_Ns2;
}

void PushUriResponse::setNs2(const utility::string_t& value)
{
    m_Ns2 = value;
    m_Ns2IsSet = true;
}

bool PushUriResponse::ns2IsSet() const
{
    return m_Ns2IsSet;
}

void PushUriResponse::unsetNs2()
{
    m_Ns2IsSet = false;
}
utility::string_t PushUriResponse::getVer() const
{
    return m_Ver;
}

void PushUriResponse::setVer(const utility::string_t& value)
{
    m_Ver = value;
    m_VerIsSet = true;
}

bool PushUriResponse::verIsSet() const
{
    return m_VerIsSet;
}

void PushUriResponse::unsetVer()
{
    m_VerIsSet = false;
}
utility::string_t PushUriResponse::getTs() const
{
    return m_Ts;
}

void PushUriResponse::setTs(const utility::string_t& value)
{
    m_Ts = value;
    m_TsIsSet = true;
}

bool PushUriResponse::tsIsSet() const
{
    return m_TsIsSet;
}

void PushUriResponse::unsetTs()
{
    m_TsIsSet = false;
}
utility::string_t PushUriResponse::getTxn() const
{
    return m_Txn;
}

void PushUriResponse::setTxn(const utility::string_t& value)
{
    m_Txn = value;
    m_TxnIsSet = true;
}

bool PushUriResponse::txnIsSet() const
{
    return m_TxnIsSet;
}

void PushUriResponse::unsetTxn()
{
    m_TxnIsSet = false;
}
utility::string_t PushUriResponse::getOrgId() const
{
    return m_OrgId;
}

void PushUriResponse::setOrgId(const utility::string_t& value)
{
    m_OrgId = value;
    m_OrgIdIsSet = true;
}

bool PushUriResponse::orgIdIsSet() const
{
    return m_OrgIdIsSet;
}

void PushUriResponse::unsetOrgId()
{
    m_OrgIdIsSet = false;
}
}
}

