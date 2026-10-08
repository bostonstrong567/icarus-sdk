// /Script/Icarus.IcarusCowCharacterRecorderComponent
// Derives from: UIcarusMountCharacterRecorderComponent > UIcarusNPCRecorderComponent > UIcarusCharacterRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x2E0, declared in Icarus/Source/Icarus/AI/Mounts/IcarusCowCharacterRecorderComponent.h

UCLASS(Config=Engine)
class UIcarusCowCharacterRecorderComponent : public UIcarusMountCharacterRecorderComponent
{
public:
    UPROPERTY(EditAnywhere, SaveGame) int32 CurrentMilk;  // 0x02D8, size 0x4
};
