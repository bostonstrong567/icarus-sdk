// /Script/Icarus.BW3ObjectiveRecorderInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/BW3ObjectiveRecorderComponent.h

UCLASS(Abstract, MinimalAPI)
class UBW3ObjectiveRecorderInterface : public UInterface
{
public:

    UFUNCTION(BlueprintNativeEvent) void GetObjectiveState(int32& State);  // parameters 0x4
    UFUNCTION(BlueprintNativeEvent) void SetObjectiveState(int32 State);  // parameters 0x4
};
