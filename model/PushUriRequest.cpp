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



#include "PushUriRequest.h"

namespace mydatamyconsent {
namespace models {




PushUriRequest::PushUriRequest()
{
    m_UriDetailsIsSet = false;
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
    m_Keyhash = utility::conversions::to_string_t("");
    m_KeyhashIsSet = false;
}

PushUriRequest::~PushUriRequest()
{
}

void PushUriRequest::validate()
{
    // TODO: implement validation
}

web::json::value PushUriRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_UriDetailsIsSet)
    {
        val[utility::conversions::to_string_t(U("uriDetails"))] = ModelBase::toJson(m_UriDetails);
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
    if(m_KeyhashIsSet)
    {
        val[utility::conversions::to_string_t(U("keyhash"))] = ModelBase::toJson(m_Keyhash);
    }

    return val;
}

bool PushUriRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("uriDetails"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("uriDetails")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<UriDetails> refVal_uriDetails;
            ok &= ModelBase::fromJson(fieldValue, refVal_uriDetails);
            setUriDetails(refVal_uriDetails);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ns2"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ns2")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ns2;
            ok &= ModelBase::fromJson(fieldValue, refVal_ns2);
            setNs2(refVal_ns2);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ver"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ver")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ver;
            ok &= ModelBase::fromJson(fieldValue, refVal_ver);
            setVer(refVal_ver);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ts"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ts")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ts;
            ok &= ModelBase::fromJson(fieldValue, refVal_ts);
            setTs(refVal_ts);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("txn"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("txn")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_txn;
            ok &= ModelBase::fromJson(fieldValue, refVal_txn);
            setTxn(refVal_txn);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("orgId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("orgId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_orgId;
            ok &= ModelBase::fromJson(fieldValue, refVal_orgId);
            setOrgId(refVal_orgId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("keyhash"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("keyhash")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_keyhash;
            ok &= ModelBase::fromJson(fieldValue, refVal_keyhash);
            setKeyhash(refVal_keyhash);
        }
    }
    return ok;
}

void PushUriRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_UriDetailsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("uriDetails")), m_UriDetails));
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
    if(m_KeyhashIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("keyhash")), m_Keyhash));
    }
}

bool PushUriRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("uriDetails"))))
    {
        std::shared_ptr<UriDetails> refVal_uriDetails;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("uriDetails"))), refVal_uriDetails );
        setUriDetails(refVal_uriDetails);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ns2"))))
    {
        utility::string_t refVal_ns2;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ns2"))), refVal_ns2 );
        setNs2(refVal_ns2);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ver"))))
    {
        utility::string_t refVal_ver;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ver"))), refVal_ver );
        setVer(refVal_ver);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ts"))))
    {
        utility::string_t refVal_ts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ts"))), refVal_ts );
        setTs(refVal_ts);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("txn"))))
    {
        utility::string_t refVal_txn;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("txn"))), refVal_txn );
        setTxn(refVal_txn);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("orgId"))))
    {
        utility::string_t refVal_orgId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("orgId"))), refVal_orgId );
        setOrgId(refVal_orgId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("keyhash"))))
    {
        utility::string_t refVal_keyhash;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("keyhash"))), refVal_keyhash );
        setKeyhash(refVal_keyhash);
    }
    return ok;
}

std::shared_ptr<UriDetails> PushUriRequest::getUriDetails() const
{
    return m_UriDetails;
}

void PushUriRequest::setUriDetails(const std::shared_ptr<UriDetails>& value)
{
    m_UriDetails = value;
    m_UriDetailsIsSet = true;
}

bool PushUriRequest::uriDetailsIsSet() const
{
    return m_UriDetailsIsSet;
}

void PushUriRequest::unsetUriDetails()
{
    m_UriDetailsIsSet = false;
}
utility::string_t PushUriRequest::getNs2() const
{
    return m_Ns2;
}

void PushUriRequest::setNs2(const utility::string_t& value)
{
    m_Ns2 = value;
    m_Ns2IsSet = true;
}

bool PushUriRequest::ns2IsSet() const
{
    return m_Ns2IsSet;
}

void PushUriRequest::unsetNs2()
{
    m_Ns2IsSet = false;
}
utility::string_t PushUriRequest::getVer() const
{
    return m_Ver;
}

void PushUriRequest::setVer(const utility::string_t& value)
{
    m_Ver = value;
    m_VerIsSet = true;
}

bool PushUriRequest::verIsSet() const
{
    return m_VerIsSet;
}

void PushUriRequest::unsetVer()
{
    m_VerIsSet = false;
}
utility::string_t PushUriRequest::getTs() const
{
    return m_Ts;
}

void PushUriRequest::setTs(const utility::string_t& value)
{
    m_Ts = value;
    m_TsIsSet = true;
}

bool PushUriRequest::tsIsSet() const
{
    return m_TsIsSet;
}

void PushUriRequest::unsetTs()
{
    m_TsIsSet = false;
}
utility::string_t PushUriRequest::getTxn() const
{
    return m_Txn;
}

void PushUriRequest::setTxn(const utility::string_t& value)
{
    m_Txn = value;
    m_TxnIsSet = true;
}

bool PushUriRequest::txnIsSet() const
{
    return m_TxnIsSet;
}

void PushUriRequest::unsetTxn()
{
    m_TxnIsSet = false;
}
utility::string_t PushUriRequest::getOrgId() const
{
    return m_OrgId;
}

void PushUriRequest::setOrgId(const utility::string_t& value)
{
    m_OrgId = value;
    m_OrgIdIsSet = true;
}

bool PushUriRequest::orgIdIsSet() const
{
    return m_OrgIdIsSet;
}

void PushUriRequest::unsetOrgId()
{
    m_OrgIdIsSet = false;
}
utility::string_t PushUriRequest::getKeyhash() const
{
    return m_Keyhash;
}

void PushUriRequest::setKeyhash(const utility::string_t& value)
{
    m_Keyhash = value;
    m_KeyhashIsSet = true;
}

bool PushUriRequest::keyhashIsSet() const
{
    return m_KeyhashIsSet;
}

void PushUriRequest::unsetKeyhash()
{
    m_KeyhashIsSet = false;
}
}
}


