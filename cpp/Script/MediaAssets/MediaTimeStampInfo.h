// /Script/MediaAssets.MediaTimeStampInfo
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/MediaAssets/Public/MediaPlayer.h

UCLASS()
class UMediaTimeStampInfo : public UObject
{
public:
    UPROPERTY(BlueprintReadOnly) FTimespan Time;  // 0x0028, size 0x8
    UPROPERTY(BlueprintReadOnly) int64 SequenceIndex;  // 0x0030, size 0x8
};
