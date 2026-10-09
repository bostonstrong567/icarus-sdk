// /Script/Engine.InterpTrackInstBoolProp
// Derives from: UInterpTrackInstProperty > UInterpTrackInst > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstBoolProp.h

UCLASS()
class UInterpTrackInstBoolProp : public UInterpTrackInstProperty
{
public:
    void * BoolPropertyAddress;  // 0x0050, not reflected
    FBoolProperty * BoolProperty;  // 0x0058, not reflected
    UPROPERTY() bool ResetBool;  // 0x0060, size 0x1
};
