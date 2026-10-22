// /Game/BP/AI/GOAP/AI/BP_NPC_Wolf_Conifier_Juvenile.BP_NPC_Wolf_Conifier_Juvenile_C
// Derives from: ABP_IcarusNPCGOAPCharacter_Juvenile_C > ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCE8, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Wolf_Conifier_Juvenile_C : public ABP_IcarusNPCGOAPCharacter_Juvenile_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x0CE0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
};
