// /Script/Engine.InterpTrackInstFloatProp
// Derives from: UInterpTrackInstProperty > UInterpTrackInst > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstFloatProp.h

UCLASS(MinimalAPI)
class UInterpTrackInstFloatProp : public UInterpTrackInstProperty
{
public:
    float * FloatProp;  // 0x0050, not reflected
    UPROPERTY() float ResetFloat;  // 0x0058, size 0x4
};
