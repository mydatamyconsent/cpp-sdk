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
 * UserAccountFinancialTransactionsDto.h
 *
 * 
 */

#ifndef MYDATAMYCONSENT_MODELS_UserAccountFinancialTransactionsDto_H_
#define MYDATAMYCONSENT_MODELS_UserAccountFinancialTransactionsDto_H_


#include "MyDataMyConsent/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace mydatamyconsent {
namespace models {


/// <summary>
/// 
/// </summary>
class  UserAccountFinancialTransactionsDto
    : public ModelBase
{
public:
    UserAccountFinancialTransactionsDto();
    virtual ~UserAccountFinancialTransactionsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UserAccountFinancialTransactionsDto members

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
    utility::string_t getAccountId() const;
    bool accountIdIsSet() const;
    void unsetAccountId();

    void setAccountId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getInstrumentId() const;
    bool instrumentIdIsSet() const;
    void unsetInstrumentId();

    void setInstrumentId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTransactionType() const;
    bool transactionTypeIsSet() const;
    void unsetTransactionType();

    void setTransactionType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getQuantity() const;
    bool quantityIsSet() const;
    void unsetQuantity();

    void setQuantity(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    double getAveragePrice() const;
    bool averagePriceIsSet() const;
    void unsetAveragePrice();

    void setAveragePrice(double value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCurrency() const;
    bool currencyIsSet() const;
    void unsetCurrency();

    void setCurrency(const utility::string_t& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_AccountId;
    bool m_AccountIdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_InstrumentId;
    bool m_InstrumentIdIsSet;
    utility::string_t m_TransactionType;
    bool m_TransactionTypeIsSet;
    int32_t m_Quantity;
    bool m_QuantityIsSet;
    double m_AveragePrice;
    bool m_AveragePriceIsSet;
    utility::string_t m_Currency;
    bool m_CurrencyIsSet;
};


}
}

#endif /* MYDATAMYCONSENT_MODELS_UserAccountFinancialTransactionsDto_H_ */
