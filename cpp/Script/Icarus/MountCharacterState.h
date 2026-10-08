// /Script/Icarus.MountCharacterState
// Derives from: USurvivalCharacterState > UCharacterState > UActorState > UActorComponent > UObject
// size 0x3F8, declared in Icarus/Source/Icarus/Characters/MountCharacterState.h

UCLASS(Config=Engine)
class UMountCharacterState : public USurvivalCharacterState, public ITalentHandler
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bFilterTalentsByArchetype;  // 0x03A8, size 0x1
    UPROPERTY(BlueprintReadOnly) FTalentArchetypesRowHandle ForcedArchetype;  // 0x03AC, size 0x18
    UPROPERTY(BlueprintAssignable) FOnTalentsChanged OnCreatureTalentsChanged;  // 0x03C8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<FBackendTalent> Talents;  // 0x03D8, size 0x10
    UPROPERTY(Instanced, BlueprintReadOnly) UCreatureTalentControllerComponent* CreatureTalentController;  // 0x03E8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UStomachComponent* StomachComponent;  // 0x03F0, size 0x8

    UFUNCTION() void OnRep_Talents();
    UFUNCTION() void OnTalentControllerModelViewChanged(UTalentControllerComponent* Controller);  // parameters 0x8
    UFUNCTION() void OnUnlockedCreatureTalent(UTalentModelInterface_Const* Model, const FTalentsRowHandle& Talent, const FTalentModelData& TalentData);  // parameters 0x30
    UFUNCTION() void SetTalents(const TArray<FBackendTalent>& NewTalents);  // parameters 0x10
};
