// /Script/Icarus.TargetRangeControllerRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1F0, declared in Icarus/Source/Icarus/Systems/TargetRange/TargetRangeControllerRecorderComponent.h

UCLASS(Config=Engine)
class UTargetRangeControllerRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) FHighScoreRecord HighScore;  // 0x01C0, size 0x28
    UPROPERTY(SaveGame) float RoundTime;  // 0x01E8, size 0x4
};
