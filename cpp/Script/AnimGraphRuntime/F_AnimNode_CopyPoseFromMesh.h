// /Script/AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// size 0x1D8, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_CopyPoseFromMesh.h

USTRUCT()
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
public:
    UPROPERTY(Transient, Instanced, BlueprintReadWrite) TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseAttachedParent : 1;  // 0x0018, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCopyCurves : 1;  // 0x0018, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCopyCustomAttributes;  // 0x0019, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseMeshPose : 1;  // 0x001A, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RootBoneToCopy;  // 0x001C, size 0x8
private:
    TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> CurrentlyUsedSourceMeshComponent;  // 0x0024, not reflected
    TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> CurrentlyUsedSourceMesh;  // 0x002C, not reflected
    TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> CurrentlyUsedMesh;  // 0x0034, not reflected
    TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> CurrentlyUsedTargetMesh;  // 0x003C, not reflected
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0> > BoneMapToSource;  // 0x0048, not reflected
    TMap<FName,unsigned short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned short,0> > CurveNameToUIDMap;  // 0x0098, not reflected
    TArray<FTransform,TSizedDefaultAllocator<32> > SourceMeshTransformArray;  // 0x00E8, not reflected
    TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0> > SourceCurveList;  // 0x00F8, not reflected
    FHeapCustomAttributes SourceCustomAttributes;  // 0x0148, not reflected
};
