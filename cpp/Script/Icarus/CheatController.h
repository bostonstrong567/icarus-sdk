// /Script/Icarus.CheatController
// Derives from: AActor > UObject
// size 0x228, declared in Icarus/Source/Icarus/Cheats/CheatController.h

UCLASS(Config=Engine)
class ACheatController : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Replicated) FPerPlayerCheatData PerPlayerCheats;  // 0x0220, size 0x4
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsBuildingIntegrityDisabled(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsGodModeEnabled(AActor* Actor);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsLandMinesExploDisabled(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsShelteredRequiredDisabled(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsUnlimitedResourcesEnabled(AActor* Actor);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsUnlockAllRecipesEnabled(AActor* Actor);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsVerboseDamageLoggingEnabled(AActor* Actor);  // parameters 0x9
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void SetBuildingIntegrityDisabled(bool bDisabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void SetGodModeEnabled(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void SetLandMinesExploDisabled(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void SetShelteredRequiredDisabled(bool bDisabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void SetUnlimitedResourcesEnabled(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void SetUnlockAllRecipes(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void SetVerboseDamageLoggingEnabled(bool bEnabled);  // parameters 0x1
};
