// /Script/AnimationSharing.AnimSharingInstance
// Derives from: UObject
// size 0x118, declared in Engine/Plugins/Developer/AnimationSharing/Source/AnimationSharing/Public/AnimationSharingManager.h

UCLASS()
class UAnimSharingInstance : public UObject
{
public:
    UPROPERTY(EditAnywhere, Transient) TArray<AActor*> RegisteredActors;  // 0x0028, size 0x10
    TArray<FPerActorData,TSizedDefaultAllocator<32> > PerActorData;  // 0x0038, not reflected
    TArray<FPerComponentData,TSizedDefaultAllocator<32> > PerComponentData;  // 0x0048, not reflected
    TArray<FPerStateData,TSizedDefaultAllocator<32> > PerStateData;  // 0x0058, not reflected
    FInstanceStack<FTransitionBlendInstance> BlendInstanceStack;  // 0x0068, not reflected
    UPROPERTY(EditAnywhere, Transient) UAnimationSharingStateProcessor* StateProcessor;  // 0x0088, size 0x8
    bool bNativeStateProcessor;  // 0x0090, not reflected
    TArray<FBlendInstance,TSizedDefaultAllocator<32> > BlendInstances;  // 0x0098, not reflected
    TArray<FOnDemandInstance,TSizedDefaultAllocator<32> > OnDemandInstances;  // 0x00A8, not reflected
    TArray<FAdditiveInstance,TSizedDefaultAllocator<32> > AdditiveInstances;  // 0x00B8, not reflected
    UPROPERTY(EditAnywhere, Transient) TArray<UAnimSequence*> UsedAnimationSequences;  // 0x00C8, size 0x10
    USignificanceManager * SignificanceManager;  // 0x00D8, not reflected
    UAnimationSharingManager * AnimSharingManager;  // 0x00E0, not reflected
    UPROPERTY(EditAnywhere, Transient) UEnum* StateEnum;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, Transient) AActor* SharingActor;  // 0x00F0, size 0x8
    const FAnimationSharingScalability * ScalabilitySettings;  // 0x00F8, not reflected
    FVector SkeletalMeshBounds;  // 0x0100, not reflected
    uint32 NumSetups;  // 0x010C, not reflected
    float WorldTime;  // 0x0110, not reflected
};
