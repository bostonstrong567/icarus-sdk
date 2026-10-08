// /Script/Engine.InterpTrackFloatAnimBPParam
// Derives from: UInterpTrackFloatBase > UInterpTrack > UObject
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackFloatAnimBPParam.h

UCLASS()
class UInterpTrackFloatAnimBPParam : public UInterpTrackFloatBase
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<UObject> AnimBlueprintClass;  // 0x0090, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UAnimInstance> AnimClass;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere) FName ParamName;  // 0x00A0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    bool bRefreshParamter;  // 0x00A8, private
};
