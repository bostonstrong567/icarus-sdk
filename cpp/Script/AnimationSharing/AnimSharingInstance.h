// /Script/AnimationSharing.AnimSharingInstance
// Derives from: UObject
// size 0x118, declared in Engine/Plugins/Developer/AnimationSharing/Source/AnimationSharing/Public/AnimationSharingManager.h

UCLASS()
class UAnimSharingInstance : public UObject
{
public:
    UPROPERTY(EditAnywhere, Transient) TArray<AActor*> RegisteredActors;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, Transient) UAnimationSharingStateProcessor* StateProcessor;  // 0x0088, size 0x8
    UPROPERTY(EditAnywhere, Transient) TArray<UAnimSequence*> UsedAnimationSequences;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere, Transient) UEnum* StateEnum;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, Transient) AActor* SharingActor;  // 0x00F0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TArray<FPerActorData,TSizedDefaultAllocator<32> > PerActorData;  // 0x0038
    TArray<FPerComponentData,TSizedDefaultAllocator<32> > PerComponentData;  // 0x0048
    TArray<FPerStateData,TSizedDefaultAllocator<32> > PerStateData;  // 0x0058
    FInstanceStack<FTransitionBlendInstance> BlendInstanceStack;  // 0x0068
    bool bNativeStateProcessor;  // 0x0090
    TArray<FBlendInstance,TSizedDefaultAllocator<32> > BlendInstances;  // 0x0098
    TArray<FOnDemandInstance,TSizedDefaultAllocator<32> > OnDemandInstances;  // 0x00A8
    TArray<FAdditiveInstance,TSizedDefaultAllocator<32> > AdditiveInstances;  // 0x00B8
    USignificanceManager * SignificanceManager;  // 0x00D8
    UAnimationSharingManager * AnimSharingManager;  // 0x00E0
    const FAnimationSharingScalability * ScalabilitySettings;  // 0x00F8
    FVector SkeletalMeshBounds;  // 0x0100
    uint32 NumSetups;  // 0x010C
    float WorldTime;  // 0x0110
};
