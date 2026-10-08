// /Game/BP/AI/Bosses/Misc/BP_CaveWorm_Spit_Large.BP_CaveWorm_Spit_Large_C
// Derives from: ABP_SandWorm_Spit_C > ASkeletalProjectile > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x598, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_CaveWorm_Spit_Large_C : public ABP_SandWorm_Spit_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0590, size 0x8
};
