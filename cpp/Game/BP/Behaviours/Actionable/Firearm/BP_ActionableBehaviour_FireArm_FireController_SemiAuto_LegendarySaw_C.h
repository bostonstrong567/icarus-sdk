// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_FireArm_FireController_SemiAuto_LegendarySaw.BP_ActionableBehaviour_FireArm_FireController_SemiAuto_LegendarySaw_C
// Derives from: UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_C > UBP_ActionableBehaviour_FireArm_FireController_Base_C > UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xB20, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_LegendarySaw_C : public UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0AE0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusStatContainer* StatContainer;  // 0x0AE8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CalculatedToolDurabilityLoss;  // 0x0AF0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UObject> _3rdFireAnimation;  // 0x0AF8, size 0x28, named "3rdFireAnimation"

    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<CanFireReturnType> CanFire();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DamageItemDurability(int32 Amount);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_SemiAuto_LegendarySaw(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) FTransform GetFirePositionOverride();  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetProjectileMeshOverride(TSoftObjectPtr<UStreamableRenderAsset>& OverrideMesh) const;  // parameters 0x28
    UFUNCTION(BlueprintCallable) void GetProjectileSpawnTransform(float CameraShakeScale, FBallisticData BallisticData, FTransform& NewProjectileTransform);  // parameters 0x230
    UFUNCTION(BlueprintCallable) void PlayFireAnims();
    UFUNCTION(BlueprintCallable) void PlayFireFailed();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
