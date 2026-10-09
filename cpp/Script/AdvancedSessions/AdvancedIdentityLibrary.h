// /Script/AdvancedSessions.AdvancedIdentityLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/AdvancedIdentityLibrary.h

UCLASS()
class UAdvancedIdentityLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void GetAllUserAccounts(TArray<FBPUserOnlineAccount>& AccountInfos, EBlueprintResultSwitch& Result);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void GetLoginStatus(const FBPUniqueNetId& UniqueNetID, EBPLoginStatus& LoginStatus, EBlueprintResultSwitch& Result);  // parameters 0x22
    UFUNCTION(BlueprintCallable) static void GetPlayerAuthToken(APlayerController* PlayerController, FString& AuthToken, EBlueprintResultSwitch& Result);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetPlayerNickname(const FBPUniqueNetId& UniqueNetID, FString& PlayerNickname);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void GetUserAccount(const FBPUniqueNetId& UniqueNetId, FBPUserOnlineAccount& AccountInfo, EBlueprintResultSwitch& Result);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetUserAccountAccessToken(const FBPUserOnlineAccount& AccountInfo, FString& AccessToken);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void GetUserAccountAttribute(const FBPUserOnlineAccount& AccountInfo, FString AttributeName, FString& AttributeValue, EBlueprintResultSwitch& Result);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetUserAccountAuthAttribute(const FBPUserOnlineAccount& AccountInfo, FString AttributeName, FString& AuthAttribute, EBlueprintResultSwitch& Result);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetUserAccountDisplayName(const FBPUserOnlineAccount& AccountInfo, FString& DisplayName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetUserAccountRealName(const FBPUserOnlineAccount& AccountInfo, FString& UserName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetUserID(const FBPUserOnlineAccount& AccountInfo, FBPUniqueNetId& UniqueNetID);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void SetUserAccountAttribute(const FBPUserOnlineAccount& AccountInfo, FString AttributeName, FString NewAttributeValue, EBlueprintResultSwitch& Result);  // parameters 0x31
};
