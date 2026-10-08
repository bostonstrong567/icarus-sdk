// /Script/Icarus.SessionFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Session/SessionFunctionLibrary.h

UCLASS()
class USessionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static FIcarusSession CreateIcarusSessionFromSession(UObject* WorldContextObject, const FBlueprintSessionResult& Session);  // parameters 0x2D0
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GenerateProspectSessionId(FString UserID, const FProspectInfo& ProspectInfo);  // parameters 0xC0
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GetDedicatedFromExtraSettings(const TArray<FSessionPropertyKeyPair>& ExtraSettings);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetGameVersionFromExtraSettings(const TArray<FSessionPropertyKeyPair>& ExtraSettings);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GetLockedFromExtraSettings(const TArray<FSessionPropertyKeyPair>& ExtraSettings);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetMaxPlayersConfig();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool HasJoinedProspect(FString UserID, TArray<FAssociatedMemberInfo> Members);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProspectInfo MakeProspectInfoFromExtraSettings(UObject* WorldContextObject, const TArray<FSessionPropertyKeyPair>& ExtraSettings);  // parameters 0xB8
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FSessionPropertyKeyPair> MakeSessionExtraSettingsFromProspect(UObject* WorldContextObject, const FProspectInfo& ProspectInfo);  // parameters 0xB8
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool ProspectInfoIsValid(const FIcarusSession& IcarusSession, bool RequiresSession);  // parameters 0x1C2
};
