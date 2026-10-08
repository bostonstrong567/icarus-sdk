// /Script/AnimationSharing.AnimationSharingStateProcessor
// Derives from: UObject
// size 0x50, declared in Engine/Plugins/Developer/AnimationSharing/Source/AnimationSharing/Public/AnimationSharingTypes.h

UCLASS()
class UAnimationSharingStateProcessor : public UObject
{
public:
    UPROPERTY(EditAnywhere) TSoftObjectPtr<UEnum> AnimationStateEnum;  // 0x0028, size 0x28

    UFUNCTION(BlueprintNativeEvent) UEnum* GetAnimationStateEnum();  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void ProcessActorState(int32& OutState, AActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool& bShouldProcess);  // parameters 0x13

    // Virtual functions that start here:
    //   GetAnimationStateEnum_Implementation, GetAnimationStateEnum_Internal
    //   ProcessActorState_Implementation, ProcessActorState_Internal, ProcessActorStates
};
