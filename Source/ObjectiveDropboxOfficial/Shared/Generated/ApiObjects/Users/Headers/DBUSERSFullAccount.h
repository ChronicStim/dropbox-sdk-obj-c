///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"
#import "DBUSERSAccount.h"

@class DBUSERSAccountType;
@class DBUSERSFullAccount;
@class DBUSERSFullTeam;
@class DBUSERSName;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FullAccount` struct.
///
/// Detailed information about the current user's account.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBUSERSFullAccount : DBUSERSAccount <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The user's two-letter country code, if available. Country codes are based on
/// ISO 3166-1 http://en.wikipedia.org/wiki/ISO_3166-1.
@property (nonatomic, readonly, copy, nullable) NSString *country;

/// The language that the user specified. Locale tags will be IETF language tags
/// http://en.wikipedia.org/wiki/IETF_language_tag.
@property (nonatomic, readonly, copy) NSString *locale;

/// The user's referral link https://www.dropbox.com/referrals.
@property (nonatomic, readonly, copy) NSString *referralLink;

/// If this account is a member of a team, information about that team.
@property (nonatomic, readonly, nullable) DBUSERSFullTeam *team;

/// This account's unique team member id. This field will only be present if
/// team is present.
@property (nonatomic, readonly, copy, nullable) NSString *teamMemberId;

/// Whether the user has a personal and work account. If the current account is
/// personal, then team will always be null, but isPaired will indicate if a
/// work account is linked.
@property (nonatomic, readonly) NSNumber *isPaired;

/// What type of account this user has.
@property (nonatomic, readonly) DBUSERSAccountType *accountType;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param accountId The user's unique Dropbox ID.
/// @param name Details of a user's name.
/// @param email The user's e-mail address. Do not rely on this without checking
/// the emailVerified field. Even then, it's possible that the user has since
/// lost access to their e-mail.
/// @param emailVerified Whether the user has verified their e-mail address.
/// @param disabled Whether the user has been disabled.
/// @param locale The language that the user specified. Locale tags will be IETF
/// language tags http://en.wikipedia.org/wiki/IETF_language_tag.
/// @param referralLink The user's referral link
/// https://www.dropbox.com/referrals.
/// @param isPaired Whether the user has a personal and work account. If the
/// current account is personal, then team will always be null, but isPaired
/// will indicate if a work account is linked.
/// @param accountType What type of account this user has.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccountId:(NSString *)accountId
                             name:(DBUSERSName *)name
                            email:(NSString *)email
                    emailVerified:(NSNumber *)emailVerified
                         disabled:(NSNumber *)disabled
                           locale:(NSString *)locale
                     referralLink:(NSString *)referralLink
                         isPaired:(NSNumber *)isPaired
                      accountType:(DBUSERSAccountType *)accountType;

///
/// Convenience constructor.
///
/// @param accountId The user's unique Dropbox ID.
/// @param name Details of a user's name.
/// @param email The user's e-mail address. Do not rely on this without checking
/// the emailVerified field. Even then, it's possible that the user has since
/// lost access to their e-mail.
/// @param emailVerified Whether the user has verified their e-mail address.
/// @param disabled Whether the user has been disabled.
/// @param locale The language that the user specified. Locale tags will be IETF
/// language tags http://en.wikipedia.org/wiki/IETF_language_tag.
/// @param referralLink The user's referral link
/// https://www.dropbox.com/referrals.
/// @param isPaired Whether the user has a personal and work account. If the
/// current account is personal, then team will always be null, but isPaired
/// will indicate if a work account is linked.
/// @param accountType What type of account this user has.
/// @param profilePhotoUrl URL for the photo representing the user, if one is
/// set.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccountId:(NSString *)accountId
                             name:(DBUSERSName *)name
                            email:(NSString *)email
                    emailVerified:(NSNumber *)emailVerified
                         disabled:(NSNumber *)disabled
                           locale:(NSString *)locale
                     referralLink:(NSString *)referralLink
                         isPaired:(NSNumber *)isPaired
                      accountType:(DBUSERSAccountType *)accountType
                  profilePhotoUrl:(nullable NSString *)profilePhotoUrl;

///
/// Convenience constructor.
///
/// @param accountId The user's unique Dropbox ID.
/// @param name Details of a user's name.
/// @param email The user's e-mail address. Do not rely on this without checking
/// the emailVerified field. Even then, it's possible that the user has since
/// lost access to their e-mail.
/// @param emailVerified Whether the user has verified their e-mail address.
/// @param disabled Whether the user has been disabled.
/// @param locale The language that the user specified. Locale tags will be IETF
/// language tags http://en.wikipedia.org/wiki/IETF_language_tag.
/// @param referralLink The user's referral link
/// https://www.dropbox.com/referrals.
/// @param isPaired Whether the user has a personal and work account. If the
/// current account is personal, then team will always be null, but isPaired
/// will indicate if a work account is linked.
/// @param accountType What type of account this user has.
/// @param profilePhotoUrl URL for the photo representing the user, if one is
/// set.
/// @param country The user's two-letter country code, if available. Country
/// codes are based on ISO 3166-1 http://en.wikipedia.org/wiki/ISO_3166-1.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccountId:(NSString *)accountId
                             name:(DBUSERSName *)name
                            email:(NSString *)email
                    emailVerified:(NSNumber *)emailVerified
                         disabled:(NSNumber *)disabled
                           locale:(NSString *)locale
                     referralLink:(NSString *)referralLink
                         isPaired:(NSNumber *)isPaired
                      accountType:(DBUSERSAccountType *)accountType
                  profilePhotoUrl:(nullable NSString *)profilePhotoUrl
                          country:(nullable NSString *)country;

///
/// Convenience constructor.
///
/// @param accountId The user's unique Dropbox ID.
/// @param name Details of a user's name.
/// @param email The user's e-mail address. Do not rely on this without checking
/// the emailVerified field. Even then, it's possible that the user has since
/// lost access to their e-mail.
/// @param emailVerified Whether the user has verified their e-mail address.
/// @param disabled Whether the user has been disabled.
/// @param locale The language that the user specified. Locale tags will be IETF
/// language tags http://en.wikipedia.org/wiki/IETF_language_tag.
/// @param referralLink The user's referral link
/// https://www.dropbox.com/referrals.
/// @param isPaired Whether the user has a personal and work account. If the
/// current account is personal, then team will always be null, but isPaired
/// will indicate if a work account is linked.
/// @param accountType What type of account this user has.
/// @param profilePhotoUrl URL for the photo representing the user, if one is
/// set.
/// @param country The user's two-letter country code, if available. Country
/// codes are based on ISO 3166-1 http://en.wikipedia.org/wiki/ISO_3166-1.
/// @param team If this account is a member of a team, information about that
/// team.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccountId:(NSString *)accountId
                             name:(DBUSERSName *)name
                            email:(NSString *)email
                    emailVerified:(NSNumber *)emailVerified
                         disabled:(NSNumber *)disabled
                           locale:(NSString *)locale
                     referralLink:(NSString *)referralLink
                         isPaired:(NSNumber *)isPaired
                      accountType:(DBUSERSAccountType *)accountType
                  profilePhotoUrl:(nullable NSString *)profilePhotoUrl
                          country:(nullable NSString *)country
                             team:(nullable DBUSERSFullTeam *)team;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param accountId The user's unique Dropbox ID.
/// @param name Details of a user's name.
/// @param email The user's e-mail address. Do not rely on this without checking
/// the emailVerified field. Even then, it's possible that the user has since
/// lost access to their e-mail.
/// @param emailVerified Whether the user has verified their e-mail address.
/// @param disabled Whether the user has been disabled.
/// @param locale The language that the user specified. Locale tags will be IETF
/// language tags http://en.wikipedia.org/wiki/IETF_language_tag.
/// @param referralLink The user's referral link
/// https://www.dropbox.com/referrals.
/// @param isPaired Whether the user has a personal and work account. If the
/// current account is personal, then team will always be null, but isPaired
/// will indicate if a work account is linked.
/// @param accountType What type of account this user has.
/// @param profilePhotoUrl URL for the photo representing the user, if one is
/// set.
/// @param country The user's two-letter country code, if available. Country
/// codes are based on ISO 3166-1 http://en.wikipedia.org/wiki/ISO_3166-1.
/// @param team If this account is a member of a team, information about that
/// team.
/// @param teamMemberId This account's unique team member id. This field will
/// only be present if team is present.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccountId:(NSString *)accountId
                             name:(DBUSERSName *)name
                            email:(NSString *)email
                    emailVerified:(NSNumber *)emailVerified
                         disabled:(NSNumber *)disabled
                           locale:(NSString *)locale
                     referralLink:(NSString *)referralLink
                         isPaired:(NSNumber *)isPaired
                      accountType:(DBUSERSAccountType *)accountType
                  profilePhotoUrl:(nullable NSString *)profilePhotoUrl
                          country:(nullable NSString *)country
                             team:(nullable DBUSERSFullTeam *)team
                     teamMemberId:(nullable NSString *)teamMemberId;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FullAccount` struct.
///
@interface DBUSERSFullAccountSerializer : NSObject

///
/// Serializes `DBUSERSFullAccount` instances.
///
/// @param instance An instance of the `DBUSERSFullAccount` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBUSERSFullAccount` API object.
///
+ (NSDictionary *)serialize:(DBUSERSFullAccount *)instance;

///
/// Deserializes `DBUSERSFullAccount` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBUSERSFullAccount` API object.
///
/// @return An instantiation of the `DBUSERSFullAccount` object.
///
+ (DBUSERSFullAccount *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
