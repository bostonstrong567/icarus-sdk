// /Script/Icarus.CollectableNoteRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1D0, declared in Icarus/Source/Icarus/Systems/Notes/CollectableNoteRecorderComponent.h

UCLASS(Config=Engine)
class UCollectableNoteRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) FName CollectableNoteRowName;  // 0x01C0, size 0x8
};
