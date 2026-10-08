// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_FireArm_FireController_SemiAuto_Launcher.BP_ActionableBehaviour_FireArm_FireController_SemiAuto_Launcher_C
// Derives from: UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_C > UBP_ActionableBehaviour_FireArm_FireController_Base_C > UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xCD4, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_Launcher_C : public UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBallisticData BallisticData;  // 0x0AE0, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ZeroRange;  // 0x0CD0, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetBallisticWeight(float& Weight);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetLaunchForce();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetZeroedRotation(float RangeMeters, FTransform LaunchTransform, FRotator& Rotation, bool& Override);  // parameters 0x4D
    UFUNCTION(BlueprintCallable, BlueprintPure) void OnFireAdjustRotation(FTransform InTransform, FRotator& NewRotation, bool& Override);  // parameters 0x3D
    UFUNCTION(BlueprintCallable, BlueprintPure) void OverrideForceMatch(bool& Override);  // parameters 0x1
};
