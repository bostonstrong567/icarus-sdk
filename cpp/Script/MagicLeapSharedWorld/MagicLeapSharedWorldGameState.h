// /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// Derives from: AGameState > AGameStateBase > AInfo > AActor > UObject
// size 0x2D0, declared in Engine/Plugins/Lumin/MagicLeapPassableWorld/Source/MagicLeapSharedWorld/Public/MagicLeapSharedWorldGameState.h

UCLASS(NotPlaceable, Config=Game)
class AMagicLeapSharedWorldGameState : public AGameState
{
public:
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) FMagicLeapSharedWorldSharedData SharedWorldData;  // 0x0290, size 0x10
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms;  // 0x02A0, size 0x10
    UPROPERTY(BlueprintAssignable) FMagicLeapSharedWorldEvent OnSharedWorldDataUpdated;  // 0x02B0, size 0x10
    UPROPERTY(BlueprintAssignable) FMagicLeapSharedWorldEvent OnAlignmentTransformsUpdated;  // 0x02C0, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) FTransform CalculateXRCameraRootTransform() const;  // parameters 0x30
    UFUNCTION() void OnReplicate_AlignmentTransforms();
    UFUNCTION() void OnReplicate_SharedWorldData();

    // Virtual functions that start here:
    //   CalculateXRCameraRootTransform_Implementation
};
