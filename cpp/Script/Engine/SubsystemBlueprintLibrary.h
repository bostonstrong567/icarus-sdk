// /Script/Engine.SubsystemBlueprintLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Public/Subsystems/SubsystemBlueprintLibrary.h

UCLASS()
class USubsystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static UEngineSubsystem* GetEngineSubsystem(TSubclassOf<UEngineSubsystem> Class);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static UGameInstanceSubsystem* GetGameInstanceSubsystem(UObject* ContextObject, TSubclassOf<UGameInstanceSubsystem> Class);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static ULocalPlayerSubsystem* GetLocalPlayerSubSystemFromPlayerController(APlayerController* PlayerController, TSubclassOf<ULocalPlayerSubsystem> Class);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static ULocalPlayerSubsystem* GetLocalPlayerSubsystem(UObject* ContextObject, TSubclassOf<ULocalPlayerSubsystem> Class);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static UWorldSubsystem* GetWorldSubsystem(UObject* ContextObject, TSubclassOf<UWorldSubsystem> Class);  // parameters 0x18
};
