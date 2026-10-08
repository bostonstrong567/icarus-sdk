// /Script/Icarus.IcarusTrappedCreatureRecorderComponent
// Derives from: UIcarusNPCRecorderComponent > UIcarusCharacterRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1F0, declared in Icarus/Source/Icarus/AI/Mounts/IcarusTrappedCreatureRecorderComponent.h

UCLASS(Config=Engine)
class UIcarusTrappedCreatureRecorderComponent : public UIcarusNPCRecorderComponent
{
public:
    UPROPERTY(EditAnywhere, SaveGame) int32 Pacificity;  // 0x01E0, size 0x4
};
