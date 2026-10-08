DELEGATE() void AchievementWriteDelegate(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);  // parameters 0x10
DELEGATE() void BlueprintFindSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);  // parameters 0x10
DELEGATE() void InAppPurchaseQuery2Result(const TArray<FOnlineProxyStoreOffer>& InAppOfferInformation);  // parameters 0x10
DELEGATE() void InAppPurchaseQueryResult(const TArray<FInAppPurchaseProductInfo>& InAppPurchaseInformation);  // parameters 0x10
DELEGATE() void InAppPurchaseRestoreResult(TEnumAsByte<EInAppPurchaseState> CompletionStatus, const TArray<FInAppPurchaseRestoreInfo>& InAppRestorePurchaseInformation);  // parameters 0x18
DELEGATE() void InAppPurchaseRestoreResult2(EInAppPurchaseStatus PurchaseStatus, const TArray<FInAppPurchaseRestoreInfo2>& InAppPurchaseRestoreInfo);  // parameters 0x18
DELEGATE() void InAppPurchaseResult(TEnumAsByte<EInAppPurchaseState> PurchaseStatus, const FInAppPurchaseProductInfo& InAppPurchaseReceipts);  // parameters 0xB0
DELEGATE() void InAppPurchaseResult2(EInAppPurchaseStatus PurchaseStatus, const TArray<FInAppPurchaseReceiptInfo2>& InAppPurchaseReceipts);  // parameters 0x18
DELEGATE() void LeaderboardQueryResult(int32 LeaderboardValue);  // parameters 0x4
DELEGATE() void OnLeaderboardFlushed(FName SessionName);  // parameters 0x8
DELEGATE() void OnlineConnectionResult(int32 ErrorCode);  // parameters 0x4
DELEGATE() void OnlineLogoutResult(APlayerController* PlayerController);  // parameters 0x8
DELEGATE() void OnlineShowLoginUIResult(APlayerController* PlayerController);  // parameters 0x8
DELEGATE() void OnlineTurnBasedMatchResult(FString MatchID);  // parameters 0x10
