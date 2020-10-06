// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   YouTube Data API v3 (youtube/v3)
// Description:
//   The YouTube Data API v3 is an API that provides access to YouTube data,
//   such as videos, playlists, and channels.
// Documentation:
//   https://developers.google.com/youtube/

#import "GTLRYouTube.h"

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopeYouTube                         = @"https://www.googleapis.com/auth/youtube";
NSString * const kGTLRAuthScopeYouTubeChannelMembershipsCreator = @"https://www.googleapis.com/auth/youtube.channel-memberships.creator";
NSString * const kGTLRAuthScopeYouTubeForceSsl                 = @"https://www.googleapis.com/auth/youtube.force-ssl";
NSString * const kGTLRAuthScopeYouTubeReadonly                 = @"https://www.googleapis.com/auth/youtube.readonly";
NSString * const kGTLRAuthScopeYouTubeUpload                   = @"https://www.googleapis.com/auth/youtube.upload";
NSString * const kGTLRAuthScopeYouTubeYoutubepartner           = @"https://www.googleapis.com/auth/youtubepartner";
NSString * const kGTLRAuthScopeYouTubeYoutubepartnerChannelAudit = @"https://www.googleapis.com/auth/youtubepartner-channel-audit";

// ----------------------------------------------------------------------------
//   GTLRYouTubeService
//

@implementation GTLRYouTubeService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://www.googleapis.com/";
    self.resumableUploadPath = @"resumable/upload/";
    self.simpleUploadPath = @"upload/";
    self.batchPath = @"batch/youtube/v3";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

+ (NSDictionary<NSString *, Class> *)kindStringToClassMap {
  return @{
    @"youtube#activity" : [GTLRYouTube_Activity class],
    @"youtube#activityListResponse" : [GTLRYouTube_ActivityListResponse class],
    @"youtube#caption" : [GTLRYouTube_Caption class],
    @"youtube#captionListResponse" : [GTLRYouTube_CaptionListResponse class],
    @"youtube#channel" : [GTLRYouTube_Channel class],
    @"youtube#channelBannerResource" : [GTLRYouTube_ChannelBannerResource class],
    @"youtube#channelListResponse" : [GTLRYouTube_ChannelListResponse class],
    @"youtube#channelSection" : [GTLRYouTube_ChannelSection class],
    @"youtube#channelSectionListResponse" : [GTLRYouTube_ChannelSectionListResponse class],
    @"youtube#comment" : [GTLRYouTube_Comment class],
    @"youtube#commentListResponse" : [GTLRYouTube_CommentListResponse class],
    @"youtube#commentThread" : [GTLRYouTube_CommentThread class],
    @"youtube#commentThreadListResponse" : [GTLRYouTube_CommentThreadListResponse class],
    @"youtube#i18nLanguage" : [GTLRYouTube_I18nLanguage class],
    @"youtube#i18nLanguageListResponse" : [GTLRYouTube_I18nLanguageListResponse class],
    @"youtube#i18nRegion" : [GTLRYouTube_I18nRegion class],
    @"youtube#i18nRegionListResponse" : [GTLRYouTube_I18nRegionListResponse class],
    @"youtube#liveBroadcast" : [GTLRYouTube_LiveBroadcast class],
    @"youtube#liveBroadcastListResponse" : [GTLRYouTube_LiveBroadcastListResponse class],
    @"youtube#liveChatBan" : [GTLRYouTube_LiveChatBan class],
    @"youtube#liveChatMessage" : [GTLRYouTube_LiveChatMessage class],
    @"youtube#liveChatMessageListResponse" : [GTLRYouTube_LiveChatMessageListResponse class],
    @"youtube#liveChatModerator" : [GTLRYouTube_LiveChatModerator class],
    @"youtube#liveChatModeratorListResponse" : [GTLRYouTube_LiveChatModeratorListResponse class],
    @"youtube#liveStream" : [GTLRYouTube_LiveStream class],
    @"youtube#liveStreamListResponse" : [GTLRYouTube_LiveStreamListResponse class],
    @"youtube#member" : [GTLRYouTube_Member class],
    @"youtube#memberListResponse" : [GTLRYouTube_MemberListResponse class],
    @"youtube#membershipsLevel" : [GTLRYouTube_MembershipsLevel class],
    @"youtube#membershipsLevelListResponse" : [GTLRYouTube_MembershipsLevelListResponse class],
    @"youtube#playlist" : [GTLRYouTube_Playlist class],
    @"youtube#playlistItem" : [GTLRYouTube_PlaylistItem class],
    @"youtube#playlistItemListResponse" : [GTLRYouTube_PlaylistItemListResponse class],
    @"youtube#playlistListResponse" : [GTLRYouTube_PlaylistListResponse class],
    @"youtube#searchListResponse" : [GTLRYouTube_SearchListResponse class],
    @"youtube#searchResult" : [GTLRYouTube_SearchResult class],
    @"youtube#sponsor" : [GTLRYouTube_Sponsor class],
    @"youtube#sponsorListResponse" : [GTLRYouTube_SponsorListResponse class],
    @"youtube#subscription" : [GTLRYouTube_Subscription class],
    @"youtube#subscriptionListResponse" : [GTLRYouTube_SubscriptionListResponse class],
    @"youtube#superChatEvent" : [GTLRYouTube_SuperChatEvent class],
    @"youtube#superChatEventListResponse" : [GTLRYouTube_SuperChatEventListResponse class],
    @"youtube#thirdPartyLink" : [GTLRYouTube_ThirdPartyLink class],
    @"youtube#thumbnailSetResponse" : [GTLRYouTube_ThumbnailSetResponse class],
    @"youtube#video" : [GTLRYouTube_Video class],
    @"youtube#videoAbuseReportReason" : [GTLRYouTube_VideoAbuseReportReason class],
    @"youtube#videoAbuseReportReasonListResponse" : [GTLRYouTube_VideoAbuseReportReasonListResponse class],
    @"youtube#videoCategory" : [GTLRYouTube_VideoCategory class],
    @"youtube#videoCategoryListResponse" : [GTLRYouTube_VideoCategoryListResponse class],
    @"youtube#videoGetRatingResponse" : [GTLRYouTube_VideoRatingListResponse class],
    @"youtube#videoListResponse" : [GTLRYouTube_VideoListResponse class],
  };
}

@end
