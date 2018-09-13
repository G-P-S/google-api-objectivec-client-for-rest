// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   IAM Service Account Credentials API (iamcredentials/v1)
// Description:
//   IAM Service Account Credentials API
// Documentation:
//   https://cloud.google.com/iam/docs/creating-short-lived-service-account-credentials

#import "GTLRIAMCredentialsObjects.h"

// ----------------------------------------------------------------------------
//
//   GTLRIAMCredentials_GenerateAccessTokenRequest
//

@implementation GTLRIAMCredentials_GenerateAccessTokenRequest
@dynamic delegates, lifetime, scope;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"delegates" : [NSString class],
    @"scope" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRIAMCredentials_GenerateAccessTokenResponse
//

@implementation GTLRIAMCredentials_GenerateAccessTokenResponse
@dynamic accessToken, expireTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRIAMCredentials_GenerateIdentityBindingAccessTokenRequest
//

@implementation GTLRIAMCredentials_GenerateIdentityBindingAccessTokenRequest
@dynamic jwt, scope;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"scope" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRIAMCredentials_GenerateIdentityBindingAccessTokenResponse
//

@implementation GTLRIAMCredentials_GenerateIdentityBindingAccessTokenResponse
@dynamic accessToken, expireTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRIAMCredentials_GenerateIdTokenRequest
//

@implementation GTLRIAMCredentials_GenerateIdTokenRequest
@dynamic audience, delegates, includeEmail;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"delegates" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRIAMCredentials_GenerateIdTokenResponse
//

@implementation GTLRIAMCredentials_GenerateIdTokenResponse
@dynamic token;
@end


// ----------------------------------------------------------------------------
//
//   GTLRIAMCredentials_SignBlobRequest
//

@implementation GTLRIAMCredentials_SignBlobRequest
@dynamic delegates, payload;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"delegates" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRIAMCredentials_SignBlobResponse
//

@implementation GTLRIAMCredentials_SignBlobResponse
@dynamic keyId, signedBlob;
@end


// ----------------------------------------------------------------------------
//
//   GTLRIAMCredentials_SignJwtRequest
//

@implementation GTLRIAMCredentials_SignJwtRequest
@dynamic delegates, payload;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"delegates" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRIAMCredentials_SignJwtResponse
//

@implementation GTLRIAMCredentials_SignJwtResponse
@dynamic keyId, signedJwt;
@end
