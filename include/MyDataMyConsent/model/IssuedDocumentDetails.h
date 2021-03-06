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

/*
 * IssuedDocumentDetails.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_MODELS_IssuedDocumentDetails_H_
#define MYDATAMYCONSENT_MODELS_IssuedDocumentDetails_H_


#include "MyDataMyConsent/ModelBase.h"

#include "MyDataMyConsent/model/DocumentDigitalSignature.h"
#include "MyDataMyConsent/model/DocumentReceiver.h"
#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>

namespace mydatamyconsent {
namespace models {

class DocumentReceiver;
class DocumentDigitalSignature;

/// <summary>
/// 
/// </summary>
class  IssuedDocumentDetails
    : public ModelBase
{
public:
    IssuedDocumentDetails();
    virtual ~IssuedDocumentDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// IssuedDocumentDetails members

    /// <summary>
    /// Document Id.
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// Document Identifier.
    /// </summary>
    utility::string_t getIdentifier() const;
    bool identifierIsSet() const;
    void unsetIdentifier();

    void setIdentifier(const utility::string_t& value);

    /// <summary>
    /// Document type name.
    /// </summary>
    utility::string_t getDocumentType() const;
    bool documentTypeIsSet() const;
    void unsetDocumentType();

    void setDocumentType(const utility::string_t& value);

    /// <summary>
    /// User name.
    /// </summary>
    utility::string_t getIssuedTo() const;
    bool issuedToIsSet() const;
    void unsetIssuedTo();

    void setIssuedTo(const utility::string_t& value);

    /// <summary>
    /// Issued datetime in UTC timezone.
    /// </summary>
    utility::datetime getIssuedAtUtc() const;
    bool issuedAtUtcIsSet() const;
    void unsetIssuedAtUtc();

    void setIssuedAtUtc(const utility::datetime& value);

    /// <summary>
    /// Expires datetime in UTC timezone.
    /// </summary>
    utility::datetime getExpiresAtUtc() const;
    bool expiresAtUtcIsSet() const;
    void unsetExpiresAtUtc();

    void setExpiresAtUtc(const utility::datetime& value);

    /// <summary>
    /// Accepted datetime in UTC timezone.
    /// </summary>
    utility::datetime getAcceptedAtUtc() const;
    bool acceptedAtUtcIsSet() const;
    void unsetAcceptedAtUtc();

    void setAcceptedAtUtc(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DocumentReceiver> getReceiver() const;
    bool receiverIsSet() const;
    void unsetReceiver();

    void setReceiver(const std::shared_ptr<DocumentReceiver>& value);

    /// <summary>
    /// Metadata.
    /// </summary>
    std::map<utility::string_t, utility::string_t>& getMetadata();
    bool metadataIsSet() const;
    void unsetMetadata();

    void setMetadata(const std::map<utility::string_t, utility::string_t>& value);

    /// <summary>
    /// Digital signatures.
    /// </summary>
    std::vector<std::shared_ptr<DocumentDigitalSignature>>& getDigitalSignatures();
    bool digitalSignaturesIsSet() const;
    void unsetDigitalSignatures();

    void setDigitalSignatures(const std::vector<std::shared_ptr<DocumentDigitalSignature>>& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Identifier;
    bool m_IdentifierIsSet;
    utility::string_t m_DocumentType;
    bool m_DocumentTypeIsSet;
    utility::string_t m_IssuedTo;
    bool m_IssuedToIsSet;
    utility::datetime m_IssuedAtUtc;
    bool m_IssuedAtUtcIsSet;
    utility::datetime m_ExpiresAtUtc;
    bool m_ExpiresAtUtcIsSet;
    utility::datetime m_AcceptedAtUtc;
    bool m_AcceptedAtUtcIsSet;
    std::shared_ptr<DocumentReceiver> m_Receiver;
    bool m_ReceiverIsSet;
    std::map<utility::string_t, utility::string_t> m_Metadata;
    bool m_MetadataIsSet;
    std::vector<std::shared_ptr<DocumentDigitalSignature>> m_DigitalSignatures;
    bool m_DigitalSignaturesIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_IssuedDocumentDetails_H_ */
