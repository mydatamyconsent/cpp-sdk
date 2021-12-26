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
 * OrganizationKyoDocument.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_MODELS_OrganizationKyoDocument_H_
#define MYDATAMYCONSENT_MODELS_OrganizationKyoDocument_H_


#include "ModelBase.h"

#include "model/ApplicationUser.h"
#include "model/Rejection.h"
#include <cpprest/details/basic_types.h>
#include "model/Organization.h"

namespace mydatamyconsent {
namespace models {

class Organization;

/// <summary>
/// 
/// </summary>
class  OrganizationKyoDocument
    : public ModelBase
{
public:
    OrganizationKyoDocument();
    virtual ~OrganizationKyoDocument();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrganizationKyoDocument members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrganizationId() const;
    bool organizationIdIsSet() const;
    void unsetOrganizationId();

    void setOrganizationId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDocumentName() const;
    bool documentNameIsSet() const;
    void unsetDocumentName();

    void setDocumentName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStorageUrl() const;
    bool storageUrlIsSet() const;
    void unsetStorageUrl();

    void setStorageUrl(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getUploadedAtUtc() const;
    bool uploadedAtUtcIsSet() const;
    void unsetUploadedAtUtc();

    void setUploadedAtUtc(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getVerifiedBy() const;
    bool verifiedByIsSet() const;
    void unsetVerifiedBy();

    void setVerifiedBy(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getVerifiedAtUtc() const;
    bool verifiedAtUtcIsSet() const;
    void unsetVerifiedAtUtc();

    void setVerifiedAtUtc(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDeletedBy() const;
    bool deletedByIsSet() const;
    void unsetDeletedBy();

    void setDeletedBy(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getDeletedAtUtc() const;
    bool deletedAtUtcIsSet() const;
    void unsetDeletedAtUtc();

    void setDeletedAtUtc(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Organization> getOrganization() const;
    bool organizationIsSet() const;
    void unsetOrganization();

    void setOrganization(const std::shared_ptr<Organization>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ApplicationUser> getVerifiedByUser() const;
    bool verifiedByUserIsSet() const;
    void unsetVerifiedByUser();

    void setVerifiedByUser(const std::shared_ptr<ApplicationUser>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ApplicationUser> getDeletedByUser() const;
    bool deletedByUserIsSet() const;
    void unsetDeletedByUser();

    void setDeletedByUser(const std::shared_ptr<ApplicationUser>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Rejection> getRejection() const;
    bool rejectionIsSet() const;
    void unsetRejection();

    void setRejection(const std::shared_ptr<Rejection>& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_OrganizationId;
    bool m_OrganizationIdIsSet;
    utility::string_t m_DocumentName;
    bool m_DocumentNameIsSet;
    utility::string_t m_StorageUrl;
    bool m_StorageUrlIsSet;
    utility::datetime m_UploadedAtUtc;
    bool m_UploadedAtUtcIsSet;
    utility::string_t m_VerifiedBy;
    bool m_VerifiedByIsSet;
    utility::datetime m_VerifiedAtUtc;
    bool m_VerifiedAtUtcIsSet;
    utility::string_t m_DeletedBy;
    bool m_DeletedByIsSet;
    utility::datetime m_DeletedAtUtc;
    bool m_DeletedAtUtcIsSet;
    std::shared_ptr<Organization> m_Organization;
    bool m_OrganizationIsSet;
    std::shared_ptr<ApplicationUser> m_VerifiedByUser;
    bool m_VerifiedByUserIsSet;
    std::shared_ptr<ApplicationUser> m_DeletedByUser;
    bool m_DeletedByUserIsSet;
    std::shared_ptr<Rejection> m_Rejection;
    bool m_RejectionIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_OrganizationKyoDocument_H_ */
