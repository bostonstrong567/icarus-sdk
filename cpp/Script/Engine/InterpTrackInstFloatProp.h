// /Script/Engine.InterpTrackInstFloatProp
// Derives from: UInterpTrackInstProperty > UInterpTrackInst > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstFloatProp.h

UCLASS(MinimalAPI)
class UInterpTrackInstFloatProp : public UInterpTrackInstProperty
{
public:
    UPROPERTY() float ResetFloat;  // 0x0058, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    float * FloatProp;  // 0x0050
};
