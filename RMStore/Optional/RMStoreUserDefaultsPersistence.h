//
//  RMStoreUserDefaultsPersistence.h
//  RMStore
//
//  Created by Hermes on 10/16/13.
//  Copyright (c) 2013 Robot Media. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>
#import "RMStore.h"
@class RMStoreTransaction;

@interface RMStoreUserDefaultsPersistence : NSObject<RMStoreTransactionPersistor>

- (void)removeTransactions;

- (BOOL)consumeProductOfIdentifier:(NSString*)productIdentifier;

- (NSInteger)countProductOfdentifier:(NSString*)productIdentifier;

- (BOOL)isPurchasedProductOfIdentifier:(NSString*)productIdentifier;

- (NSArray*)purchasedProductIdentifiers;

- (NSArray*)transactionsForProductOfIdentifier:(NSString*)productIdentifier;

@end

@interface RMStoreUserDefaultsPersistence(Obfuscation)

- (NSData*)dataWithTransaction:(RMStoreTransaction*)transaction;

- (RMStoreTransaction*)transactionWithData:(NSData*)data;

@end