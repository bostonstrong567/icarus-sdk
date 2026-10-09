// /Script/Engine.InterpTrackInstFloatAnimBPParam
// Derives from: UInterpTrackInst > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstFloatAnimBPParam.h

UCLASS()
class UInterpTrackInstFloatAnimBPParam : public UInterpTrackInst
{
public:
    UPROPERTY(Transient) UAnimInstance* AnimScriptInstance;  // 0x0028, size 0x8
    UPROPERTY(Transient) float ResetFloat;  // 0x0030, size 0x4
    FProperty * ParamProperty;  // 0x0038, not reflected
};
