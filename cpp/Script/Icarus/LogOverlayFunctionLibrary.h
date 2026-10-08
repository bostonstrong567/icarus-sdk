// /Script/Icarus.LogOverlayFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Subsystems/GameInstance/IcarusLogSubsystem.h

UCLASS()
class ULogOverlayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static bool IsLogValid(const FIcarusLogEntry& Log);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString LogTimestampToString(const FDateTime& Timestamp);  // parameters 0x18
};
