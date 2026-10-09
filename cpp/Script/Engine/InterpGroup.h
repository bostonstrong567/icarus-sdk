// /Script/Engine.InterpGroup
// Derives from: UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpGroup.h

UCLASS(MinimalAPI)
class UInterpGroup : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintReadOnly) TArray<UInterpTrack*> InterpTracks;  // 0x0030, size 0x10
    UPROPERTY() FName GroupName;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere) FColor GroupColor;  // 0x0048, size 0x4
    UPROPERTY() uint8 bCollapsed : 1;  // 0x004C, mask 0x01
    UPROPERTY(Transient) uint8 bVisible : 1;  // 0x004C, mask 0x02
    UPROPERTY() uint8 bIsFolder : 1;  // 0x004C, mask 0x04
    UPROPERTY() uint8 bIsParented : 1;  // 0x004C, mask 0x08
private:
    UPROPERTY(Transient) uint8 bIsSelected : 1;  // 0x004C, mask 0x10

    // Virtual functions that start here:
    //   DeselectGroupActor, SelectGroupActor, SetSelected, UpdateGroup
};
