// /Script/Engine.AnimSegment
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimCompositeBase.h

USTRUCT()
struct FAnimSegment
{
public:
    UPROPERTY(EditAnywhere) UAnimSequenceBase* AnimReference;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) float StartPos;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float AnimStartTime;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) float AnimEndTime;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float AnimPlayRate;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) int32 LoopingCount;  // 0x0018, size 0x4
private:
    bool bValid;  // 0x001C, not reflected
};
