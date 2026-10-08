// /Script/Engine.TwitterIntegrationBase
// Derives from: UPlatformInterfaceBase > UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/TwitterIntegrationBase.h

UCLASS(Transient, Config=Engine)
class UTwitterIntegrationBase : public UPlatformInterfaceBase
{
public:

    UFUNCTION() bool AuthorizeAccounts();  // parameters 0x1
    UFUNCTION() bool CanShowTweetUI();  // parameters 0x1
    UFUNCTION() FString GetAccountName(int32 AccountIndex);  // parameters 0x18
    UFUNCTION() int32 GetNumAccounts();  // parameters 0x4
    UFUNCTION() void Init();
    UFUNCTION() bool ShowTweetUI(FString InitialMessage, FString URL, FString Picture);  // parameters 0x31
    UFUNCTION() bool TwitterRequest(FString URL, const TArray<FString>& ParamKeysAndValues, TEnumAsByte<ETwitterRequestMethod> RequestMethod, int32 AccountIndex);  // parameters 0x29

    // Virtual functions that start here:
    //   AuthorizeAccounts, CanShowTweetUI, GetAccountName, GetNumAccounts, Init, ShowTweetUI
    //   TwitterRequest
};
