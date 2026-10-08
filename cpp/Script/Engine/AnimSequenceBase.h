// /Script/Engine.AnimSequenceBase
// Derives from: UAnimationAsset > UObject
// size 0xA8, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimSequenceBase.h

UCLASS(Abstract)
class UAnimSequenceBase : public UAnimationAsset
{
public:
    UPROPERTY() TArray<FAnimNotifyEvent> Notifies;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SequenceLength;  // 0x0090, size 0x4
    UPROPERTY(EditAnywhere) float RateScale;  // 0x0094, size 0x4
    UPROPERTY() FRawCurveTracks RawCurveData;  // 0x0098, size 0x10

    UFUNCTION(BlueprintCallable) float GetPlayLength();  // parameters 0x4

    // Virtual functions that start here:
    //   AdvanceMarkerPhaseAsFollower, AdvanceMarkerPhaseAsLeader, CanBeUsedInComposition
    //   EnableRootMotionSettingFromMontage, EvaluateCurveData, GetAdditiveAnimType
    //   GetAnimNotifiesFromDeltaPositions, GetAnimationPose, GetCurveData
    //   GetFirstMatchingPosFromMarkerSyncPos, GetMarkerIndicesForPosition, GetMarkerIndicesForTime
    //   GetMarkerSyncPositionfromMarkerIndicies, GetNextMatchingPosFromMarkerSyncPos, GetNumberOfFrames
    //   GetPlayLength, GetPrevMatchingPosFromMarkerSyncPos, HandleAssetPlayerTickedInternal, HasCurveData
    //   HasRootMotion, IsNotifyAvailable, RefreshCacheData
};
