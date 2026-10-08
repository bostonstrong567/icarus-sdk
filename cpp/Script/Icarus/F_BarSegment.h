// /Script/Icarus.BarSegment
// size 0x30, declared in Icarus/Source/Icarus/Systems/Food/StomachComponent.h

USTRUCT()
struct FBarSegment
{
    UPROPERTY(BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0000, size 0x28
    UPROPERTY(BlueprintReadWrite) int32 SegmentSize;  // 0x0028, size 0x4
};
