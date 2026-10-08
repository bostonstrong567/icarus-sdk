// /Script/Engine.InterpTrackInstProperty
// Derives from: UInterpTrackInst > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstProperty.h

UCLASS()
class UInterpTrackInstProperty : public UInterpTrackInst
{
public:
    UPROPERTY() FFieldPath InterpProperty;  // 0x0028, size 0x20
    UPROPERTY() UObject* PropertyOuterObjectInst;  // 0x0048, size 0x8
};
