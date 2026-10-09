// /Script/Engine.InterpTrack
// Derives from: UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrack.h

UCLASS(Abstract, MinimalAPI)
class UInterpTrack : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintReadOnly) TArray<UInterpTrack*> SubTracks;  // 0x0038, size 0x10
    UPROPERTY() TSubclassOf<UInterpTrackInst> TrackInstClass;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere) TEnumAsByte<ETrackActiveCondition> ActiveCondition;  // 0x0050, size 0x1
    UPROPERTY() FString TrackTitle;  // 0x0058, size 0x10
    UPROPERTY() uint8 bOnePerGroup : 1;  // 0x0068, mask 0x01
    UPROPERTY() uint8 bDirGroupOnly : 1;  // 0x0068, mask 0x02
    UPROPERTY() uint8 bIsAnimControlTrack : 1;  // 0x0068, mask 0x10
    UPROPERTY() uint8 bSubTrackOnly : 1;  // 0x0068, mask 0x20
    UPROPERTY(Transient) uint8 bVisible : 1;  // 0x0068, mask 0x40
    UPROPERTY(Transient) uint8 bIsRecording : 1;  // 0x0068, mask 0x80
private:
    UPROPERTY() uint8 bDisableTrack : 1;  // 0x0068, mask 0x04
    UPROPERTY(Transient) uint8 bIsSelected : 1;  // 0x0068, mask 0x08

    // Virtual functions that start here:
    //   AddChildKeyframe, AddKeyframe, AllowStaticActors, ApplyWorldOffset, CanAddChildKeyframe
    //   CanAddKeyframe, ConditionalPreviewUpdateTrack, ConditionalUpdateTrack, CreateSubTracks, DrawTrack
    //   DuplicateKeyframe, GetClosestSnapPosition, GetEdHelperClassName, GetKeyframeColor, GetKeyframeIndex
    //   GetKeyframeTime, GetNumKeyframes, GetSlateHelperClassName, GetTimeRange, GetTrackEndTime
    //   PreviewStopPlayback, PreviewUpdateTrack, ReduceKeys, RemoveKeyframe, Render3DTrack, SetKeyframeTime
    //   SetSelected, SetTrackToSensibleDefault, UpdateChildKeyframe, UpdateKeyframe, UpdateTrack
};
