// /Script/OnlineSubsystemIcarus.OnlineSubsystemIcarusFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/OnlineSubsystemIcarusFunctionLibrary.h

UCLASS()
class UOnlineSubsystemIcarusFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetGatewayAddress();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetHash(const TArray<uint8>& Buffer);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static UIcarusConnectionComponent* GetIcarusConnectionComponent();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static UIcarusLobbyConnectionComponent* GetIcarusLobbyConnectionComponent();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static UIcarusMessageListeners* GetIcarusMessageListeners();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GetIcarusVersion(FIcarusVersion& Version);  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsOnlineSubsystemIcarusEnabled();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPresencePropertyKeyPair MakeLiteralPresencePropertyString(FName Key, FString Value);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static void SetPresence(APlayerController* PlayerController, EOnlinePresenceStatusIcarus NewState, const TArray<FPresencePropertyKeyPair>& Properties);  // parameters 0x20
};
