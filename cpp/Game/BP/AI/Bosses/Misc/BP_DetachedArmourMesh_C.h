// /Game/BP/AI/Bosses/Misc/BP_DetachedArmourMesh.BP_DetachedArmourMesh_C
// Derives from: AActor > UObject
// size 0x278, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DetachedArmourMesh_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMeshRoot;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USkeletalMesh* SkeletalMesh;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseSnapshot SkeletonPose;  // 0x0238, size 0x38
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UAnimInstance> AnimBP;  // 0x0270, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_DetachedArmourMesh(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
