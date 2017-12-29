///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGCertificate;
@class DBTEAMLOGSsoChangeCertDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SsoChangeCertDetails` struct.
///
/// Changed the X.509 certificate for SSO.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSsoChangeCertDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Previous SSO certificate details. Might be missing due to historical data
/// gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGCertificate *previousCertificateDetails;

/// New SSO certificate details.
@property (nonatomic, readonly) DBTEAMLOGCertificate *dNewCertificateDetails;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewCertificateDetails New SSO certificate details.
/// @param previousCertificateDetails Previous SSO certificate details. Might be
/// missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewCertificateDetails:(DBTEAMLOGCertificate *)dNewCertificateDetails
                    previousCertificateDetails:(nullable DBTEAMLOGCertificate *)previousCertificateDetails;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewCertificateDetails New SSO certificate details.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewCertificateDetails:(DBTEAMLOGCertificate *)dNewCertificateDetails;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SsoChangeCertDetails` struct.
///
@interface DBTEAMLOGSsoChangeCertDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSsoChangeCertDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGSsoChangeCertDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSsoChangeCertDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGSsoChangeCertDetails *)instance;

///
/// Deserializes `DBTEAMLOGSsoChangeCertDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSsoChangeCertDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGSsoChangeCertDetails` object.
///
+ (DBTEAMLOGSsoChangeCertDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
