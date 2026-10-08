DELEGATE() void BlueprintFindFriendSessionDelegate(const TArray<FBlueprintSessionResult>& SessionInfo);  // parameters 0x10
DELEGATE() void BlueprintFindSessionResultDelegate(const FBlueprintSessionResult& Result);  // parameters 0x108
DELEGATE() void BlueprintGetFriendsListDelegate(const TArray<FBPFriendInfo>& Results);  // parameters 0x10
DELEGATE() void BlueprintGetRecentPlayersDelegate(const TArray<FBPOnlineRecentPlayer>& Results);  // parameters 0x10
DELEGATE() void BlueprintGetUserPrivilegeDelegate(EBPUserPrivileges QueriedPrivilege, bool HadPrivilege);  // parameters 0x2
DELEGATE() void BlueprintSendFriendInviteDelegate();
