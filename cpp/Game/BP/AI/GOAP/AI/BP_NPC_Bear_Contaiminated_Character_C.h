// /Game/BP/AI/GOAP/AI/BP_NPC_Bear_Contaiminated_Character.BP_NPC_Bear_Contaiminated_Character_C
// Derives from: ABP_NPC_Bear_Character_C > ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCE0, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Bear_Contaiminated_Character_C : public ABP_NPC_Bear_Character_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x0CD8, size 0x8
};
