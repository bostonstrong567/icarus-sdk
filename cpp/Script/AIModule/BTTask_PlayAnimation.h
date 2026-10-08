// /Script/AIModule.BTTask_PlayAnimation
// Derives from: UBTTaskNode > UBTNode > UObject
// size 0xB0, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h

UCLASS()
class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
    UPROPERTY(EditAnywhere) UAnimationAsset* AnimationToPlay;  // 0x0070, size 0x8
    UPROPERTY(EditAnywhere) uint8 bLooping : 1;  // 0x0078, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bNonBlocking : 1;  // 0x0078, mask 0x02
    UPROPERTY(Instanced) UBehaviorTreeComponent* MyOwnerComp;  // 0x0080, size 0x8
    UPROPERTY(Instanced) USkeletalMeshComponent* CachedSkelMesh;  // 0x0088, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    EAnimationMode::Type PreviousAnimationMode;  // 0x0090
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> TimerDelegate;  // 0x0098
    FTimerHandle TimerHandle;  // 0x00A8
};
