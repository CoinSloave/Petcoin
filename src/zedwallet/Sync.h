// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, Petcoin Project
//
// Please see the included LICENSE file for more information.

#pragma once

#include <zedwallet/Types.h>

void syncWallet(CryptoNote::INode &node,
                std::shared_ptr<WalletInfo> &walletInfo);

void checkForNewTransactions(std::shared_ptr<WalletInfo> &walletInfo);
