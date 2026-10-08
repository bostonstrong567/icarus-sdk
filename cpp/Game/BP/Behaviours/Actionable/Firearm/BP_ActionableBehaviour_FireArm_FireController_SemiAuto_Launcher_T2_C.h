// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_FireArm_FireController_SemiAuto_Launcher_T2.BP_ActionableBehaviour_FireArm_FireController_SemiAuto_Launcher_T2_C
// Derives from: UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_Launcher_C > UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_C > UBP_ActionableBehaviour_FireArm_FireController_Base_C > UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xCE0, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_Launcher_T2_C : public UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_Launcher_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CD8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_SemiAuto_Launcher_T2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
