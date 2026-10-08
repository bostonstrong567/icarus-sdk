// /Script/OnlineSubsystemIcarus.OnlineSubsystemIcarusOfflineFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/OnlineSubsystemIcarusOfflineFunctionLibrary.h

UCLASS()
class UOnlineSubsystemIcarusOfflineFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static FString GetOfflineFolder();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsOnlineMode();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static bool SwitchOnlineMode(bool bOnlineMode);  // parameters 0x2
};
