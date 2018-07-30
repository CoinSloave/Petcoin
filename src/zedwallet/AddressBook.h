// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, Petcoin Project
//
// Please see the included LICENSE file for more information.

#include <zedwallet/Types.h>

void addToAddressBook();

void sendFromAddressBook(std::shared_ptr<WalletInfo> &walletInfo,
                         uint32_t height);

void deleteFromAddressBook();

void listAddressBook();

const Maybe<std::string> getAddressBookPaymentID();

const Maybe<const std::string> getAddressBookAddress();

const Maybe<const AddressBookEntry> getAddressBookEntry(AddressBook addressBook);

const std::string getAddressBookName(AddressBook addressBook);

AddressBook getAddressBook();

bool saveAddressBook(AddressBook addressBook);

bool isAddressBookEmpty(AddressBook addressBook);
