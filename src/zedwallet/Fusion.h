// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, Petcoin Project
//
// Please see the included LICENSE file for more information.

#pragma once

#include <Wallet/WalletGreen.h>

bool fusionTX(CryptoNote::WalletGreen &wallet, 
              CryptoNote::TransactionParameters p);

bool optimize(CryptoNote::WalletGreen &wallet, uint64_t threshold);

void fullOptimize(CryptoNote::WalletGreen &wallet);

size_t makeFusionTransaction(CryptoNote::WalletGreen &wallet, 
                             uint64_t threshold);
