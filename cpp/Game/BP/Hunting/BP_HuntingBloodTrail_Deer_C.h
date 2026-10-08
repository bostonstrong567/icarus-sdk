// /Game/BP/Hunting/BP_HuntingBloodTrail_Deer.BP_HuntingBloodTrail_Deer_C
// Derives from: ABP_HuntingBloodTrail_C > ABP_HuntingClue_C > AHuntingClue > AIcarusActor > AActor > UObject
// size 0x3A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_HuntingBloodTrail_Deer_C : public ABP_HuntingBloodTrail_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* BloodDecal;  // 0x03A0, size 0x8
};
