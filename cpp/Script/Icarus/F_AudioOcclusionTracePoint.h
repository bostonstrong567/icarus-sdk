// /Script/Icarus.AudioOcclusionTracePoint
// size 0x14, declared in Icarus/Source/Icarus/Audio/Occlusion/AudioOcclusionTracePoint.h

USTRUCT()
struct FAudioOcclusionTracePoint
{
public:
    UPROPERTY(BlueprintReadWrite) FName Name;  // 0x0000, size 0x8
    UPROPERTY(BlueprintReadWrite) FVector Location;  // 0x0008, size 0xC
};
