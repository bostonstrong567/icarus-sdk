// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_FireArm_FireController_LegendarySniper.BP_ActionableBehaviour_FireArm_FireController_LegendarySniper_C
// Derives from: UBP_ActionableBehaviour_FireArm_FireController_Base_C > UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xB18, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_FireArm_FireController_LegendarySniper_C : public UBP_ActionableBehaviour_FireArm_FireController_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0AE0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNiagaraSystem* Niagara_A_Silencer;  // 0x0AE8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNiagaraSystem* Niagara_B_MatchGrade;  // 0x0AF0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNiagaraSystem* Niagara_C_Extended;  // 0x0AF8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNiagaraSystem* Niagara_Base;  // 0x0B00, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNiagaraSystem* Niagara_Chamber;  // 0x0B08, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* ChamberSmoke;  // 0x0B10, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_LegendarySniper(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayMuzzleFlash();
};
