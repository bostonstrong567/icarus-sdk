// /Script/Icarus.ArcadeMachineRecorderInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ArcadeMachineRecorderComponent.h

UCLASS(Abstract, MinimalAPI)
class UArcadeMachineRecorderInterface : public UInterface
{
public:

    UFUNCTION(BlueprintNativeEvent) TArray<FArcadeMachineScore> GetArcadeMachineScores() const;  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void SetArcadeMachineScores(const TArray<FArcadeMachineScore>& Scores);  // parameters 0x10
};
