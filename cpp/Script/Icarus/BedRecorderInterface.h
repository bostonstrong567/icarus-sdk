// /Script/Icarus.BedRecorderInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/BedRecorderComponent.h

UCLASS(Abstract, MinimalAPI)
class UBedRecorderInterface : public UInterface
{
public:
    UFUNCTION(BlueprintNativeEvent) TArray<FString> GetPlayerUIDArray() const;  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void SetPlayerUIDArray(const TArray<FString>& PlayerUIDArray);  // parameters 0x10
};
