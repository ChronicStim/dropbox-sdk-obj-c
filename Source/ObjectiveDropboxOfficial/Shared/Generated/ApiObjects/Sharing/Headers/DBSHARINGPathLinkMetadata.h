///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSHARINGLinkMetadata.h"
#import "DBSerializableProtocol.h"

@class DBSHARINGPathLinkMetadata;
@class DBSHARINGVisibility;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PathLinkMetadata` struct.
///
/// Metadata for a path-based shared link.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGPathLinkMetadata : DBSHARINGLinkMetadata <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Path in user's Dropbox.
@property (nonatomic, readonly, copy) NSString *path;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param url URL of the shared link.
/// @param visibility Who can access the link.
/// @param path Path in user's Dropbox.
///
/// @return An initialized instance.
///
- (instancetype)initWithUrl:(NSString *)url visibility:(DBSHARINGVisibility *)visibility path:(NSString *)path;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param url URL of the shared link.
/// @param visibility Who can access the link.
/// @param path Path in user's Dropbox.
/// @param expires Expiration time, if set. By default the link won't expire.
///
/// @return An initialized instance.
///
- (instancetype)initWithUrl:(NSString *)url
                 visibility:(DBSHARINGVisibility *)visibility
                       path:(NSString *)path
                    expires:(nullable NSDate *)expires;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PathLinkMetadata` struct.
///
@interface DBSHARINGPathLinkMetadataSerializer : NSObject

///
/// Serializes `DBSHARINGPathLinkMetadata` instances.
///
/// @param instance An instance of the `DBSHARINGPathLinkMetadata` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGPathLinkMetadata` API object.
///
+ (nullable NSDictionary *)serialize:(DBSHARINGPathLinkMetadata *)instance;

///
/// Deserializes `DBSHARINGPathLinkMetadata` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGPathLinkMetadata` API object.
///
/// @return An instantiation of the `DBSHARINGPathLinkMetadata` object.
///
+ (DBSHARINGPathLinkMetadata *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
