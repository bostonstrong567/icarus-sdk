// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_Firearm_AimController_Prediction.BP_ActionableBehaviour_Firearm_AimController_Prediction_C
// Derives from: UBP_ActionableBehaviour_Firearm_AimController_Base_C > UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x9F0, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Firearm_AimController_Prediction_C : public UBP_ActionableBehaviour_Firearm_AimController_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09E8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AimController_Prediction(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFireLocationAndPostion(FVector& FirePosition, FRotator& FireRotation);  // parameters 0x18
    UFUNCTION(BlueprintCallable) FTransform GetFirePositionOverride();  // parameters 0x30
    UFUNCTION(BlueprintCallable) void GetTargetPosition(float Distance, FVector& HitLocation, FVector& CrosshairEndPoint);  // parameters 0x1C
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
