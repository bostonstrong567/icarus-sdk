// /Script/Engine.InterpTrackLinearColorBase
// Derives from: UInterpTrack > UObject
// size 0x90, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackLinearColorBase.h

UCLASS(Abstract, MinimalAPI)
class UInterpTrackLinearColorBase : public UInterpTrack
{
public:
    UPROPERTY() FInterpCurveLinearColor LinearColorTrack;  // 0x0070, size 0x18
    UPROPERTY(EditAnywhere) float CurveTension;  // 0x0088, size 0x4
};
