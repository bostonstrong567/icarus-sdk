// /Game/BP/AI/GOAP/AI/BP_NPC_Calf_Juvenile_Character.BP_NPC_Calf_Juvenile_Character_C
// Derives from: ABP_NPC_Juvenile_Domesticated_C > ABP_IcarusNPCGOAPCharacter_Juvenile_C > ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCF8, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Calf_Juvenile_Character_C : public ABP_NPC_Juvenile_Domesticated_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x0CF0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Get_Stance_Transition_Montage(EGOAPCharacterStance NewStance, UAnimMontage*& OutMontage);  // parameters 0x10, named "Get Stance Transition Montage"
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
};
