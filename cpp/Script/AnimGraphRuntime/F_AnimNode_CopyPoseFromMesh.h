// /Script/AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// size 0x1D8, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_CopyPoseFromMesh.h

USTRUCT()
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
    UPROPERTY(Transient, Instanced, BlueprintReadWrite) TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseAttachedParent : 1;  // 0x0018, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCopyCurves : 1;  // 0x0018, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCopyCustomAttributes;  // 0x0019, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseMeshPose : 1;  // 0x001A, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RootBoneToCopy;  // 0x001C, size 0x8

    // Not reflected:
    TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> CurrentlyUsedSourceMeshComponent;  // 0x0024
    TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> CurrentlyUsedSourceMesh;  // 0x002C
    TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> CurrentlyUsedMesh;  // 0x0034
    TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> CurrentlyUsedTargetMesh;  // 0x003C
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0> > BoneMapToSource;  // 0x0048
    TMap<FName,unsigned short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned short,0> > CurveNameToUIDMap;  // 0x0098
    TArray<FTransform,TSizedDefaultAllocator<32> > SourceMeshTransformArray;  // 0x00E8
    TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0> > SourceCurveList;  // 0x00F8
    FHeapCustomAttributes SourceCustomAttributes;  // 0x0148
};
