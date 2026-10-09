// /Script/Engine.MorphTarget
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Animation/MorphTarget.h

UCLASS(MinimalAPI)
class UMorphTarget : public UObject
{
public:
    UPROPERTY() USkeletalMesh* BaseSkelMesh;  // 0x0028, size 0x8
    TArray<FMorphTargetLODModel,TSizedDefaultAllocator<32> > MorphLODModels;  // 0x0030, not reflected
};
