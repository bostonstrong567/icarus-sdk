// /Script/Engine.AnimSet
// Derives from: UObject
// size 0xF0, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimSet.h

UCLASS(MinimalAPI)
class UAnimSet : public UObject
{
public:
    UPROPERTY(EditAnywhere) uint8 bAnimRotationOnly : 1;  // 0x0028, mask 0x01
    UPROPERTY() TArray<FName> TrackBoneNames;  // 0x0030, size 0x10
    UPROPERTY(Transient) TArray<FAnimSetMeshLinkup> LinkupCache;  // 0x0040, size 0x10
    UPROPERTY(Transient) TArray<uint8> BoneUseAnimTranslation;  // 0x0050, size 0x10
    UPROPERTY(Transient) TArray<uint8> ForceUseMeshTranslation;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere) TArray<FName> UseTranslationBoneNames;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere) TArray<FName> ForceMeshTranslationBoneNames;  // 0x0080, size 0x10
    UPROPERTY() FName PreviewSkelMeshName;  // 0x0090, size 0x8
    UPROPERTY() FName BestRatioSkelMeshName;  // 0x0098, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0> > SkelMesh2LinkupCache;  // 0x00A0

    // Virtual functions that start here:
    //   GetMeshLinkupIndex
};
