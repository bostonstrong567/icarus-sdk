// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_Homestead_Lamp_Wall.BP_Homestead_Lamp_Wall_C
// Derives from: ABP_Light_Fire_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x778, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Homestead_Lamp_Wall_C : public ABP_Light_Fire_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Fill;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Candle_Lamppost;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0770, size 0x8
};
