// /Script/Engine.BoneMaskFilter
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimData/BoneMaskFilter.h

UCLASS(MinimalAPI)
class UBoneMaskFilter : public UObject
{
public:
    UPROPERTY(EditAnywhere) TArray<FInputBlendPose> BlendPoses;  // 0x0028, size 0x10
};
