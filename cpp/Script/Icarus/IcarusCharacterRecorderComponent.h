// /Script/Icarus.IcarusCharacterRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1D0, declared in Icarus/Source/Icarus/Characters/IcarusCharacterRecorderComponent.h

UCLASS(Config=Engine)
class UIcarusCharacterRecorderComponent : public UActorStateRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, SaveGame) FIcarusCharacterRecord CharacterRecord;  // 0x01C0, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 ParentCharacterUID;  // 0x01C4, size 0x4
};
