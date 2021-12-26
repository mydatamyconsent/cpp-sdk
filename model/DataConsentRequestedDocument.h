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

/*
 * DataConsentRequestedDocument.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_MODELS_DataConsentRequestedDocument_H_
#define MYDATAMYCONSENT_MODELS_DataConsentRequestedDocument_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace mydatamyconsent {
namespace models {


/// <summary>
/// 
/// </summary>
class  DataConsentRequestedDocument
    : public ModelBase
{
public:
    DataConsentRequestedDocument();
    virtual ~DataConsentRequestedDocument();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DataConsentRequestedDocument members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDrn() const;
    bool drnIsSet() const;
    void unsetDrn();

    void setDrn(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getFromDatetime() const;
    bool fromDatetimeIsSet() const;
    void unsetFromDatetime();

    void setFromDatetime(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getToDatetime() const;
    bool toDatetimeIsSet() const;
    void unsetToDatetime();

    void setToDatetime(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getProviderId() const;
    bool providerIdIsSet() const;
    void unsetProviderId();

    void setProviderId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDocumentTypeId() const;
    bool documentTypeIdIsSet() const;
    void unsetDocumentTypeId();

    void setDocumentTypeId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDocumentIdentifier() const;
    bool documentIdentifierIsSet() const;
    void unsetDocumentIdentifier();

    void setDocumentIdentifier(const utility::string_t& value);


protected:
    utility::string_t m_Drn;
    bool m_DrnIsSet;
    utility::datetime m_FromDatetime;
    bool m_FromDatetimeIsSet;
    utility::datetime m_ToDatetime;
    bool m_ToDatetimeIsSet;
    utility::string_t m_ProviderId;
    bool m_ProviderIdIsSet;
    utility::string_t m_DocumentTypeId;
    bool m_DocumentTypeIdIsSet;
    utility::string_t m_DocumentIdentifier;
    bool m_DocumentIdentifierIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_DataConsentRequestedDocument_H_ */
