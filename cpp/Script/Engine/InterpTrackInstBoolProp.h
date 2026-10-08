// /Script/Engine.InterpTrackInstBoolProp
// Derives from: UInterpTrackInstProperty > UInterpTrackInst > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstBoolProp.h

UCLASS()
class UInterpTrackInstBoolProp : public UInterpTrackInstProperty
{
public:
    UPROPERTY() bool ResetBool;  // 0x0060, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    void * BoolPropertyAddress;  // 0x0050
    FBoolProperty * BoolProperty;  // 0x0058
};
