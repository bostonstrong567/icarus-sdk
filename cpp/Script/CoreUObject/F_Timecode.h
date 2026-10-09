// /Script/CoreUObject.Timecode
// size 0x14, declared in Engine/Source/Runtime/Core/Public/Misc/Timecode.h

USTRUCT()
struct FTimecode
{
public:
    UPROPERTY(BlueprintReadWrite) int32 Hours;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 Minutes;  // 0x0004, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 Seconds;  // 0x0008, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 Frames;  // 0x000C, size 0x4
    UPROPERTY(BlueprintReadWrite) bool bDropFrameFormat;  // 0x0010, size 0x1
};
