// /Script/AdvancedSteamSessions.AdvancedSteamFriendsLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Plugins/AdvancedSteamSessions/Source/AdvancedSteamSessions/Classes/AdvancedSteamFriendsLibrary.h

UCLASS()
class UAdvancedSteamFriendsLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static FBPUniqueNetId CreateSteamIDFromString(FString SteamID64);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static bool FilterText(FString TextToFilter, EBPTextFilteringContext Context, FBPUniqueNetId TextSourceID, FString& FilteredText);  // parameters 0x49
    UFUNCTION(BlueprintCallable) static int32 GetFriendSteamLevel(FBPUniqueNetId UniqueNetId);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBPUniqueNetId GetLocalSteamIDFromSteam();  // parameters 0x20
    UFUNCTION(BlueprintCallable) static UTexture2D* GetSteamFriendAvatar(FBPUniqueNetId UniqueNetId, EBlueprintAsyncResultSwitch& Result, SteamAvatarSize AvatarSize);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void GetSteamFriendGamePlayed(FBPUniqueNetId UniqueNetId, EBlueprintResultSwitch& Result, int32& AppID);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void GetSteamGroups(TArray<FBPSteamGroupInfo>& SteamGroups);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static FString GetSteamPersonaName(FBPUniqueNetId UniqueNetId);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static bool InitTextFiltering();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsOverlayEnabled();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsSteamInBigPictureMode();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static bool OpenSteamUserOverlay(FBPUniqueNetId UniqueNetId, ESteamUserOverlayType DialogType);  // parameters 0x22
    UFUNCTION(BlueprintCallable) static bool RequestSteamFriendInfo(FBPUniqueNetId UniqueNetId, bool bRequireNameOnly);  // parameters 0x22
};
