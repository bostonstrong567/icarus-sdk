// /Script/Engine.InterpEdSelKey
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpGroup.h

USTRUCT()
struct FInterpEdSelKey
{
    UPROPERTY() UInterpGroup* Group;  // 0x0000, size 0x8
    UPROPERTY() UInterpTrack* Track;  // 0x0008, size 0x8
    UPROPERTY() int32 KeyIndex;  // 0x0010, size 0x4
    UPROPERTY() float UnsnappedPosition;  // 0x0014, size 0x4
};
