// /Script/Engine.AnimNode_SequencePlayer
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_SequencePlayer.h

USTRUCT()
struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequenceBase* Sequence;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlayRateBasis;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlayRate;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputScaleBiasClamp PlayRateScaleBiasClamp;  // 0x0048, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StartPosition;  // 0x0078, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLoopAnimation;  // 0x007C, size 0x1
};
