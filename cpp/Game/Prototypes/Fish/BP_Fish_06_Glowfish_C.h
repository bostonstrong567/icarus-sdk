// /Game/Prototypes/Fish/BP_Fish_06_Glowfish.BP_Fish_06_Glowfish_C
// Derives from: ABP_FishBase_C > AFishActor > AIcarusActor > AActor > UObject
// size 0x530, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Fish_06_Glowfish_C : public ABP_FishBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0528, size 0x8
};
