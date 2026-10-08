// /Script/Icarus.CharacterTrapRecorderComponent
// Derives from: UDeployableRecorderComponent > UItemStateRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x2B0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/CharacterTrapRecorderComponent.h

UCLASS(Config=Engine)
class UCharacterTrapRecorderComponent : public UDeployableRecorderComponent
{
public:
    UPROPERTY(EditAnywhere, SaveGame) int32 TrappedCharacterUID;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) TArray<int32> TrappedCharacterUIDs;  // 0x0298, size 0x10
};
