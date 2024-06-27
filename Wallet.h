#include <string>
#include <map>
#include "OrderBookEntry.h"

#pragma once

class Wallet
{
    public:
        Wallet();
        /**insert currency to the wallet */
        void insertCurrency(std::string type, double amount);
         /**remove currency from the wallet */
        bool removeCurrency(std::string type, double amount);

        /** check if the wallet contians this much currency or more */
        bool containsCurrency(std::string type, double amount);
        /* Checks if the wallet can cope with this possible bid*/
        bool canFulfillOrder(OrderBookEntry order);
        void processSale(OrderBookEntry& sale);    
        /** generate a string representation of the wallet*/
        std::string toString();

        private:
        std::map<std::string, double> currencies;


};
