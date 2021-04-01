///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGShowcaseFileViewType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ShowcaseFileViewType` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGShowcaseFileViewType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// (no description).
@property (nonatomic, readonly, copy) NSString *description_;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param description_ (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithDescription_:(NSString *)description_;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ShowcaseFileViewType` struct.
///
@interface DBTEAMLOGShowcaseFileViewTypeSerializer : NSObject

///
/// Serializes `DBTEAMLOGShowcaseFileViewType` instances.
///
/// @param instance An instance of the `DBTEAMLOGShowcaseFileViewType` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGShowcaseFileViewType` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGShowcaseFileViewType *)instance;

///
/// Deserializes `DBTEAMLOGShowcaseFileViewType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGShowcaseFileViewType` API object.
///
/// @return An instantiation of the `DBTEAMLOGShowcaseFileViewType` object.
///
+ (DBTEAMLOGShowcaseFileViewType *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END