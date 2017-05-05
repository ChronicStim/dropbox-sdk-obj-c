///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBPROPERTIESPropertyFieldTemplate;
@class DBTEAMUpdatePropertyTemplateArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UpdatePropertyTemplateArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMUpdatePropertyTemplateArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// An identifier for property template added by `propertiesTemplateAdd`.
@property (nonatomic, readonly, copy) NSString *templateId;

/// A display name for the property template. Property template names can be up
/// to 256 bytes.
@property (nonatomic, readonly, copy, nullable) NSString *name;

/// Description for new property template. Property template descriptions can be
/// up to 1024 bytes.
@property (nonatomic, readonly, copy, nullable) NSString *description_;

/// This is a list of custom properties to add to the property template. There
/// can be up to 64 properties in a single property template.
@property (nonatomic, readonly, nullable) NSArray<DBPROPERTIESPropertyFieldTemplate *> *addFields;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param templateId An identifier for property template added by
/// `propertiesTemplateAdd`.
///
/// @return An initialized instance.
///
- (instancetype)initWithTemplateId:(NSString *)templateId;

///
/// Convenience constructor.
///
/// @param templateId An identifier for property template added by
/// `propertiesTemplateAdd`.
/// @param name A display name for the property template. Property template
/// names can be up to 256 bytes.
///
/// @return An initialized instance.
///
- (instancetype)initWithTemplateId:(NSString *)templateId name:(nullable NSString *)name;

///
/// Convenience constructor.
///
/// @param templateId An identifier for property template added by
/// `propertiesTemplateAdd`.
/// @param name A display name for the property template. Property template
/// names can be up to 256 bytes.
/// @param description_ Description for new property template. Property template
/// descriptions can be up to 1024 bytes.
///
/// @return An initialized instance.
///
- (instancetype)initWithTemplateId:(NSString *)templateId
                              name:(nullable NSString *)name
                      description_:(nullable NSString *)description_;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param templateId An identifier for property template added by
/// `propertiesTemplateAdd`.
/// @param name A display name for the property template. Property template
/// names can be up to 256 bytes.
/// @param description_ Description for new property template. Property template
/// descriptions can be up to 1024 bytes.
/// @param addFields This is a list of custom properties to add to the property
/// template. There can be up to 64 properties in a single property template.
///
/// @return An initialized instance.
///
- (instancetype)initWithTemplateId:(NSString *)templateId
                              name:(nullable NSString *)name
                      description_:(nullable NSString *)description_
                         addFields:(nullable NSArray<DBPROPERTIESPropertyFieldTemplate *> *)addFields;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `UpdatePropertyTemplateArg` struct.
///
@interface DBTEAMUpdatePropertyTemplateArgSerializer : NSObject

///
/// Serializes `DBTEAMUpdatePropertyTemplateArg` instances.
///
/// @param instance An instance of the `DBTEAMUpdatePropertyTemplateArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMUpdatePropertyTemplateArg` API object.
///
+ (NSDictionary *)serialize:(DBTEAMUpdatePropertyTemplateArg *)instance;

///
/// Deserializes `DBTEAMUpdatePropertyTemplateArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMUpdatePropertyTemplateArg` API object.
///
/// @return An instantiation of the `DBTEAMUpdatePropertyTemplateArg` object.
///
+ (DBTEAMUpdatePropertyTemplateArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
