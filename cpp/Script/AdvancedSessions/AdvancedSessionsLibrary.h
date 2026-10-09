// /Script/AdvancedSessions.AdvancedSessionsLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/AdvancedSessionsLibrary.h

UCLASS()
class UAdvancedSessionsLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddOrModifyExtraSettings(TArray<FSessionPropertyKeyPair>& SettingsArray, TArray<FSessionPropertyKeyPair>& NewOrChangedSettings, TArray<FSessionPropertyKeyPair>& ModifiedSettingsArray);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static bool BanPlayer(UObject* WorldContextObject, APlayerController* PlayerToBan, FText BanReason);  // parameters 0x29
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_UNetIDUnetID(const FBPUniqueNetId& A, const FBPUniqueNetId& B);  // parameters 0x41
    UFUNCTION(BlueprintCallable) static void FindSessionPropertyByName(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingsName, EBlueprintResultSwitch& Result, FSessionPropertyKeyPair& OutProperty);  // parameters 0x48
    UFUNCTION(BlueprintCallable) static void FindSessionPropertyIndexByName(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, EBlueprintResultSwitch& Result, int32& OutIndex);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetCurrentSessionID_AsString(UObject* WorldContextObject, FString& SessionID);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetCurrentUniqueBuildID(int32& UniqueBuildId);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void GetExtraSettings(FBlueprintSessionResult SessionResult, TArray<FSessionPropertyKeyPair>& ExtraSettings);  // parameters 0x118
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetNetPlayerIndex(APlayerController* PlayerController, int32& NetPlayerIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetNumberOfNetworkPlayers(UObject* WorldContextObject, int32& NumNetPlayers);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetPlayerName(APlayerController* PlayerController, FString& PlayerName);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetSessionID_AsString(const FBlueprintSessionResult& SessionResult, FString& SessionID);  // parameters 0x118
    UFUNCTION(BlueprintCallable) static void GetSessionPropertyBool(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, bool& SettingValue);  // parameters 0x1A
    UFUNCTION(BlueprintCallable) static void GetSessionPropertyByte(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, uint8& SettingValue);  // parameters 0x1A
    UFUNCTION(BlueprintCallable) static void GetSessionPropertyFloat(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, float& SettingValue);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void GetSessionPropertyInt(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, int32& SettingValue);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static FName GetSessionPropertyKey(const FSessionPropertyKeyPair& SessionProperty);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void GetSessionPropertyString(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, FString& SettingValue);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void GetSessionSettings(UObject* WorldContextObject, int32& NumConnections, int32& NumPrivateConnections, bool& bIsLAN, bool& bIsDedicated, bool& bAllowInvites, bool& bAllowJoinInProgress, bool& bIsAnticheatEnabled, int32& BuildUniqueID, TArray<FSessionPropertyKeyPair>& ExtraSettings, EBlueprintResultSwitch& Result);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetSessionState(UObject* WorldContextObject, EBPOnlineSessionState& SessionState);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetUniqueBuildID(FBlueprintSessionResult SessionResult, int32& UniqueBuildId);  // parameters 0x10C
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetUniqueNetID(APlayerController* PlayerController, FBPUniqueNetId& UniqueNetId);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetUniqueNetIDFromPlayerState(APlayerState* PlayerState, FBPUniqueNetId& UniqueNetId);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool HasOnlineSubsystem(FName SubSystemName);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void IsPlayerInSession(UObject* WorldContextObject, const FBPUniqueNetId& PlayerToCheck, bool& bIsInSession);  // parameters 0x29
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsValidSession(const FBlueprintSessionResult& SessionResult);  // parameters 0x109
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsValidUniqueNetID(const FBPUniqueNetId& UniqueNetId);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static bool KickPlayer(UObject* WorldContextObject, APlayerController* PlayerToKick, FText KickReason);  // parameters 0x29
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSessionPropertyKeyPair MakeLiteralSessionPropertyBool(FName Key, bool Value, EOnlineAdvertisementType Type);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSessionPropertyKeyPair MakeLiteralSessionPropertyByte(FName Key, uint8 Value, EOnlineAdvertisementType Type);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSessionPropertyKeyPair MakeLiteralSessionPropertyFloat(FName Key, float Value, EOnlineAdvertisementType Type);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSessionPropertyKeyPair MakeLiteralSessionPropertyInt(FName Key, int32 Value, EOnlineAdvertisementType Type);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSessionPropertyKeyPair MakeLiteralSessionPropertyString(FName Key, FString Value, EOnlineAdvertisementType Type);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSessionsSearchSetting MakeLiteralSessionSearchProperty(FSessionPropertyKeyPair SessionSearchProperty, EOnlineComparisonOpRedux ComparisonOp);  // parameters 0x60
    UFUNCTION(BlueprintCallable) static void SetPlayerName(APlayerController* PlayerController, FString PlayerName);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void UniqueNetIdToString(const FBPUniqueNetId& UniqueNetId, FString& String);  // parameters 0x30
};
