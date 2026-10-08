// /Script/Engine.InterpTrackMove
// Derives from: UInterpTrack > UObject
// size 0xC8, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackMove.h

UCLASS(MinimalAPI)
class UInterpTrackMove : public UInterpTrack
{
public:
    UPROPERTY(BlueprintReadOnly) FInterpCurveVector PosTrack;  // 0x0070, size 0x18
    UPROPERTY() FInterpCurveVector EulerTrack;  // 0x0088, size 0x18
    UPROPERTY() FInterpLookupTrack LookupTrack;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere) FName LookAtGroupName;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere) float LinCurveTension;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere) float AngCurveTension;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere) uint8 bUseQuatInterpolation : 1;  // 0x00C0, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bShowArrowAtKeys : 1;  // 0x00C0, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bDisableMovement : 1;  // 0x00C0, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bShowTranslationOnCurveEd : 1;  // 0x00C0, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bShowRotationOnCurveEd : 1;  // 0x00C0, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bHide3DTrack : 1;  // 0x00C0, mask 0x20
    UPROPERTY(EditAnywhere) TEnumAsByte<EInterpTrackMoveRotMode> RotMode;  // 0x00C4, size 0x1

    // Virtual functions that start here:
    //   ClearLookupKeyGroupName, GetKeyTransformAtTime, GetLocationAtTime, GetLookAtRotation
    //   GetLookupKeyGroupName, GetMoveRefFrame, SetLookupKeyGroupName
};
