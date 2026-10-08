// /Script/Icarus.IcarusCharacterRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1D0, declared in Icarus/Source/Icarus/Characters/IcarusCharacterRecorderComponent.h

UCLASS(Config=Engine)
class UIcarusCharacterRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(EditAnywhere, SaveGame) FIcarusCharacterRecord CharacterRecord;  // 0x01C0, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 ParentCharacterUID;  // 0x01C4, size 0x4
};
