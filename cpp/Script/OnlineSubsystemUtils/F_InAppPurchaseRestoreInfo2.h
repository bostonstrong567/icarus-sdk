// /Script/OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
// size 0x30, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/InAppPurchaseRestoreCallbackProxy2.h

USTRUCT()
struct FInAppPurchaseRestoreInfo2
{
    UPROPERTY(BlueprintReadOnly) FString ItemName;  // 0x0000, size 0x10
    UPROPERTY(BlueprintReadOnly) FString ItemId;  // 0x0010, size 0x10
    UPROPERTY(BlueprintReadOnly) FString ValidationInfo;  // 0x0020, size 0x10
};
