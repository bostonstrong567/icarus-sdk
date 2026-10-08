// /Script/Engine.TimelineTemplate
// Derives from: UObject
// size 0xB8, declared in Engine/Source/Runtime/Engine/Classes/Engine/TimelineTemplate.h

UCLASS(MinimalAPI)
class UTimelineTemplate : public UObject
{
public:
    UPROPERTY(EditAnywhere) float TimelineLength;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<ETimelineLengthMode> LengthMode;  // 0x002C, size 0x1
    UPROPERTY(EditAnywhere) uint8 bAutoPlay : 1;  // 0x002D, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bLoop : 1;  // 0x002D, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bReplicated : 1;  // 0x002D, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bIgnoreTimeDilation : 1;  // 0x002D, mask 0x08
    UPROPERTY() TArray<FTTEventTrack> EventTracks;  // 0x0030, size 0x10
    UPROPERTY() TArray<FTTFloatTrack> FloatTracks;  // 0x0040, size 0x10
    UPROPERTY() TArray<FTTVectorTrack> VectorTracks;  // 0x0050, size 0x10
    UPROPERTY() TArray<FTTLinearColorTrack> LinearColorTracks;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere) TArray<FBPVariableMetaDataEntry> MetaDataArray;  // 0x0070, size 0x10
    UPROPERTY() FGuid TimelineGuid;  // 0x0080, size 0x10
    UPROPERTY() TEnumAsByte<ETickingGroup> TimelineTickGroup;  // 0x0090, size 0x1
    UPROPERTY() FName VariableName;  // 0x0094, size 0x8
    UPROPERTY() FName DirectionPropertyName;  // 0x009C, size 0x8
    UPROPERTY() FName UpdateFunctionName;  // 0x00A4, size 0x8
    UPROPERTY() FName FinishedFunctionName;  // 0x00AC, size 0x8
};
