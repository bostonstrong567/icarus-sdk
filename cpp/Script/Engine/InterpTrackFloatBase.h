// /Script/Engine.InterpTrackFloatBase
// Derives from: UInterpTrack > UObject
// size 0x90, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackFloatBase.h

UCLASS(Abstract)
class UInterpTrackFloatBase : public UInterpTrack
{
public:
    UPROPERTY() FInterpCurveFloat FloatTrack;  // 0x0070, size 0x18
    UPROPERTY(EditAnywhere) float CurveTension;  // 0x0088, size 0x4
};
